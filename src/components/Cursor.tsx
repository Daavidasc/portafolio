import { useEffect, useRef } from 'react';
import { prefersReducedMotion } from '../lib/motion';

const interactiveSelector = 'a, button, summary, [role="button"], input';

export const Cursor = () => {
  const ringRef = useRef<HTMLDivElement>(null);

  useEffect(() => {
    const ring = ringRef.current;
    const enabled =
      window.matchMedia('(hover: hover) and (pointer: fine)').matches &&
      !prefersReducedMotion();

    if (!ring || !enabled) {
      return;
    }

    let x = -100;
    let y = -100;
    let targetX = -100;
    let targetY = -100;
    let frame = 0;

    const handleMove = (event: PointerEvent) => {
      targetX = event.clientX;
      targetY = event.clientY;
      ring.classList.add('is-visible');
      ring.classList.toggle(
        'is-active',
        Boolean((event.target as Element).closest(interactiveSelector)),
      );
    };

    const handleLeave = () => ring.classList.remove('is-visible');

    const animate = () => {
      x += (targetX - x) * 0.25;
      y += (targetY - y) * 0.25;
      ring.style.transform = `translate3d(${x}px, ${y}px, 0)`;
      frame = window.requestAnimationFrame(animate);
    };

    window.addEventListener('pointermove', handleMove);
    document.documentElement.addEventListener('pointerleave', handleLeave);
    frame = window.requestAnimationFrame(animate);

    return () => {
      window.removeEventListener('pointermove', handleMove);
      document.documentElement.removeEventListener('pointerleave', handleLeave);
      window.cancelAnimationFrame(frame);
    };
  }, []);

  return <div className="cursor-ring" aria-hidden="true" ref={ringRef} />;
};
