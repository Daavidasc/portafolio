import { useLayoutEffect, useRef } from 'react';
import { getExperience } from '../data/experience';
import { useLang } from '../i18n/useLang';
import {
  gsap,
  prefersReducedMotion,
  ScrollTrigger,
  SplitText,
} from '../lib/motion';
import { SectionTitle } from './SectionTitle';
import { TopoBackground } from './TopoBackground';

export const Experience = () => {
  const { lang, ui } = useLang();
  const entries = getExperience(lang);
  const listRef = useRef<HTMLOListElement>(null);

  // La línea se dibuja con el scroll, cada nodo se enciende al llegar y el texto sube desde una máscara.
  useLayoutEffect(() => {
    const list = listRef.current;

    if (!list || prefersReducedMotion()) {
      return;
    }

    list.classList.add('is-animated');

    const context = gsap.context(() => {
      gsap.fromTo(
        '.timeline__fill',
        { scaleY: 0 },
        {
          scaleY: 1,
          ease: 'none',
          scrollTrigger: {
            trigger: list,
            start: 'top 70%',
            end: 'bottom 70%',
            scrub: true,
          },
        },
      );

      list.querySelectorAll<HTMLElement>('.timeline__item').forEach((item) => {
        ScrollTrigger.create({
          trigger: item,
          start: 'top 65%',
          once: true,
          onEnter: () => item.classList.add('is-lit'),
        });

        item
          .querySelectorAll<HTMLElement>(
            '.timeline__role, .timeline__org, .timeline__text, .timeline__points li',
          )
          .forEach((element) => {
            SplitText.create(element, {
              type: 'lines',
              mask: 'lines',
              autoSplit: true,
              onSplit: (split) =>
                gsap.from(split.lines, {
                  yPercent: 110,
                  duration: 0.8,
                  ease: 'power4.out',
                  stagger: 0.07,
                  scrollTrigger: {
                    trigger: item,
                    start: 'top 80%',
                    once: true,
                  },
                }),
            });
          });
      });
    }, list);

    return () => {
      context.revert();
      list.classList.remove('is-animated');
    };
  }, [lang]);

  return (
    <section
      className="experience-section"
      id="experiencia"
      aria-labelledby="experience-title"
    >
      <TopoBackground />
      <div className="experience-shell">
        <SectionTitle
          first={ui.experienceFirst}
          id="experience-title"
          number="03"
          second={ui.experienceSecond}
          secondStyle="serif"
        />

        <ol
          aria-label={ui.timelineLabel}
          className="timeline"
          key={lang}
          ref={listRef}
        >
          {entries.map((entry) => (
            <li
              className={`timeline__item${entry.current ? ' is-current' : ''}`}
              key={entry.id}
            >
              <span aria-hidden="true" className="timeline__year serif-accent">
                {entry.startYear ?? ''}
              </span>

              <span aria-hidden="true" className="timeline__rail">
                <span className="timeline__node" />
              </span>

              <article className="timeline__body">
                {entry.kind ? (
                  <span className="timeline__kind">{entry.kind}</span>
                ) : null}
                <h3 className="timeline__role">{entry.role}</h3>
                <p className="timeline__org">
                  {entry.organization}
                  {entry.location ? ` · ${entry.location}` : ''}
                </p>
                {entry.dates || entry.current ? (
                  <p className="timeline__dates">
                    {entry.dates ? (
                      <time dateTime={entry.start || undefined}>
                        {entry.dates}
                      </time>
                    ) : null}
                    {entry.current ? (
                      <span className="timeline__now">{ui.present}</span>
                    ) : null}
                  </p>
                ) : null}
                {entry.description ? (
                  <p className="timeline__text">{entry.description}</p>
                ) : null}
                {entry.points.length > 0 ? (
                  <ul className="timeline__points">
                    {entry.points.map((point) => (
                      <li key={point}>{point}</li>
                    ))}
                  </ul>
                ) : null}
                {entry.focus.length > 0 ? (
                  <ul className="timeline__focus" aria-label={ui.focus}>
                    {entry.focus.map((item) => (
                      <li key={item}>{item}</li>
                    ))}
                  </ul>
                ) : null}
              </article>
            </li>
          ))}

          <li aria-hidden="true" className="timeline__track">
            <span className="timeline__fill" />
          </li>
        </ol>
      </div>
    </section>
  );
};
