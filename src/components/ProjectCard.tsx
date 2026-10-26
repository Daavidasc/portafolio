import { useId, useLayoutEffect, useRef, useState } from 'react';
import { isPending } from '../data/projects';
import type { Project } from '../data/projects';
import { useInView } from '../hooks/useInView';
import { useLang } from '../i18n/useLang';

const RADIUS = 16;
const CURVE = 12;

type Size = {
  width: number;
  height: number;
  tabWidth: number;
  tabHeight: number;
};

const buildPath = ({ width: w, height: h, tabWidth: tw, tabHeight: th }: Size) => {
  const r = RADIUS;
  const c = CURVE;

  return [
    `M ${r} 0`,
    `H ${w - r}`,
    `A ${r} ${r} 0 0 1 ${w} ${r}`,
    `V ${h - th - c}`,
    `A ${c} ${c} 0 0 1 ${w - c} ${h - th}`,
    `H ${w - tw + c}`,
    `A ${c} ${c} 0 0 0 ${w - tw} ${h - th + c}`,
    `V ${h - c}`,
    `A ${c} ${c} 0 0 1 ${w - tw - c} ${h}`,
    `H ${r}`,
    `A ${r} ${r} 0 0 1 0 ${h - r}`,
    `V ${r}`,
    `A ${r} ${r} 0 0 1 ${r} 0`,
    'Z',
  ].join(' ');
};

type ProjectCardProps = {
  project: Project;
  /** Posición en la lista (1, 2, 3...): es el número de la capa de revelación sin imagen. */
  number: number;
  onOpen: (project: Project) => void;
};

export const ProjectCard = ({ project, number, onOpen }: ProjectCardProps) => {
  const { ui } = useLang();
  const cardRef = useRef<HTMLButtonElement>(null);
  const tabRef = useRef<HTMLSpanElement>(null);
  const [size, setSize] = useState<Size | null>(null);
  const { ref: viewRef, inView } = useInView<HTMLDivElement>();
  const clipId = useId();
  const gradientId = useId();
  const fillsCard = project.imageFit === 'cover' && Boolean(project.image);
  const revealId = `${clipId}-reveal`;
  // Con cubierta a tarjeta completa, o sin segunda imagen, la revelación cubre toda la tarjeta.
  const hoverCovers = Boolean(project.imageHover) && (fillsCard || project.hoverFit === 'cover');
  const showsReveal = hoverCovers || !project.imageHover;

  useLayoutEffect(() => {
    const card = cardRef.current;
    const tab = tabRef.current;

    if (!card || !tab) {
      return;
    }

    const measure = () =>
      setSize({
        width: card.offsetWidth,
        height: card.offsetHeight,
        tabWidth: tab.offsetWidth,
        tabHeight: tab.offsetHeight,
      });

    measure();
    const observer = new ResizeObserver(measure);
    observer.observe(card);
    observer.observe(tab);

    return () => observer.disconnect();
  }, []);

  return (
    <div
      className={`project-reveal${inView ? ' is-visible' : ''}`}
      ref={viewRef}
    >
      <button
        className={`project-card${project.tone ? ` is-${project.tone}` : ''}`}
        type="button"
        ref={cardRef}
        aria-haspopup="dialog"
        aria-label={`${ui.viewDetail} ${project.title}`}
        onClick={() => onOpen(project)}
      >
        {size ? (
          <svg
            className="project-card__outline"
            width={size.width}
            height={size.height}
            viewBox={`0 0 ${size.width} ${size.height}`}
            aria-hidden="true"
          >
            <path d={buildPath(size)} />
            {fillsCard ? (
              <>
                <clipPath id={clipId}>
                  <path d={buildPath(size)} />
                </clipPath>
                <image
                  href={project.image}
                  width={size.width}
                  height={size.height}
                  preserveAspectRatio="xMidYMid slice"
                  clipPath={`url(#${clipId})`}
                />
                <path className="project-card__stroke" d={buildPath(size)} />
              </>
            ) : null}
          </svg>
        ) : null}

        <span className="project-card__media">
          {project.image && !fillsCard ? (
            <img
              className="project-card__image"
              src={project.image}
              alt={`${ui.preview} ${project.title}`}
              loading="lazy"
            />
          ) : null}
          {project.imageHover && !hoverCovers ? (
            <img
              className="project-card__image project-card__image--hover"
              src={project.imageHover}
              alt=""
              loading="eager"
            />
          ) : null}
        </span>

        {size && showsReveal ? (
          <svg
            className="project-card__outline project-card__outline--top"
            width={size.width}
            height={size.height}
            viewBox={`0 0 ${size.width} ${size.height}`}
            aria-hidden="true"
          >
            <clipPath id={revealId}>
              <path d={buildPath(size)} />
            </clipPath>
            <g clipPath={`url(#${revealId})`}>
              {project.imageHover ? (
                <image
                  className="project-card__reveal"
                  href={project.imageHover}
                  width={size.width}
                  height={size.height}
                  preserveAspectRatio={
                    project.hoverAlign === 'start'
                      ? 'xMinYMid slice'
                      : 'xMidYMid slice'
                  }
                />
              ) : (
                <g className="project-card__reveal">
                  <defs>
                    <linearGradient
                      id={gradientId}
                      x1="0"
                      y1="0"
                      x2="1"
                      y2="1"
                    >
                      <stop className="project-card__stop-from" offset="0" />
                      <stop className="project-card__stop-to" offset="0.7" />
                    </linearGradient>
                  </defs>
                  <rect
                    width={size.width}
                    height={size.height}
                    fill={`url(#${gradientId})`}
                  />
                  <text
                    className="project-card__reveal-number"
                    x={size.width / 2}
                    y={size.height / 2}
                    textAnchor="middle"
                    dominantBaseline="central"
                  >
                    {String(number).padStart(2, '0')}
                  </text>
                </g>
              )}
            </g>
            <path className="project-card__stroke" d={buildPath(size)} />
          </svg>
        ) : null}

        <span className="project-card__tab" ref={tabRef}>
          <span className="project-card__title">{project.title}</span>
          {isPending(project.year) ? null : (
            <span className="project-card__year">{project.year}</span>
          )}
        </span>
      </button>
    </div>
  );
};
