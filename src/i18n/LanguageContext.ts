import { createContext } from 'react';
import type { Profile } from '../data/profile.es';
import type { Project } from '../data/projects';
import type { UiStrings } from '../data/ui';
import type { Lang } from './types';

export type LanguageValue = {
  lang: Lang;
  setLang: (lang: Lang) => void;
  profile: Profile;
  projects: Project[];
  ui: UiStrings;
};

export const LanguageContext = createContext<LanguageValue | null>(null);
