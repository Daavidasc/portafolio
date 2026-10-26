import { useEffect, useRef } from 'react';
import { prefersReducedMotion } from '../lib/motion';

// Fondo de curvas de nivel: un "loss landscape" con un mínimo al centro-derecha.
// Las curvas se calculan en la GPU (shader, píxel a píxel, cada cuadro), por eso el movimiento es
// continuo y casi no usa CPU. Un punto de acento desciende por el gradiente; al llegar, reinicia.
// Es decorativo y no reacciona al cursor. El terreno es idéntico en el shader y en JS (para el punto).

const BASIN = { u: 0.72, v: 0.52 }; // mínimo, en fracción de v y de u/aspecto
const TERRAIN_SCALE = 1.6;
const TERRAIN_SPEED = 0.035; // velocidad de "respiración" (muy lenta)
const MAX_PIXEL_RATIO = 1.5;
const LEVEL_START = 0.2;
const DOT_PULL = 0.9;
const DOT_DAMPING = 2;
const DOT_MAX_SPEED = 0.07; // unidades isotrópicas por segundo
const ARRIVE_DISTANCE = 0.05;
const HOLD_SECONDS = 1.6;

const VERTEX = 'attribute vec2 p; void main(){ gl_Position = vec4(p, 0.0, 1.0); }';

// Relieve suave con senos de dominio deformado (misma fórmula que `relief` en JS).
const FRAGMENT = `
#extension GL_OES_standard_derivatives : enable
precision highp float;
uniform vec2 uSize;
uniform float uTime;
uniform float uAspect;
uniform vec2 uBasin;
uniform float uStep;
uniform float uCount;
uniform vec4 uColor;

float wave(float x, float y, float z) {
  return sin(x * 1.7 + sin(y * 1.3 + z * 1.1) * 1.4 + z)
       * cos(y * 1.9 + sin(x * 1.1 - z) * 1.3 - z * 0.8);
}

float relief(float x, float y, float z) {
  return 0.62 * wave(x, y, z)
       + 0.28 * wave(x * 2.0 + 3.1, y * 2.0 - 1.7, z * 1.3 + 2.0)
       + 0.10 * wave(x * 4.0 - 2.3, y * 4.0 + 4.2, z * 1.7 + 5.0);
}

float field(float u, float v, float t) {
  float n = relief(u * ${TERRAIN_SCALE.toFixed(2)}, v * ${TERRAIN_SCALE.toFixed(2)}, t * ${TERRAIN_SPEED.toFixed(3)});
  float du = u - uBasin.x * uAspect;
  float dv = v - uBasin.y;
  float r2 = du * du + dv * dv;
  return 0.15 + 0.9 * (1.0 - exp(-r2 * 1.1)) + 0.3 * sqrt(r2) + 0.24 * n;
}

void main() {
  vec2 uv = vec2(gl_FragCoord.x / uSize.x, 1.0 - gl_FragCoord.y / uSize.y);
  float value = field(uv.x * uAspect, uv.y, uTime);
  float t = (value - ${LEVEL_START.toFixed(2)}) / uStep;
  float w = max(fwidth(t), 0.0001);
  float d = abs(fract(t - 0.5) - 0.5) / w;
  float line = 1.0 - smoothstep(0.35, 1.15, d);
  float inside = step(0.0, t) * step(t, uCount);
  float a = line * inside * uColor.a;
  gl_FragColor = vec4(uColor.rgb * a, a);
}
`;

type Dot = {
  u: number;
  v: number;
  vu: number;
  vv: number;
  holding: number;
  stalled: number;
};

const wave = (x: number, y: number, z: number) =>
  Math.sin(x * 1.7 + Math.sin(y * 1.3 + z * 1.1) * 1.4 + z) *
  Math.cos(y * 1.9 + Math.sin(x * 1.1 - z) * 1.3 - z * 0.8);

const relief = (x: number, y: number, z: number) =>
  0.62 * wave(x, y, z) +
  0.28 * wave(x * 2 + 3.1, y * 2 - 1.7, z * 1.3 + 2) +
  0.1 * wave(x * 4 - 2.3, y * 4 + 4.2, z * 1.7 + 5);

export const TopoBackground = () => {
  const canvasRef = useRef<HTMLCanvasElement>(null);
  const dotRef = useRef<HTMLSpanElement>(null);

  useEffect(() => {
    const canvas = canvasRef.current;
    const dotElement = dotRef.current;
    const section = canvas?.parentElement;
    const gl = canvas?.getContext('webgl', { premultipliedAlpha: true, antialias: false });

    if (!canvas || !dotElement || !section || !gl) {
      return;
    }

    if (!gl.getExtension('OES_standard_derivatives')) {
      return;
    }

    const compile = (type: number, source: string) => {
      const shader = gl.createShader(type)!;

      gl.shaderSource(shader, source);
      gl.compileShader(shader);

      return shader;
    };

    const program = gl.createProgram()!;

    gl.attachShader(program, compile(gl.VERTEX_SHADER, VERTEX));
    gl.attachShader(program, compile(gl.FRAGMENT_SHADER, FRAGMENT));
    gl.linkProgram(program);

    if (!gl.getProgramParameter(program, gl.LINK_STATUS)) {
      return;
    }

    gl.useProgram(program);

    const buffer = gl.createBuffer();

    gl.bindBuffer(gl.ARRAY_BUFFER, buffer);
    gl.bufferData(gl.ARRAY_BUFFER, new Float32Array([-1, -1, 3, -1, -1, 3]), gl.STATIC_DRAW);

    const position = gl.getAttribLocation(program, 'p');

    gl.enableVertexAttribArray(position);
    gl.vertexAttribPointer(position, 2, gl.FLOAT, false, 0, 0);

    const uniform = (name: string) => gl.getUniformLocation(program, name);
    const uSize = uniform('uSize');
    const uTime = uniform('uTime');
    const uAspect = uniform('uAspect');
    const uBasin = uniform('uBasin');
    const uStep = uniform('uStep');
    const uCount = uniform('uCount');
    const uColor = uniform('uColor');

    const reduced = prefersReducedMotion();
    const root = document.documentElement;

    // Con movimiento reducido solo se muestran las líneas estáticas, sin el punto.
    dotElement.hidden = reduced;

    let width = 0;
    let height = 0;
    let aspect = 1;
    let step = 0.1;
    let count = 16;
    let isLight = false;
    let rgb = [242, 240, 237];
    let time = 0;
    let frame = 0;
    let visible = false;
    let last = 0;
    const dot: Dot = { u: 0, v: 0, vu: 0, vv: 0, holding: 0, stalled: 0 };

    const readTheme = () => {
      const raw = getComputedStyle(root).getPropertyValue('--color-text').trim();

      isLight = root.dataset.theme === 'light';

      if (/^#[0-9a-f]{6}$/i.test(raw)) {
        rgb = [1, 3, 5].map((index) => parseInt(raw.slice(index, index + 2), 16));
      }
    };

    const field = (u: number, v: number, t: number) => {
      const n = relief(u * TERRAIN_SCALE, v * TERRAIN_SCALE, t * TERRAIN_SPEED);
      const du = u - BASIN.u * aspect;
      const dv = v - BASIN.v;
      const r2 = du * du + dv * dv;

      return 0.15 + 0.9 * (1 - Math.exp(-r2 * 1.1)) + 0.3 * Math.sqrt(r2) + 0.24 * n;
    };

    const gradient = (u: number, v: number) => {
      const e = 0.004;

      return {
        gu: (field(u + e, v, time) - field(u - e, v, time)) / (2 * e),
        gv: (field(u, v + e, time) - field(u, v - e, time)) / (2 * e),
      };
    };

    const restartDot = () => {
      const angle = Math.random() * Math.PI * 2;
      const radius = 0.5 + Math.random() * 0.15;
      const cu = BASIN.u * aspect;

      dot.u = Math.min(Math.max(cu + Math.cos(angle) * radius * 1.4, 0.05), aspect - 0.05);
      dot.v = Math.min(Math.max(BASIN.v + Math.sin(angle) * radius, 0.06), 0.94);
      dot.vu = 0;
      dot.vv = 0;
      dot.holding = 0;
      dot.stalled = 0;
    };

    const moveDot = (delta: number) => {
      if (dot.holding > 0) {
        dot.holding -= delta;

        if (dot.holding <= 0) {
          restartDot();
        }

        return;
      }

      const { gu, gv } = gradient(dot.u, dot.v);
      const damping = Math.max(0, 1 - DOT_DAMPING * delta);

      dot.vu = (dot.vu - gu * DOT_PULL * delta) * damping;
      dot.vv = (dot.vv - gv * DOT_PULL * delta) * damping;

      const speed = Math.hypot(dot.vu, dot.vv);

      if (speed > DOT_MAX_SPEED) {
        dot.vu *= DOT_MAX_SPEED / speed;
        dot.vv *= DOT_MAX_SPEED / speed;
      }

      dot.u = Math.min(Math.max(dot.u + dot.vu * delta, 0.02), aspect - 0.02);
      dot.v = Math.min(Math.max(dot.v + dot.vv * delta, 0.02), 0.98);
      dot.stalled = speed < 0.004 ? dot.stalled + delta : 0;

      const distance = Math.hypot(dot.u - BASIN.u * aspect, dot.v - BASIN.v);

      if (distance < ARRIVE_DISTANCE || dot.stalled > 2.5) {
        dot.holding = HOLD_SECONDS;
      }
    };

    const draw = () => {
      gl.viewport(0, 0, canvas.width, canvas.height);
      gl.clearColor(0, 0, 0, 0);
      gl.clear(gl.COLOR_BUFFER_BIT);
      gl.uniform2f(uSize, canvas.width, canvas.height);
      gl.uniform1f(uTime, time);
      gl.uniform1f(uAspect, aspect);
      gl.uniform2f(uBasin, BASIN.u, BASIN.v);
      gl.uniform1f(uStep, step);
      gl.uniform1f(uCount, count);
      gl.uniform4f(uColor, rgb[0] / 255, rgb[1] / 255, rgb[2] / 255, isLight ? 0.1 : 0.085);
      gl.drawArrays(gl.TRIANGLES, 0, 3);
    };

    // El punto vive en el DOM: moverlo solo cambia un transform.
    const placeDot = () => {
      dotElement.style.transform = `translate3d(${(dot.u / aspect) * width}px, ${dot.v * height}px, 0)`;
      dotElement.classList.toggle('is-holding', dot.holding > 0);
    };

    const setup = () => {
      const rect = canvas.getBoundingClientRect();
      const ratio = Math.min(window.devicePixelRatio || 1, MAX_PIXEL_RATIO);

      width = rect.width;
      height = rect.height;

      if (width === 0 || height === 0) {
        return;
      }

      const mobile = window.matchMedia('(max-width: 767px), (pointer: coarse)').matches;

      aspect = width / height;
      canvas.width = Math.round(width * ratio);
      canvas.height = Math.round(height * ratio);

      // Los niveles se reparten por el rango real del terreno: del borde del cuenco a la esquina más lejana.
      const farU = Math.max(BASIN.u * aspect, aspect - BASIN.u * aspect);
      const farV = Math.max(BASIN.v, 1 - BASIN.v);
      const farR2 = farU * farU + farV * farV;
      const top = 0.15 + 0.9 * (1 - Math.exp(-farR2 * 1.1)) + 0.3 * Math.sqrt(farR2) + 0.24;

      count = mobile ? 8 : 16;
      step = (top - LEVEL_START) / count;

      readTheme();

      if (dot.u === 0 && dot.v === 0) {
        restartDot();
      }

      draw();
      placeDot();
    };

    const tick = (now: number) => {
      const delta = Math.min((now - last) / 1000, 0.05);

      last = now;
      time += delta;
      moveDot(delta);
      draw();
      placeDot();
      frame = window.requestAnimationFrame(tick);
    };

    const start = () => {
      if (frame === 0 && !reduced && visible && !document.hidden) {
        last = performance.now();
        frame = window.requestAnimationFrame(tick);
      }
    };

    const stop = () => {
      window.cancelAnimationFrame(frame);
      frame = 0;
    };

    const handleVisibility = () => (document.hidden ? stop() : start());

    const observer = new IntersectionObserver(([entry]) => {
      visible = entry.isIntersecting;

      if (visible) {
        start();
      } else {
        stop();
      }
    });
    const resizeObserver = new ResizeObserver(setup);
    const themeObserver = new MutationObserver(() => {
      readTheme();
      draw();
    });

    setup();
    observer.observe(section);
    resizeObserver.observe(canvas);
    themeObserver.observe(root, { attributes: true, attributeFilter: ['data-theme'] });
    document.addEventListener('visibilitychange', handleVisibility);

    return () => {
      stop();
      observer.disconnect();
      resizeObserver.disconnect();
      themeObserver.disconnect();
      document.removeEventListener('visibilitychange', handleVisibility);
    };
  }, []);

  return (
    <>
      <canvas aria-hidden="true" className="about-topo" ref={canvasRef} />
      <span aria-hidden="true" className="topo-dot" ref={dotRef} />
    </>
  );
};
