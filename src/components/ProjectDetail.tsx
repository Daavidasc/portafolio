import { useEffect, useRef, useState } from 'react';
import { getLenis } from '../lib/motion';
import { ProjectGallery } from './ProjectGallery';
import { isPending } from '../data/projects';
import type { Project } from '../data/projects';
import { useLang } from '../i18n/useLang';

type ProjectDetailProps = {
  project: Project | null;
  /** Posición del proyecto en la lista (1, 2, 3...): se muestra como «01». */
  number: number;
  onClose: () => void;
};

const linkLabels = { github: 'GitHub', demo: 'Demo', paper: 'Paper' } as const;
const linkKeys = Object.keys(linkLabels) as (keyof typeof linkLabels)[];

type ProjectDetailBodyProps = {
  project: Project;
  number: number;
  onClose: () => void;
};

// Título en sans con la última palabra en serif de acento, como en el resto de la web.
const splitTitle = (title: string) => {
  const words = title.split(' ');

  return words.length > 1
    ? { first: words.slice(0, -1).join(' '), accent: words[words.length - 1] }
    : { first: title, accent: '' };
};

// Estado propio: al cerrar o cambiar de proyecto se desmonta y el juego deja de cargarse.
const ProjectDetailBody = ({
  project,
  number,
  onClose,
}: ProjectDetailBodyProps) => {
  const { ui } = useLang();
  const [playing, setPlaying] = useState(false);
  const [session, setSession] = useState(0);
  const frameRef = useRef<HTMLIFrameElement>(null);
  const metrics = project.metrics.filter((metric) => !isPending(metric.value));
  const links = linkKeys.filter((key) => project.links[key]);
  const { playConfig } = project;
  const title = splitTitle(project.title);
  const images = project.gallery ?? [];
  const padded = String(number).padStart(2, '0');

  // Si el foco no está dentro del juego (p. ej. justo tras pulsar «Jugar»), las teclas se reenvían a él para que
  // nunca haya que reiniciar para que respondan.
  useEffect(() => {
    if (!playing) {
      return;
    }

    const forward = (event: KeyboardEvent) => {
      const frame = frameRef.current;

      if (
        !frame ||
        document.activeElement === frame ||
        event.key === 'Escape' ||
        event.key === 'Tab' ||
        (event.target instanceof HTMLButtonElement &&
          (event.key === 'Enter' || event.key === ' '))
      ) {
        return;
      }

      const game = frame.contentWindow as
        | (Window & { karatePushKey?: (key: KeyboardEvent) => void })
        | null;

      game?.karatePushKey?.(event);
    };

    window.addEventListener('keydown', forward, true);

    return () => window.removeEventListener('keydown', forward, true);
  }, [playing]);

  return (
    <div className="project-detail__body">
      <div className="project-detail__bar">
        <button
          className="project-detail__x"
          type="button"
          aria-label={ui.close}
          onClick={onClose}
          autoFocus
        >
          <span aria-hidden="true">×</span>
        </button>
      </div>

      <div
        className={`project-detail__hero${images.length === 0 ? ' is-fallback' : ' has-gallery'}`}
      >
        {images.length > 0 ? (
          <ProjectGallery images={images} title={project.title} />
        ) : (
          <span aria-hidden="true" className="project-detail__number">
            {padded}
          </span>
        )}
      </div>

      <div className="project-detail__content">
        <p className="project-detail__eyebrow">
          <span>{padded}</span> — {ui.project}
          {isPending(project.year) ? '' : ` · ${project.year}`}
        </p>
        <h3 id="project-detail-title">
          {title.first}
          {title.accent ? (
            <>
              {' '}
              <span className="serif-accent">{title.accent}</span>
            </>
          ) : null}
        </h3>
        <p className="project-detail__tagline">{project.tagline}</p>
        {project.description ? <p>{project.description}</p> : null}

        <ul className="project-detail__stack" aria-label={ui.stack}>
          {project.stack.map((item) => (
            <li key={item}>{item}</li>
          ))}
        </ul>

        {playConfig && playConfig.controls.length > 0 ? (
          <ul className="project-detail__features" aria-label={ui.controls}>
            {playConfig.controls.map((control) => (
              <li key={control}>{control}</li>
            ))}
          </ul>
        ) : null}

        {metrics.length > 0 ? (
          <dl className="project-detail__metrics">
            {metrics.map((metric) => (
              <div key={metric.label}>
                <dt>{metric.label}</dt>
                <dd>{metric.value}</dd>
              </div>
            ))}
          </dl>
        ) : null}

        {playConfig || links.length > 0 ? (
          <div className="project-detail__actions">
            {playConfig ? (
              <button
                className="project-detail__play-button"
                type="button"
                onClick={() => setPlaying(true)}
              >
                {ui.play}
              </button>
            ) : null}
            {links.map((key) => (
              <a
                className="project-detail__link"
                key={key}
                href={project.links[key]}
                target="_blank"
                rel="noreferrer"
              >
                {linkLabels[key]} <span aria-hidden="true">↗</span>
              </a>
            ))}
          </div>
        ) : null}
      </div>

        {playing && playConfig ? (
          <div className="game-popup">
            <div
              className="game-popup__panel"
              role="dialog"
              aria-modal="true"
              aria-label={project.title}
              onKeyDown={(event) => {
                if (event.key === 'Escape') {
                  event.preventDefault();
                  event.stopPropagation();
                  setPlaying(false);
                }
              }}
            >
              <div className="game-popup__bar">
                <p className="game-popup__title">{project.title}</p>
                <p className="game-popup__hint">{ui.bestOnDesktop}</p>
                <div className="game-popup__actions">
                  <div className="game-popup__info">
                    <button
                      className="game-popup__info-button"
                      type="button"
                      aria-label={ui.howToPlay}
                      aria-describedby="game-popup-help"
                    >
                      <span aria-hidden="true">i</span>
                    </button>
                    <div
                      className="game-popup__tip"
                      id="game-popup-help"
                      role="tooltip"
                    >
                      <p>{ui.howToPlay}</p>
                      <ul>
                        {playConfig.controls.map((control) => (
                          <li key={control}>{control}</li>
                        ))}
                      </ul>
                    </div>
                  </div>
                  <button
                    className="game-popup__button"
                    type="button"
                    onClick={() => setSession((value) => value + 1)}
                  >
                    {ui.restart}
                  </button>
                  <button
                    className="game-popup__close"
                    type="button"
                    aria-label={ui.close}
                    onClick={() => setPlaying(false)}
                  >
                    <span aria-hidden="true">×</span>
                  </button>
                </div>
              </div>
              <iframe
                className="game-popup__frame"
                key={session}
                ref={frameRef}
                src={playConfig.path}
                title={project.title}
                onLoad={(event) => {
                  // Las teclas deben llegar al juego, no a un botón.
                  event.currentTarget.focus();
                  event.currentTarget.contentWindow?.focus();
                }}
              />
            </div>
          </div>
        ) : null}
    </div>
  );
};

export const ProjectDetail = ({
  project,
  number,
  onClose,
}: ProjectDetailProps) => {
  const dialogRef = useRef<HTMLDialogElement>(null);

  useEffect(() => {
    const dialog = dialogRef.current;

    if (!dialog) {
      return;
    }

    if (project && !dialog.open) {
      dialog.showModal();
    } else if (!project && dialog.open) {
      dialog.close();
    }
  }, [project]);

  // Mientras la tarjeta está abierta, el fondo no se desplaza (tampoco con el scroll suave).
  useEffect(() => {
    if (!project) {
      return;
    }

    document.body.style.overflow = 'hidden';
    getLenis()?.stop();

    return () => {
      document.body.style.overflow = '';
      getLenis()?.start();
    };
  }, [project]);

  return (
    <dialog
      className="project-detail"
      data-lenis-prevent=""
      ref={dialogRef}
      aria-labelledby="project-detail-title"
      onClose={onClose}
      onClick={(event) => {
        if (event.target === event.currentTarget) {
          onClose();
        }
      }}
    >
      {project ? (
        <ProjectDetailBody
          key={project.slug}
          project={project}
          number={number}
          onClose={onClose}
        />
      ) : null}
    </dialog>
  );
};
