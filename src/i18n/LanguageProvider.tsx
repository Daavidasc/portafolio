import { useEffect, useMemo, useState } from 'react';
import type { ReactNode } from 'react';
import { profileEn } from '../data/profile.en';
import { profileEs } from '../data/profile.es';
import { getProjects } from '../data/projects';
import { uiStrings } from '../data/ui';
import { LanguageContext } from './LanguageContext';
import type { Lang } from './types';

const storageKey = 'david-serrudo-lang';

const getInitialLang = (): Lang => {
  try {
    const stored = window.localStorage.getItem(storageKey);

    if (stored === 'en' || stored === 'es') {
      return stored;
    }
  } catch {
    // localStorage no disponible: se usa el idioma por defecto.
  }

  return 'en';
};

export const LanguageProvider = ({ children }: { children: ReactNode }) => {
  const [lang, setLang] = useState<Lang>(getInitialLang);

  useEffect(() => {
    const strings = uiStrings[lang];

    document.documentElement.lang = lang;
    document.title = strings.pageTitle;
    document
      .querySelector('meta[name="description"]')
      ?.setAttribute('content', strings.pageDescription);

    try {
      window.localStorage.setItem(storageKey, lang);
    } catch {
      // Sin persistencia: no es crítico.
    }
  }, [lang]);

  const value = useMemo(
    () => ({
      lang,
      setLang,
      profile: lang === 'en' ? profileEn : profileEs,
      projects: getProjects(lang),
      ui: uiStrings[lang],
    }),
    [lang],
  );

  return (
    <LanguageContext.Provider value={value}>
      {children}
    </LanguageContext.Provider>
  );
};
