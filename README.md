# Portafolio David Serrudo

React + Vite + TypeScript + Tailwind CSS. Guía de estilo en `references/diseño.md`.

## Proyectos

Los proyectos se definen en `src/data/projects.ts`; para agregar uno basta con añadir un objeto al arreglo. Los campos marcados `TODO` (año, métricas) están pendientes de confirmar y no se muestran en la web.

### Imágenes

- Tamaño recomendado: ≈ 800×800, fondo transparente u oscuro, formato WebP.
- Ubicación: `public/images/projects/`.
- Nombres esperados por proyecto: `<slug>.svg` (imagen) y `<slug>-hover.svg` (versión al pasar el cursor). Hoy son placeholders SVG; al reemplazarlos, actualiza `image` e `imageHover` en `projects.ts`.
