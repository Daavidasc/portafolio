# Tarea: rediseñar la sección "Proyectos" de mi portafolio

## Contexto
Soy David Serrudo, estudiante de Ciencias de la Computación (UPC) buscando internships de ML en EE.UU. Mi portafolio actual es oscuro, con el nombre en tipografía gigante, etiquetas en monoespaciada y un toggle claro/oscuro. Quiero que la sección **Proyectos** tenga el estilo de la sección "Helmets" de landonorris.com: una grilla escalonada de tarjetas con borde fino y una esquina inferior derecha "cortada" donde va la etiqueta.

## Antes de empezar
1. Lee la estructura del repo y detecta el stack real (HTML/CSS/JS, React, Next.js, Astro, etc.). **Adapta todo al stack existente**, no migres ni agregues frameworks sin necesidad.
2. Reutiliza las variables, fuentes y colores que ya existan (modo claro/oscuro incluido).
3. Si falta una variable de color de acento, créala como `--accent` (sugerencia: un verde lima o cian neón) y úsala solo en detalles.
4. Haz los cambios por pasos y verifica que el sitio compile y se vea bien en cada paso.

## Diseño objetivo

### Grilla
- Desktop (≥1200px): **4 columnas** con `gap` de ~20px y márgenes laterales amplios.
- Las columnas **pares (2 y 4) están desplazadas hacia abajo** media tarjeta (≈ alto de tarjeta / 2 + gap / 2). Así queda el efecto escalonado.
- Tablet (≥768px): 2 columnas, con la segunda desplazada.
- Móvil: 1 columna, sin desplazamiento.
- Reparte los proyectos en las columnas en orden round-robin (1ª tarjeta col 1, 2ª col 2, 3ª col 3, 4ª col 4, 5ª col 1...), igual que la referencia.
- Tarjetas casi cuadradas (relación ~ 1:1.01).

### Tarjeta
- Fondo ligeramente más claro que la página, **borde de 1px** sutil (gris/blanco con baja opacidad) y esquinas redondeadas (~16px).
- **Esquina inferior derecha recortada** en forma de pestaña: ahí se ubica la etiqueta `Nombre  Año`.
  - Nombre en blanco, semibold. Año en `--accent`.
  - La unión entre la pestaña y el borde lleva curvas suaves (esquinas cóncavas redondeadas), como en la referencia.
  - El borde de 1px debe seguir todo el contorno, incluida la pestaña.
- **Técnica recomendada para el recorte con borde:** componente que dibuja el contorno como un `<svg>` con un `<path>` generado a partir del tamaño real de la tarjeta (usa `ResizeObserver`), con `fill` y `stroke` en variables CSS. Alternativa: `mask` con `radial-gradient` + un pseudo-elemento para el borde. Elige la que se vea más nítida y no se deforme al cambiar el tamaño.
- Contenido: imagen o demo del proyecto centrada dentro de la tarjeta (`object-fit: contain`, con padding generoso).

### Interacción
- **Hover:** el borde pasa a `--accent`, la tarjeta sube 4–6px y la imagen cambia por una segunda versión (GIF o video corto de la demo). Si no existe segunda imagen, haz un zoom suave.
- **Click:** abre el detalle del proyecto (modal o página `/proyectos/[slug]`, lo que encaje mejor con el stack) con descripción, stack usado, métricas clave y enlaces a GitHub/demo.
- **Entrada:** las tarjetas aparecen con fade + translate al hacer scroll, con un pequeño retraso escalonado.
- Respeta `prefers-reduced-motion` (sin animaciones si está activo).
- Navegación por teclado: cada tarjeta es un enlace/botón enfocable con `:focus-visible` visible.

## Datos de los proyectos
Crea un único archivo de datos (por ejemplo `projects.json` o `projects.ts`) y genera las tarjetas desde ahí. Campos por proyecto:

```
slug, title, year, tagline, description, stack[], metrics[{label,value}], image, imageHover, links{github,demo,paper}
```

Proyectos iniciales (**los años y métricas son placeholders: déjalos marcados con `TODO` para que yo los confirme; no inventes números**):

| slug | title | tagline |
|---|---|---|
| kmeans-concurrente | K-Means concurrente en Go | Clustering de datos de energía con goroutines |
| pokemon-rl | Agente RL para Pokémon | Agente que generaliza a mecánicas de juego nuevas |
| migepete | MiGepete (mini GPT) | Modelo estilo nanoGPT entrenado desde cero en PyTorch |
| hibrido-cuantico | Modelo híbrido cuántico-clásico | Artículo científico (TP1), asesor Willy Ugarte |
| yousician-ukulele | Análisis de datos Yousician | Proyecto de data science: comprensión y preprocesamiento |
| audit-llm | Auditoría de sesgo en LLMs (CENIA) | Investigación en auditoría situada de interacción |

Agrega más fácilmente: basta con añadir un objeto al archivo de datos.

## Imágenes
- Mientras no tenga capturas reales, genera **placeholders SVG consistentes** (formas abstractas con `--accent` sobre fondo oscuro) para que la grilla se vea completa.
- Deja en el README del repo una nota con el tamaño recomendado (≈ 800×800, fondo transparente o oscuro, formato WebP) y el nombre de archivo que espera cada proyecto.
- Usa `loading="lazy"` y `alt` descriptivo.

## Criterios de aceptación
- [ ] La grilla escalonada de 4 columnas se ve como la referencia en desktop y colapsa bien en tablet y móvil.
- [ ] Cada tarjeta tiene el recorte inferior derecho con la etiqueta, y el borde se ve nítido en cualquier tamaño.
- [ ] Hover, click y animación de entrada funcionan; respeta `prefers-reduced-motion`.
- [ ] Funciona en modo claro y oscuro con los colores existentes.
- [ ] Los proyectos salen de un solo archivo de datos.
- [ ] Sin errores en consola; Lighthouse de rendimiento y accesibilidad razonable (≥ 90).
- [ ] No se rompió ninguna otra sección (Inicio, Experiencia, Contacto).

## Al terminar
Resume brevemente qué archivos creaste o modificaste, qué decisiones tomaste (técnica del recorte, cómo se hizo el detalle del proyecto) y qué `TODO` me quedan por completar (años, métricas, imágenes reales).