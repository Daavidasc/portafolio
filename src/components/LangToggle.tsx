import { useLang } from '../i18n/useLang';
import type { Lang } from '../i18n/types';

const options: Lang[] = ['en', 'es'];

export const LangToggle = () => {
  const { lang, setLang, ui } = useLang();

  return (
    <div className="lang-toggle" role="group" aria-label={ui.language}>
      {options.map((option) => (
        <button
          aria-pressed={lang === option}
          key={option}
          lang={option}
          onClick={() => setLang(option)}
          type="button"
        >
          {option.toUpperCase()}
        </button>
      ))}
    </div>
  );
};
