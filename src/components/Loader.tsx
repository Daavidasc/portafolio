import { useEffect, useState } from 'react';
import { prefersReducedMotion } from '../lib/motion';

type Phase = 'loading' | 'leaving' | 'done';

// Seguridad: si algo no termina de cargar, la pantalla se cierra igualmente.
const MAX_WAIT = 10000;

export const Loader = () => {
  const [count, setCount] = useState(0);
  const [phase, setPhase] = useState<Phase>(
    prefersReducedMotion() ? 'done' : 'loading',
  );

  // La pantalla dura solo lo que tarda en cargar la página (recursos y fuentes).
  useEffect(() => {
    if (phase !== 'loading') {
      return;
    }

    let frame = 0;
    let value = 0;
    let loaded = false;

    const pageLoaded =
      document.readyState === 'complete'
        ? Promise.resolve()
        : new Promise<void>((resolve) =>
            window.addEventListener('load', () => resolve(), { once: true }),
          );

    Promise.all([pageLoaded, document.fonts.ready]).then(() => {
      loaded = true;
    });

    const timeout = window.setTimeout(() => {
      loaded = true;
    }, MAX_WAIT);

    const tick = () => {
      // Mientras carga, el contador se acerca a 90; al terminar, salta a 100.
      value = loaded
        ? Math.min(100, value + Math.max(5, (100 - value) * 0.35))
        : value + (90 - value) * 0.04;

      setCount(Math.round(value));

      if (value >= 100) {
        setPhase('leaving');
        return;
      }

      frame = window.requestAnimationFrame(tick);
    };

    frame = window.requestAnimationFrame(tick);

    return () => {
      window.cancelAnimationFrame(frame);
      window.clearTimeout(timeout);
    };
  }, [phase]);

  useEffect(() => {
    if (phase !== 'leaving') {
      return;
    }

    const timer = window.setTimeout(() => setPhase('done'), 300);

    return () => window.clearTimeout(timer);
  }, [phase]);

  if (phase === 'done') {
    return null;
  }

  return (
    <div
      className={`loader${phase === 'leaving' ? ' is-leaving' : ''}`}
      aria-hidden="true"
    >
      <span className="loader__initials">DS</span>
      <span className="loader__count">{String(count).padStart(3, '0')}</span>
    </div>
  );
};
