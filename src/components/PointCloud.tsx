import { useEffect, useRef } from 'react';
import { prefersReducedMotion } from '../lib/motion';

const RADIUS = 210;
const LABELS = [
  'Machine Learning',
  'Computer Vision',
  'Python',
  'PyTorch',
  'Reinforcement Learning',
  'LLMs',
  'Go',
];
// Centros iniciales (fracción del lienzo), repartidos por todo el hero.
const CENTERS = [
  { x: 0.1, y: 0.22 },
  { x: 0.34, y: 0.12 },
  { x: 0.58, y: 0.3 },
  { x: 0.86, y: 0.16 },
  { x: 0.22, y: 0.55 },
  { x: 0.5, y: 0.62 },
  { x: 0.84, y: 0.58 },
];
const K = CENTERS.length;

const gaussian = () =>
  Math.sqrt(-2 * Math.log(1 - Math.random())) *
  Math.cos(2 * Math.PI * Math.random());

type Point = {
  x: number;
  y: number;
  vx: number;
  vy: number;
  hx: number;
  hy: number;
  phase: number;
  size: number;
  bright: number;
  cluster: number;
};

type Centroid = { x: number; y: number; activity: number };

const lloyd = (points: Point[], centroids: Centroid[], pull: number) => {
  const sums = centroids.map(() => ({ x: 0, y: 0, n: 0 }));

  points.forEach((point) => {
    let best = 0;
    let bestDistance = Infinity;

    centroids.forEach((centroid, index) => {
      const distance =
        (point.x - centroid.x) ** 2 + (point.y - centroid.y) ** 2;

      if (distance < bestDistance) {
        bestDistance = distance;
        best = index;
      }
    });

    point.cluster = best;
    sums[best].x += point.x;
    sums[best].y += point.y;
    sums[best].n += 1;
  });

  centroids.forEach((centroid, index) => {
    const sum = sums[index];

    if (sum.n > 0) {
      centroid.x += (sum.x / sum.n - centroid.x) * pull;
      centroid.y += (sum.y / sum.n - centroid.y) * pull;
    }
  });
};

export const PointCloud = () => {
  const canvasRef = useRef<HTMLCanvasElement>(null);

  useEffect(() => {
    const canvas = canvasRef.current;
    const context = canvas?.getContext('2d');

    if (!canvas || !context) {
      return;
    }

    const animated =
      !prefersReducedMotion() &&
      window.matchMedia('(hover: hover) and (pointer: fine)').matches;
    const cursor = { x: 0, y: 0, lastMove: -Infinity };
    let points: Point[] = [];
    let centroids: Centroid[] = [];
    let width = 0;
    let height = 0;
    let accent = '#ff5638';
    let ink = '#f2f0ed';
    let frame = 0;
    let visible = true;
    let tickCount = 0;

    const readColors = () => {
      const styles = getComputedStyle(document.documentElement);

      accent = styles.getPropertyValue('--color-accent').trim() || accent;
      ink = styles.getPropertyValue('--color-text').trim() || ink;
    };

    const setup = () => {
      const rect = canvas.getBoundingClientRect();
      const ratio = Math.min(window.devicePixelRatio || 1, 1.5);

      width = rect.width;
      height = rect.height;
      canvas.width = Math.round(width * ratio);
      canvas.height = Math.round(height * ratio);
      context.setTransform(ratio, 0, 0, ratio, 0, 0);
      readColors();

      const count = Math.round(
        Math.min(Math.max((width * height) / 9000, 60), 170),
      );
      const sigma = Math.min(width, height) * 0.07;

      points = Array.from({ length: count }, (_, index) => {
        const center = CENTERS[index % K];
        const x = Math.min(Math.max(center.x * width + gaussian() * sigma, 4), width - 4);
        const y = Math.min(Math.max(center.y * height + gaussian() * sigma, 4), height - 4);

        return {
          x,
          y,
          vx: 0,
          vy: 0,
          hx: x,
          hy: y,
          phase: Math.random() * Math.PI * 2,
          size: 0.8 + Math.random() * 1.5,
          bright: 0.25 + Math.random() * 0.55,
          cluster: 0,
        };
      });
      centroids = CENTERS.map((center) => ({
        x: center.x * width,
        y: center.y * height,
        activity: 0,
      }));

      for (let i = 0; i < 30; i += 1) {
        lloyd(points, centroids, 0.5);
      }
    };

    const draw = (time: number) => {
      context.clearRect(0, 0, width, height);

      const cursorActive = time - cursor.lastMove < 1800;

      points.forEach((point) => {
        const centroid = centroids[point.cluster];
        const near = cursorActive
          ? Math.max(0, 1 - Math.hypot(cursor.x - point.x, cursor.y - point.y) / RADIUS)
          : 0;
        const glow = Math.max(near, centroid.activity * 0.6);
        const twinkle = 0.75 + 0.25 * Math.sin(time * 0.0012 + point.phase * 3);

        if (near > 0.15) {
          context.globalAlpha = near * 0.18;
          context.strokeStyle = accent;
          context.beginPath();
          context.moveTo(point.x, point.y);
          context.lineTo(centroid.x, centroid.y);
          context.stroke();
        }

        context.globalAlpha = point.bright * twinkle;
        context.fillStyle = ink;
        context.beginPath();
        context.arc(point.x, point.y, point.size, 0, Math.PI * 2);
        context.fill();

        if (glow > 0.05) {
          context.globalAlpha = Math.min(1, glow * 1.4);
          context.fillStyle = accent;
          context.beginPath();
          context.arc(point.x, point.y, point.size + glow * 0.8, 0, Math.PI * 2);
          context.fill();
        }
      });

      context.font = '500 11px "Mona Sans", Arial, sans-serif';
      centroids.forEach((centroid, index) => {
        if (centroid.activity < 0.04) {
          return;
        }

        context.globalAlpha = centroid.activity;
        context.fillStyle = accent;
        context.fillRect(centroid.x - 4, centroid.y - 0.5, 8, 1);
        context.fillRect(centroid.x - 0.5, centroid.y - 4, 1, 8);
        context.fillStyle = ink;
        context.fillText(LABELS[index], centroid.x + 9, centroid.y - 7);
      });

      context.globalAlpha = 1;
    };

    const step = (time: number) => {
      const cursorActive = time - cursor.lastMove < 1800;

      lloyd(points, centroids, 0.06);

      if (cursorActive) {
        let nearest = 0;
        let nearestDistance = Infinity;

        centroids.forEach((centroid, index) => {
          const distance = Math.hypot(cursor.x - centroid.x, cursor.y - centroid.y);

          if (distance < nearestDistance) {
            nearestDistance = distance;
            nearest = index;
          }
        });

        centroids[nearest].x += (cursor.x - centroids[nearest].x) * 0.05;
        centroids[nearest].y += (cursor.y - centroids[nearest].y) * 0.05;
      }

      centroids.forEach((centroid) => {
        const target =
          cursorActive &&
          Math.hypot(cursor.x - centroid.x, cursor.y - centroid.y) < RADIUS
            ? 1
            : 0;

        centroid.activity += (target - centroid.activity) * 0.1;
      });

      points.forEach((point) => {
        const centroid = centroids[point.cluster];
        const near = cursorActive
          ? Math.max(0, 1 - Math.hypot(cursor.x - point.x, cursor.y - point.y) / RADIUS)
          : 0;
        const homeX = point.hx + Math.sin(time * 0.0004 + point.phase) * 7;
        const homeY = point.hy + Math.cos(time * 0.0005 + point.phase) * 7;

        point.vx += (homeX - point.x) * 0.006 + (centroid.x - point.x) * 0.05 * near;
        point.vy += (homeY - point.y) * 0.006 + (centroid.y - point.y) * 0.05 * near;
        point.vx *= 0.9;
        point.vy *= 0.9;
        point.x += point.vx;
        point.y += point.vy;
      });
    };

    const loop = (time: number) => {
      if (visible) {
        step(time);
        draw(time);
        tickCount += 1;

        if (tickCount % 120 === 0) {
          readColors();
        }
      }

      frame = window.requestAnimationFrame(loop);
    };

    const handleMove = (event: PointerEvent) => {
      const rect = canvas.getBoundingClientRect();

      cursor.x = event.clientX - rect.left;
      cursor.y = event.clientY - rect.top;
      cursor.lastMove = performance.now();
    };

    setup();

    const resizeObserver = new ResizeObserver(() => {
      setup();

      if (!animated) {
        draw(0);
      }
    });
    const visibilityObserver = new IntersectionObserver(([entry]) => {
      visible = entry.isIntersecting;
    });

    resizeObserver.observe(canvas);
    visibilityObserver.observe(canvas);

    if (animated) {
      window.addEventListener('pointermove', handleMove);
      frame = window.requestAnimationFrame(loop);
    } else {
      draw(0);
    }

    return () => {
      window.removeEventListener('pointermove', handleMove);
      window.cancelAnimationFrame(frame);
      resizeObserver.disconnect();
      visibilityObserver.disconnect();
    };
  }, []);

  return <canvas aria-hidden="true" className="point-cloud" ref={canvasRef} />;
};
