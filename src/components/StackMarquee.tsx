import { useLang } from '../i18n/useLang';

export const StackMarquee = () => {
  const { profile, ui } = useLang();

  return (
  <section className="marquee-section" aria-label={ui.stackSection}>
    <div className="marquee">
      {[0, 1].map((copy) => (
        <ul
          aria-hidden={copy === 1 || undefined}
          className="marquee__track"
          key={copy}
        >
          {profile.stack.map((technology) => (
            <li key={technology}>{technology}</li>
          ))}
        </ul>
      ))}
    </div>
  </section>
);
};
