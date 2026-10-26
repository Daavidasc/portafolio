import { useLayoutEffect, useRef } from 'react';
import { gsap, prefersReducedMotion } from '../lib/motion';

type SectionTitleProps = {
  id: string;
  number: string;
  first: string;
  /** Segunda línea opcional: si va vacía, el título es de una sola línea. */
  second?: string;
  secondStyle?: 'outline' | 'serif';
};

// El apóstrofe se separa ~0.02em de la letra siguiente (p. ej. LET'S).
const withApostrophe = (text: string) =>
  text.split("'").flatMap((part, index) =>
    index === 0
      ? [part]
      : [<span className="apostrophe" key={index}>'</span>, part],
  );

export const SectionTitle = ({
  id,
  number,
  first,
  second,
  secondStyle = 'outline',
}: SectionTitleProps) => {
  const rootRef = useRef<HTMLDivElement>(null);

  useLayoutEffect(() => {
    const root = rootRef.current;

    if (!root || prefersReducedMotion()) {
      return;
    }

    const context = gsap.context(() => {
      gsap.from('.section-title__line > span', {
        yPercent: 110,
        duration: 0.9,
        ease: 'power4.out',
        stagger: 0.12,
        scrollTrigger: { trigger: root, start: 'top 85%', once: true },
      });
    }, root);

    return () => context.revert();
  }, []);

  return (
    <div className="section-title" ref={rootRef}>
      <p className="section-title__label">
        <span>{number}</span>
      </p>
      <h2 className="display" id={id} aria-label={second ? `${first} ${second}` : first}>
        <span className="section-title__line" aria-hidden="true">
          <span>{withApostrophe(first)}</span>
        </span>
        {second ? (
          <span
            className={`section-title__line section-title__line--${secondStyle}`}
            aria-hidden="true"
          >
            <span
              className={secondStyle === 'serif' ? 'serif-accent' : undefined}
            >
              {second}
            </span>
          </span>
        ) : null}
      </h2>
    </div>
  );
};
