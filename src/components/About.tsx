import { useLayoutEffect, useRef } from 'react';
import { useLang } from '../i18n/useLang';
import {
  gsap,
  prefersReducedMotion,
  ScrollTrigger,
  SplitText,
} from '../lib/motion';
import { Rich } from './Rich';
import { SectionTitle } from './SectionTitle';
import { Signature } from './Signature';
import { TopoBackground } from './TopoBackground';

export const About = () => {
  const { lang, profile } = useLang();
  const { about } = profile;
  const textRef = useRef<HTMLDivElement>(null);

  // Cada línea sube desde una máscara; las negritas pasan de atenuadas a plenas al llegar.
  useLayoutEffect(() => {
    const root = textRef.current;

    if (!root || prefersReducedMotion()) {
      return;
    }

    const context = gsap.context(() => {
      root.querySelectorAll<HTMLElement>('p').forEach((paragraph) => {
        let triggers: ScrollTrigger[] = [];

        SplitText.create(paragraph, {
          type: 'lines',
          mask: 'lines',
          autoSplit: true,
          onSplit: (split) => {
            triggers.forEach((trigger) => trigger.kill());
            triggers = Array.from(
              paragraph.querySelectorAll<HTMLElement>('strong'),
            ).map((strong) => {
              strong.classList.add('is-dim');

              return ScrollTrigger.create({
                trigger: strong,
                start: 'top 80%',
                once: true,
                onEnter: () => strong.classList.remove('is-dim'),
              });
            });

            return gsap.from(split.lines, {
              yPercent: 110,
              duration: 0.9,
              ease: 'power4.out',
              stagger: 0.08,
              scrollTrigger: {
                trigger: paragraph,
                start: 'top 88%',
                once: true,
              },
            });
          },
        });
      });
    }, root);

    return () => context.revert();
  }, [lang]);

  return (
    <section className="about-section" id="perfil" aria-labelledby="about-title">
      <TopoBackground />
      <div className="about-shell">
        <SectionTitle
          first={about.titleFirst}
          id="about-title"
          number="01"
          second={about.titleSecond}
          secondStyle="serif"
        />

        <div className="about-layout">
          <figure className="about-photo-frame">
            <img
              alt={about.image.alt}
              className="about-photo"
              loading="lazy"
              src={about.image.src}
            />
          </figure>

          <div className="about-text" key={lang} ref={textRef}>
            <p className="about-lead">
              <Rich text={about.paragraphs[0]} />
            </p>
            <p className="about-body">
              <Rich text={about.paragraphs[1]} />
            </p>
            <p className="about-body">
              <Rich text={about.paragraphs[2]} />
            </p>
          </div>

          <div className="about-signature">
            <Signature name={about.signature} />
          </div>
        </div>
      </div>
    </section>
  );
};
