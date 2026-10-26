import { useState } from 'react';
import { prefersReducedMotion } from '../lib/motion';
import { useLang } from '../i18n/useLang';

type ProjectGalleryProps = {
  images: string[];
  title: string;
};

// Capturas completas que rotan solas. El indicador de arriba se parte en tantos tramos como imágenes y cada
// uno se va llenando mientras su imagen está en pantalla. Con movimiento reducido no rota sola.
export const ProjectGallery = ({ images, title }: ProjectGalleryProps) => {
  const { ui } = useLang();
  const [index, setIndex] = useState(0);
  const [reduced] = useState(prefersReducedMotion);
  const count = images.length;
  const next = () => setIndex((value) => (value + 1) % count);

  return (
    <div
      className="project-gallery"
      role="group"
      aria-roledescription="carousel"
      aria-label={ui.gallery}
    >
      {count > 1 ? (
        <ol className="project-gallery__progress">
          {images.map((src, position) => (
            <li key={src}>
              <button
                type="button"
                aria-label={`${ui.gallery} ${position + 1}/${count}`}
                aria-current={position === index}
                onClick={() => setIndex(position)}
              >
                <span
                  className={`project-gallery__fill${
                    position < index
                      ? ' is-done'
                      : position === index
                        ? ' is-active'
                        : ''
                  }`}
                  onAnimationEnd={
                    position === index && !reduced ? next : undefined
                  }
                />
              </button>
            </li>
          ))}
        </ol>
      ) : null}

      <div className="project-gallery__frame">
        {images.map((src, position) => (
          <img
            className={`project-gallery__image${position === index ? ' is-current' : ''}`}
            key={src}
            src={src}
            alt={`${ui.preview} ${title} (${position + 1}/${count})`}
            aria-hidden={position !== index}
          />
        ))}
      </div>
    </div>
  );
};
