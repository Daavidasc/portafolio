import { useEffect, useRef, useState } from 'react';
import type { RefObject } from 'react';
import type { Theme } from '../hooks/useTheme';
import { useLang } from '../i18n/useLang';
import { getLenis, prefersReducedMotion, scrollToHash } from '../lib/motion';
import { ThemeToggle } from './ThemeToggle';

type MenuProps = {
  isOpen: boolean;
  onClose: () => void;
  theme: Theme;
  onToggleTheme: () => void;
  toggleRef: RefObject<HTMLButtonElement | null>;
};

// Velocidad del giro del Mangekyō (grados por segundo): normal y con el cursor encima.
const EYE_SPEED = 72;
const EYE_SPEED_HOVER = 480;

const focusableSelector = 'a[href], button:not([disabled])';
export const Menu = ({
  isOpen,
  onClose,
  theme,
  onToggleTheme,
  toggleRef,
}: MenuProps) => {
  const { profile, projects, ui } = useLang();
  const latestProject = projects[projects.length - 1];
  const email = profile.contact.channels[0];
  const socials = profile.contact.channels.slice(1);
  const menuRef = useRef<HTMLDivElement>(null);
  const [activeIndex, setActiveIndex] = useState(0);
  const eyeRef = useRef<HTMLDivElement>(null);
  const eyeHover = useRef(false);

  useEffect(() => {
    if (!isOpen) {
      return;
    }

    document.body.style.overflow = 'hidden';
    getLenis()?.stop();
    menuRef.current?.querySelector<HTMLElement>('a')?.focus();

    const handleKeyDown = (event: KeyboardEvent) => {
      if (event.key === 'Escape') {
        onClose();
        return;
      }

      if (event.key !== 'Tab' || !menuRef.current) {
        return;
      }

      const focusables = [
        toggleRef.current,
        ...menuRef.current.querySelectorAll<HTMLElement>(focusableSelector),
      ].filter((element): element is HTMLElement => element !== null);
      const first = focusables[0];
      const last = focusables[focusables.length - 1];

      if (event.shiftKey && document.activeElement === first) {
        event.preventDefault();
        last.focus();
      } else if (!event.shiftKey && document.activeElement === last) {
        event.preventDefault();
        first.focus();
      }
    };

    window.addEventListener('keydown', handleKeyDown);

    return () => {
      window.removeEventListener('keydown', handleKeyDown);
      document.body.style.overflow = '';
      getLenis()?.start();
    };
  }, [isOpen, onClose, toggleRef]);

  // El ojo gira de corrido mientras el menú está abierto y acelera suavemente con el cursor encima.
  useEffect(() => {
    const eye = eyeRef.current;

    if (!isOpen || !eye || prefersReducedMotion()) {
      return;
    }

    let angle = 0;
    let speed = EYE_SPEED;
    let last = performance.now();
    let frame = 0;

    const tick = (now: number) => {
      const delta = Math.min(now - last, 50) / 1000;
      const target = eyeHover.current ? EYE_SPEED_HOVER : EYE_SPEED;

      last = now;
      speed += (target - speed) * Math.min(1, delta * 5);
      angle = (angle + speed * delta) % 360;
      eye.style.transform = `rotate(${angle}deg)`;
      frame = window.requestAnimationFrame(tick);
    };

    frame = window.requestAnimationFrame(tick);

    return () => {
      window.cancelAnimationFrame(frame);
      eye.style.transform = '';
    };
  }, [isOpen]);

  const handleLinkClick = (hash: string) => {
    onClose();
    window.setTimeout(() => scrollToHash(hash), 50);
  };

  return (
    <div
      aria-hidden={!isOpen}
      aria-label={ui.menu}
      aria-modal="true"
      className={`site-menu${isOpen ? ' is-open' : ''}`}
      id="site-menu"
      inert={!isOpen}
      ref={menuRef}
      role="dialog"
    >
      <div className="site-menu__inner">
        <ol className="site-menu__links">
          {profile.navItems.map((item, index) => (
            <li key={item.href}>
              <a
                className="roll-link"
                href={item.href}
                onBlur={() => setActiveIndex(0)}
                onClick={(event) => {
                  event.preventDefault();
                  handleLinkClick(item.href);
                }}
                onFocus={() => setActiveIndex(index)}
                onPointerEnter={() => setActiveIndex(index)}
              >
                <span className="roll-link__number">
                  {String(index + 1).padStart(2, '0')}
                </span>
                <span className="roll-link__text display" data-text={item.label}>
                  <span>{item.label}</span>
                </span>
              </a>
            </li>
          ))}
        </ol>

        <div className="site-menu__preview" aria-hidden="true">
          {activeIndex === 1 && latestProject ? (
            <img alt="" src={latestProject.image} />
          ) : (
            <span>{String(activeIndex + 1).padStart(2, '0')}</span>
          )}
        </div>

        <div className="site-menu__footer">
          <p>{profile.menu.tagline}</p>
          <a href={email.href}>{email.value}</a>
          {socials.map((social) => (
            <a
              href={social.href}
              key={social.label}
              rel="noreferrer"
              target="_blank"
            >
              {social.label}
            </a>
          ))}
          <a
            className="cv-button"
            download
            href={profile.contact.resources[0].href}
          >
            <span>{ui.cv}</span>
            <svg viewBox="0 0 16 16" aria-hidden="true">
              <path d="M8 2v8m0 0L4.5 6.5M8 10l3.5-3.5M3 13.5h10" />
            </svg>
          </a>
          <ThemeToggle theme={theme} onToggle={onToggleTheme} />
          <div
            aria-hidden="true"
            className="site-menu__eye"
            onPointerEnter={() => {
              eyeHover.current = true;
            }}
            onPointerLeave={() => {
              eyeHover.current = false;
            }}
          >
            <div className="mangekyou" ref={eyeRef}>
              <div className="point" />
              <div className="point" />
              <div className="point" />
              <div className="circle" />
            </div>
          </div>
        </div>
      </div>
    </div>
  );
};
