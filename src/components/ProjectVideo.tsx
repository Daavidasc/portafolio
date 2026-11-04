import { useState } from 'react';
import { prefersReducedMotion } from '../lib/motion';

type ProjectVideoProps = {
  src: string;
  title: string;
};

// Render del proyecto: arranca solo (sin sonido, en bucle) al abrir la ventana. Con movimiento reducido no
// se reproduce solo y se muestran los controles.
export const ProjectVideo = ({ src, title }: ProjectVideoProps) => {
  const [reduced] = useState(prefersReducedMotion);

  return (
    <div className="project-video">
      {/* Copia desenfocada que rellena los lados del video vertical en lugar de dejar franjas negras. */}
      <video
        className="project-video__backdrop"
        src={src}
        aria-hidden="true"
        autoPlay={!reduced}
        loop
        muted
        playsInline
        preload="auto"
        tabIndex={-1}
      />
      <video
        className="project-video__media"
        src={src}
        aria-label={title}
        autoPlay={!reduced}
        controls={reduced}
        loop
        muted
        playsInline
        preload="auto"
      />
    </div>
  );
};
