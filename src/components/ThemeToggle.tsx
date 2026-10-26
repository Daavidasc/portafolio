import type { Theme } from '../hooks/useTheme';
import { useLang } from '../i18n/useLang';

type ThemeToggleProps = {
  theme: Theme;
  onToggle: () => void;
};

export const ThemeToggle = ({ theme, onToggle }: ThemeToggleProps) => {
  const { ui } = useLang();
  const isDark = theme === 'dark';

  return (
    <button
      aria-label={isDark ? ui.themeToLight : ui.themeToDark}
      aria-pressed={isDark}
      className="theme-toggle"
      onClick={onToggle}
      type="button"
    >
      <span className="theme-toggle__track" aria-hidden="true">
        <span className="theme-toggle__thumb" />
      </span>
    </button>
  );
};
