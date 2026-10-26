import { useEffect, useRef, useState } from 'react';
import type { Theme } from '../hooks/useTheme';
import { useLang } from '../i18n/useLang';
import { LangToggle } from './LangToggle';
import { Menu } from './Menu';

type NavbarProps = {
  theme: Theme;
  onToggleTheme: () => void;
};

export const Navbar = ({ theme, onToggleTheme }: NavbarProps) => {
  const { ui } = useLang();
  const [isMenuOpen, setIsMenuOpen] = useState(false);
  const [isHidden, setIsHidden] = useState(false);
  const [isAtTop, setIsAtTop] = useState(() => window.scrollY < 80);
  const toggleRef = useRef<HTMLButtonElement>(null);

  useEffect(() => {
    let lastY = window.scrollY;

    const handleScroll = () => {
      const currentY = window.scrollY;

      setIsHidden(currentY > 120 && currentY > lastY);
      setIsAtTop(currentY < 80);
      lastY = currentY;
    };

    window.addEventListener('scroll', handleScroll, { passive: true });

    return () => window.removeEventListener('scroll', handleScroll);
  }, []);

  const closeMenu = () => {
    setIsMenuOpen(false);
    toggleRef.current?.focus();
  };

  return (
    <>
      <header
        className={`site-header${isHidden && !isMenuOpen ? ' is-hidden' : ''}${isAtTop ? '' : ' is-scrolled'}`}
      >
        <nav className="site-header__bar" aria-label={ui.mainNav}>
          <a
            aria-hidden={isAtTop || undefined}
            aria-label={ui.logoLabel}
            className={`logo${isAtTop ? ' is-hidden' : ''}`}
            href="#inicio"
            tabIndex={isAtTop ? -1 : undefined}
          >
            <span className="logo__top">David</span>
            <span className="logo__bottom">Serrudo</span>
          </a>

          <div className="site-header__actions">
            <LangToggle />

            <button
              aria-controls="site-menu"
              aria-expanded={isMenuOpen}
              aria-label={isMenuOpen ? ui.closeMenu : ui.openMenu}
              className="menu-button"
              onClick={() => setIsMenuOpen((value) => !value)}
              ref={toggleRef}
              type="button"
            >
              <span aria-hidden="true" />
              <span aria-hidden="true" />
            </button>
          </div>
        </nav>
      </header>

      <Menu
        isOpen={isMenuOpen}
        onClose={closeMenu}
        theme={theme}
        toggleRef={toggleRef}
        onToggleTheme={onToggleTheme}
      />
    </>
  );
};
