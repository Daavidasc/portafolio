type ProjectCardStackProps = {
  stack: string[];
};

/**
 * Tecnologías del proyecto como bloques naranjas que aparecen en la esquina superior de la tarjeta
 * al pasar el mouse (o al enfocarla con el teclado). Es decorativo: el detalle del proyecto
 * repite el stack para lectores de pantalla y pantallas táctiles.
 */
export const ProjectCardStack = ({ stack }: ProjectCardStackProps) => {
  if (stack.length === 0) {
    return null;
  }

  return (
    <span className="project-card__specs" aria-hidden="true">
      {stack.map((item) => (
        <span className="project-card__specs-item" key={item}>
          {item}
        </span>
      ))}
    </span>
  );
};
