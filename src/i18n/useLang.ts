import { useContext } from 'react';
import { LanguageContext } from './LanguageContext';

export const useLang = () => {
  const value = useContext(LanguageContext);

  if (!value) {
    throw new Error('useLang debe usarse dentro de LanguageProvider');
  }

  return value;
};
