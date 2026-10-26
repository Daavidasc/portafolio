import { scrollToHash } from '../lib/motion';
import { PointCloud } from './PointCloud';
import { useLang } from '../i18n/useLang';

export const Hero = () => {
  const { profile, ui } = useLang();
  return (
    <section
      className="relative isolate flex min-h-[100svh] flex-col overflow-hidden pt-16"
      id="inicio"
    >
      <div className="hero-cloud">
        <PointCloud />
      </div>
      <p className="hero-legend" aria-hidden="true">
        {ui.heroLegend}
      </p>

      <div className="mx-auto flex w-full max-w-[var(--layout-max)] flex-1 flex-col justify-end px-[var(--space-page)] pb-12 pt-10">
        <div className="hero-name">
          <p className="hero-eyebrow">{profile.hero.eyebrow}</p>
          <h1 className="hero-title" aria-label={profile.name}>
            <span>David</span> <span className="name">SERRUDO</span>
          </h1>
          <div className="hero-lead">
            <p>{profile.hero.tagline}</p>
            <a
              className="hero-scroll"
              href="#proyectos"
              onClick={(event) => {
                event.preventDefault();
                scrollToHash('#proyectos');
              }}
            >
              {profile.hero.scrollCta}
              <span aria-hidden="true"> ↓</span>
            </a>
          </div>
        </div>
      </div>
    </section>
  );
};
