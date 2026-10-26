import { useEffect, useRef, useState } from 'react';
import type { Theme } from '../hooks/useTheme';
import { useLang } from '../i18n/useLang';
import { prefersReducedMotion } from '../lib/motion';
import { Blobs } from './Blobs';
import { SectionTitle } from './SectionTitle';
import { ThemeToggle } from './ThemeToggle';

type ContactProps = {
  theme: Theme;
  onToggleTheme: () => void;
};

const FOLLOW_EASE = 0.028; // qué tan rápido persigue al cursor (0-1 por cuadro): más bajo = más lento
const RETURN_EASE = 0.02; // lo mismo, pero al volver a su posición inicial
const WALL_GAP = 6;
const PUSH_SPEED = 14; // px por cuadro con que un muro expulsa al botón // aire extra entre el botón y los "muros" invisibles

const copyText = async (text: string) => {
  try {
    await navigator.clipboard.writeText(text);

    return true;
  } catch {
    return false;
  }
};

export const Contact = ({ theme, onToggleTheme }: ContactProps) => {
  const { profile, ui } = useLang();
  const [copied, setCopied] = useState(false);
  const sectionRef = useRef<HTMLElement>(null);
  const slotRef = useRef<HTMLDivElement>(null);
  const orbRef = useRef<HTMLAnchorElement>(null);
  const timerRef = useRef(0);
  const cv = profile.contact.resources[0];

  useEffect(() => () => window.clearTimeout(timerRef.current), []);

  // El botón CV persigue al cursor dentro de la sección (con retraso) y los muros lo mantienen fuera del texto. Se
  // puede alcanzar y pulsar. Solo con puntero fino y sin movimiento reducido; si no, queda fijo.
  useEffect(() => {
    const section = sectionRef.current;
    const slot = slotRef.current;
    const orb = orbRef.current;
    const fine = window.matchMedia(
      '(hover: hover) and (pointer: fine) and (min-width: 768px)',
    ).matches;

    if (!section || !slot || !orb || !fine || prefersReducedMotion()) {
      return;
    }

    // Rectángulos "sólidos": texto del encabezado (ajustado al texto, no al bloque), filas y pie.
    const walls = () => {
      const rects: DOMRect[] = [];
      const blocks: DOMRect[] = [];

      // Se miden los nodos de texto (no el bloque), porque el h2 ocupa todo el ancho y bloquearía el botón.
      section
        .querySelectorAll<HTMLElement>('.contact-heading h2, .contact-heading > p')
        .forEach((element) => {
          const walker = document.createTreeWalker(element, NodeFilter.SHOW_TEXT);

          for (let node = walker.nextNode(); node; node = walker.nextNode()) {
            if (node.textContent?.trim()) {
              const range = document.createRange();

              range.selectNodeContents(node);
              blocks.push(range.getBoundingClientRect());
            }
          }
        });
      section
        .querySelectorAll<HTMLElement>('.contact-row')
        .forEach((element) => blocks.push(element.getBoundingClientRect()));
      section
        .querySelectorAll<HTMLElement>('.contact-bottom')
        .forEach((element) => rects.push(element.getBoundingClientRect()));

      // Se agrupan en líneas y se rellena el hueco entre líneas consecutivas con el ancho de ambas: la pared
      // se moldea al texto (llega hasta sus letras) pero no deja huecos por donde colarse.
      const lines: { left: number; right: number; top: number; bottom: number }[] = [];

      [...blocks]
        .sort((a, b) => a.top - b.top)
        .forEach((rect) => {
          rects.push(rect);

          const last = lines[lines.length - 1];

          if (last && rect.top < last.bottom - 1) {
            last.left = Math.min(last.left, rect.left);
            last.right = Math.max(last.right, rect.right);
            last.bottom = Math.max(last.bottom, rect.bottom);
          } else {
            lines.push({ left: rect.left, right: rect.right, top: rect.top, bottom: rect.bottom });
          }
        });

      for (let i = 1; i < lines.length; i += 1) {
        const above = lines[i - 1];
        const below = lines[i];
        const left = Math.min(above.left, below.left);

        if (below.top > above.bottom) {
          rects.push(
            new DOMRect(
              left,
              above.bottom,
              Math.max(above.right, below.right) - left,
              below.top - above.bottom,
            ),
          );
        }
      }

      return rects;
    };

    const pointer = { x: 0, y: 0, active: false };
    const pos = { x: 0, y: 0, ready: false, stable: 0, boxLeft: 0, boxTop: 0 };
    let frame = 0;
    let visible = false;

    const tick = () => {
      const box = section.getBoundingClientRect();
      const slotBox = slot.getBoundingClientRect();
      const radius = orb.offsetWidth / 2;

      // Aparece solo cuando su hueco se ha quedado quieto (la sección aún se acomoda al entrar), y desde ahí
      // viaja con la página: sin esto el scroll lo dejaba atrás y aparecía debajo hasta volver a pasar.
      if (!pos.ready) {
        const x = slotBox.left + slotBox.width / 2;
        const y = slotBox.top + slotBox.height / 2;

        pos.stable = Math.abs(x - pos.x) < 0.5 && Math.abs(y - pos.y) < 0.5 ? pos.stable + 1 : 0;
        pos.x = x;
        pos.y = y;

        if (pos.stable >= 8) {
          pos.ready = true;
          orb.classList.add('is-following');
        }
      } else {
        pos.x += box.left - pos.boxLeft;
        pos.y += box.top - pos.boxTop;
      }

      pos.boxLeft = box.left;
      pos.boxTop = box.top;

      if (!pos.ready) {
        frame = visible ? window.requestAnimationFrame(tick) : 0;

        return;
      }

      let goalX = slotBox.left + slotBox.width / 2;
      let goalY = slotBox.top + slotBox.height / 2;

      // Persigue al cursor hasta quedar centrado debajo de él; los muros lo mantienen fuera del texto y
      // las filas, así que no tapa nada que se pueda pulsar.
      const blocks = walls();
      const insideSection =
        pointer.active &&
        pointer.x >= box.left &&
        pointer.x <= box.right &&
        pointer.y >= box.top &&
        pointer.y <= box.bottom;

      // Persigue mientras el cursor esté en la sección (la pared lo frena); si sale de ella o del
      // navegador, regresa a su posición inicial.
      const chasing = insideSection;

      if (chasing) {
        goalX = pointer.x;
        goalY = pointer.y;
      }

      const ease = chasing ? FOLLOW_EASE : RETURN_EASE;

      // Muros invisibles con deslizamiento: el botón avanza en X y en Y por separado y solo se acepta el
      // paso si no entra en un bloque (texto, filas, pie), así roza los bordes sin saltos ni temblor.
      const reach = radius + WALL_GAP;
      const blocked = (x: number, y: number) =>
        blocks.some(
          (wall) =>
            x > wall.left - reach &&
            x < wall.right + reach &&
            y > wall.top - reach &&
            y < wall.bottom + reach,
        );
      const stepX = (goalX - pos.x) * ease;
      const stepY = (goalY - pos.y) * ease;

      // Si un muro lo alcanza (al hacer scroll o redimensionar), se le expulsa por el lado más corto en vez de
      // dejarlo moverse libre: así nunca se cuela bajo una fila.
      const inside = blocks.find(
        (wall) =>
          pos.x > wall.left - reach &&
          pos.x < wall.right + reach &&
          pos.y > wall.top - reach &&
          pos.y < wall.bottom + reach,
      );

      if (inside) {
        const exits = [
          { dx: inside.left - reach - pos.x, dy: 0 },
          { dx: inside.right + reach - pos.x, dy: 0 },
          { dx: 0, dy: inside.top - reach - pos.y },
          { dx: 0, dy: inside.bottom + reach - pos.y },
        ];
        const exit = exits.reduce((best, item) =>
          Math.abs(item.dx) + Math.abs(item.dy) < Math.abs(best.dx) + Math.abs(best.dy) ? item : best,
        );

        pos.x += Math.sign(exit.dx) * Math.min(Math.abs(exit.dx), PUSH_SPEED);
        pos.y += Math.sign(exit.dy) * Math.min(Math.abs(exit.dy), PUSH_SPEED);
      } else {
        if (!blocked(pos.x + stepX, pos.y)) {
          pos.x += stepX;
        }

        if (!blocked(pos.x, pos.y + stepY)) {
          pos.y += stepY;
        }
      }

      orb.style.transform = `translate3d(${(pos.x - box.left - radius).toFixed(1)}px, ${(pos.y - box.top - radius).toFixed(1)}px, 0)`;

      // El navegador no actualiza :hover cuando el botón se mueve solo bajo un cursor quieto, así que el
      // contacto se calcula aquí y activa la misma animación que el hover.
      orb.classList.toggle(
        'is-hot',
        pointer.active && Math.hypot(pointer.x - pos.x, pointer.y - pos.y) <= radius,
      );
      frame = visible ? window.requestAnimationFrame(tick) : 0;
    };

    const run = () => {
      if (frame === 0) {
        frame = window.requestAnimationFrame(tick);
      }
    };

    const handleMove = (event: PointerEvent) => {
      pointer.x = event.clientX;
      pointer.y = event.clientY;
      pointer.active = true;
    };

    const handleLeave = () => {
      pointer.active = false;
    };

    const observer = new IntersectionObserver(([entry]) => {
      visible = entry.isIntersecting;

      if (visible) {
        run();
      } else {
        // Al salir se desarma: la próxima entrada vuelve a nacer en su hueco, sin arrastrar una posición vieja.
        pos.ready = false;
        pos.stable = 0;
        orb.classList.remove('is-following', 'is-hot');
        orb.style.transform = '';
      }
    });

    observer.observe(section);
    window.addEventListener('pointermove', handleMove, { passive: true });
    document.documentElement.addEventListener('pointerleave', handleLeave);

    return () => {
      observer.disconnect();
      window.removeEventListener('pointermove', handleMove);
      document.documentElement.removeEventListener('pointerleave', handleLeave);
      window.cancelAnimationFrame(frame);
      orb.classList.remove('is-following', 'is-hot');
      orb.style.transform = '';
    };
  }, []);

  const handleCopy = async (value: string) => {
    if (await copyText(value)) {
      setCopied(true);
      window.clearTimeout(timerRef.current);
      timerRef.current = window.setTimeout(() => setCopied(false), 1800);
    }
  };

  return (
    <footer
      ref={sectionRef}
      className="contact-section"
      id="contacto"
      aria-labelledby="contact-title"
    >
      <div className="contact-blobs">
        <Blobs />
      </div>

      <div className="contact-shell">
        <div className="contact-heading">
          <SectionTitle
            first={ui.contactFirst}
            id="contact-title"
            number="04"
            second={ui.contactSecond}
            secondStyle="serif"
          />
          <p>{profile.contact.summary}</p>
        </div>

        <div className="contact-panel">
          <div className="contact-list" aria-label={ui.contactChannels}>
            {profile.contact.channels.map((channel) => {
              const isEmail = channel.href.startsWith('mailto:');

              return (
                <div className="contact-row" key={channel.label}>
                  <span>{channel.label}</span>
                  {isEmail ? (
                    <button
                      aria-label={`${ui.copyEmail}: ${channel.value}`}
                      className="contact-link"
                      onClick={() => handleCopy(channel.value)}
                      type="button"
                    >
                      <span className="contact-link__text">{channel.value}</span>
                      <span
                        aria-hidden="true"
                        className="contact-link__arrow"
                      >
                        ↗
                      </span>
                      <span
                        aria-live="polite"
                        className={`contact-toast${copied ? ' is-visible' : ''}`}
                        role="status"
                      >
                        {copied ? ui.copied : ''}
                      </span>
                    </button>
                  ) : (
                    <a
                      className="contact-link"
                      href={channel.href}
                      rel="noopener noreferrer"
                      target="_blank"
                    >
                      <span className="contact-link__text">
                        {channel.value}
                        <span className="sr-only"> {ui.openInNewTab}</span>
                      </span>
                      <span
                        aria-hidden="true"
                        className="contact-link__arrow"
                      >
                        ↗
                      </span>
                    </a>
                  )}
                </div>
              );
            })}
          </div>

          {cv ? (
            <div className="contact-cv" ref={slotRef}>
              <a
                className="contact-orb"
                download
                href={cv.href}
                ref={orbRef}
              >
                <span className="contact-orb__label">{ui.cvButton}</span>
              </a>
            </div>
          ) : null}
        </div>

        <div className="contact-bottom">
          <ThemeToggle theme={theme} onToggle={onToggleTheme} />
          <p>{profile.footer.copyright}</p>
        </div>
      </div>
    </footer>
  );
};
