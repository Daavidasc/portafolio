// Prefija la ruta con la base del sitio (p. ej. /WebPortafolio/ en GitHub Pages).
export const asset = (path: string) =>
  `${import.meta.env.BASE_URL}${path.replace(/^\//, '')}`;
