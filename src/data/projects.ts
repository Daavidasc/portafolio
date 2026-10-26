import type { Lang } from '../i18n/types';
import { asset } from '../lib/asset';

export type Project = {
  slug: string;
  title: string;
  year: string;
  tagline: string;
  description: string;
  stack: string[];
  metrics: { label: string; value: string }[];
  /** Portada. Sin ella la tarjeta no pinta imagen (p. ej. karate-panamericano, pendiente). */
  image?: string;
  imageHover?: string;
  /** 'cover': la portada llena toda la tarjeta (recortada si hace falta) en vez de quedar contenida con margen. */
  imageFit?: 'cover';
  /** 'cover': la segunda imagen (al pasar el mouse) llena toda la tarjeta. Con imageFit 'cover' ya lo hace. */
  hoverFit?: 'cover';
  /** 'start': la segunda imagen se recorta desde la izquierda (no desde el centro), p. ej. para que se vea el logo. */
  hoverAlign?: 'start';
  /** Fondo de la tarjeta: 'cream' (crema de ViviEstu) o 'forest' (verde oscuro de Greenlight), para logos. */
  tone?: 'cream' | 'forest';
  /** Video de juego (pendiente en karate-panamericano; aún no se muestra en ningún sitio). */
  video?: string;
  /** Capturas que se ven en el detalle del proyecto. */
  gallery?: string[];
  links: { github?: string; demo?: string; paper?: string };
  /** 'wasm-gui': se puede jugar en el navegador desde el detalle. */
  type?: 'wasm-gui';
  playConfig?: PlayConfig;
};

export type PlayConfig = {
  /** Página del juego (ya con la base del sitio). Se carga en un iframe solo al pulsar «Jugar». */
  path: string;
  controls: string[];
};

type ProjectText = {
  title: string;
  tagline: string;
  description: string;
  stack: string[];
  controls?: string[];
};

type ProjectBase = Omit<Project, keyof ProjectText | 'playConfig'> & {
  playConfig?: { path: string };
  text: Record<Lang, ProjectText>;
};

// Años y métricas marcados con TODO: pendientes de confirmar. No inventar cifras.
const projectBase: ProjectBase[] = [
  {
    slug: 'emotiongestureapp',
    year: '2025',
    metrics: [],
    image: asset('/images/projects/project-reference-grid.png'),
    links: { github: 'https://github.com/Daavidasc/EmotionGestureApp' },
    text: {
      es: {
        title: 'EmotionGestureApp',
        tagline: 'Visión artificial en tiempo real para gestos y emociones',
        description:
          'Aplicación de visión artificial en tiempo real para la interacción hombre-máquina mediante detección de gestos y emociones.',
        stack: ['Computer Vision', 'IA'],
      },
      en: {
        title: 'EmotionGestureApp',
        tagline: 'Real-time computer vision for gestures and emotions',
        description:
          'Real-time computer vision application for human-machine interaction through gesture and emotion detection.',
        stack: ['Computer Vision', 'AI'],
      },
    },
  },
  {
    slug: 'viviestu',
    year: '2025',
    metrics: [],
    // Portada: el logo sobre el crema de la marca (dorado + crema). Al pasar el mouse, la página de inicio.
    image: asset('/projects/viviestu/logo.png'),
    tone: 'cream',
    // Recorte de image1 que empieza justo en el logo (sin el margen izquierdo de la página).
    imageHover: asset('/projects/viviestu/hover.png'),
    hoverFit: 'cover',
    hoverAlign: 'start',
    gallery: [
      asset('/projects/viviestu/image1.png'),
      asset('/projects/viviestu/image2.png'),
      asset('/projects/viviestu/image3.png'),
    ],
    links: {},
    text: {
      es: {
        title: 'ViviEstu',
        tagline: 'Plataforma para conectar estudiantes con arrendadores',
        description:
          'Plataforma Fullstack para conectar estudiantes con arrendadores, centralizando información y reforzando la seguridad en la búsqueda de vivienda.',
        stack: ['Full Stack', 'Arquitectura'],
      },
      en: {
        title: 'ViviEstu',
        tagline: 'Platform connecting students with landlords',
        description:
          'Full Stack platform that connects students with landlords, centralizing information and improving safety in the housing search.',
        stack: ['Full Stack', 'Architecture'],
      },
    },
  },
  {
    slug: 'keplerx',
    year: '2025',
    metrics: [],
    image: asset('/images/projects/project-reference-grid.png'),
    links: { github: 'https://github.com/Machiz/KeplerX' },
    text: {
      es: {
        title: 'KeplerX',
        tagline: 'Detección de exoplanetas con datos abiertos de la NASA',
        description:
          'Sistema integral para identificar exoplanetas a partir de datos astronómicos abiertos de la NASA, combinando análisis estadístico, Machine Learning y despliegue reproducible.',
        stack: ['Data Science', 'ML', 'API', 'Docker'],
      },
      en: {
        title: 'KeplerX',
        tagline: 'Exoplanet detection with open NASA data',
        description:
          'End-to-end system that identifies exoplanets from open NASA astronomical data, combining statistical analysis, Machine Learning and reproducible deployment.',
        stack: ['Data Science', 'ML', 'API', 'Docker'],
      },
    },
  },
  {
    slug: 'kmeans-concurrente',
    year: 'TODO',
    metrics: [{ label: 'TODO', value: 'TODO' }],
    image: asset('/images/projects/kmeans-concurrente.svg'),
    imageHover: asset('/images/projects/kmeans-concurrente-hover.svg'),
    links: {},
    text: {
      es: {
        title: 'K-Means concurrente en Go',
        tagline: 'Clustering de datos de energía con goroutines',
        description:
          'Implementación concurrente del algoritmo K-Means en Go para agrupar datos de consumo de energía, usando goroutines.',
        stack: ['Go', 'Concurrencia', 'K-Means'],
      },
      en: {
        title: 'Concurrent K-Means in Go',
        tagline: 'Energy-data clustering with goroutines',
        description:
          'Concurrent implementation of the K-Means algorithm in Go to cluster energy consumption data using goroutines.',
        stack: ['Go', 'Concurrency', 'K-Means'],
      },
    },
  },
  {
    slug: 'pokemon-rl',
    year: 'TODO',
    metrics: [{ label: 'TODO', value: 'TODO' }],
    image: asset('/images/projects/pokemon-rl.svg'),
    imageHover: asset('/images/projects/pokemon-rl-hover.svg'),
    links: {},
    text: {
      es: {
        title: 'Agente RL para Pokémon',
        tagline: 'Agente que generaliza a mecánicas de juego nuevas',
        description:
          'Agente de aprendizaje por refuerzo que busca generalizar a mecánicas de juego no vistas durante el entrenamiento.',
        stack: ['Python', 'Reinforcement Learning'],
      },
      en: {
        title: 'RL agent for Pokémon',
        tagline: 'Agent that generalizes to new game mechanics',
        description:
          'Reinforcement learning agent that aims to generalize to game mechanics not seen during training.',
        stack: ['Python', 'Reinforcement Learning'],
      },
    },
  },
  {
    slug: 'migepete',
    year: 'TODO',
    metrics: [{ label: 'TODO', value: 'TODO' }],
    image: asset('/images/projects/migepete.svg'),
    imageHover: asset('/images/projects/migepete-hover.svg'),
    links: {},
    text: {
      es: {
        title: 'MiGepete (mini GPT)',
        tagline: 'Modelo estilo nanoGPT entrenado desde cero en PyTorch',
        description:
          'Modelo de lenguaje pequeño estilo nanoGPT, entrenado desde cero con PyTorch.',
        stack: ['Python', 'PyTorch', 'Transformers'],
      },
      en: {
        title: 'MiGepete (mini GPT)',
        tagline: 'nanoGPT-style model trained from scratch in PyTorch',
        description:
          'Small nanoGPT-style language model trained from scratch with PyTorch.',
        stack: ['Python', 'PyTorch', 'Transformers'],
      },
    },
  },
  {
    slug: 'hibrido-cuantico',
    year: 'TODO',
    metrics: [{ label: 'TODO', value: 'TODO' }],
    image: asset('/images/projects/hibrido-cuantico.svg'),
    imageHover: asset('/images/projects/hibrido-cuantico-hover.svg'),
    links: {},
    text: {
      es: {
        title: 'Modelo híbrido cuántico-clásico',
        tagline: 'Artículo científico (TP1), asesor Willy Ugarte',
        description:
          'Artículo científico sobre un modelo híbrido cuántico-clásico, desarrollado con el asesor Willy Ugarte.',
        stack: ['Computación cuántica', 'Machine Learning'],
      },
      en: {
        title: 'Hybrid quantum-classical model',
        tagline: 'Scientific paper (TP1), advisor Willy Ugarte',
        description:
          'Scientific paper on a hybrid quantum-classical model, developed with advisor Willy Ugarte.',
        stack: ['Quantum computing', 'Machine Learning'],
      },
    },
  },
  {
    slug: 'yousician-ukulele',
    year: 'TODO',
    metrics: [{ label: 'TODO', value: 'TODO' }],
    image: asset('/images/projects/yousician-ukulele.svg'),
    imageHover: asset('/images/projects/yousician-ukulele-hover.svg'),
    links: {},
    text: {
      es: {
        title: 'Análisis de datos Yousician',
        tagline: 'Proyecto de data science: comprensión y preprocesamiento',
        description:
          'Proyecto de data science centrado en la comprensión y el preprocesamiento de datos de Yousician.',
        stack: ['Python', 'Data Science'],
      },
      en: {
        title: 'Yousician data analysis',
        tagline: 'Data science project: data understanding and preprocessing',
        description:
          'Data science project focused on understanding and preprocessing Yousician data.',
        stack: ['Python', 'Data Science'],
      },
    },
  },
  {
    slug: 'audit-llm',
    year: 'TODO',
    metrics: [{ label: 'TODO', value: 'TODO' }],
    image: asset('/images/projects/audit-llm.svg'),
    imageHover: asset('/images/projects/audit-llm-hover.svg'),
    links: {},
    text: {
      es: {
        title: 'Auditoría de sesgo en LLMs (CENIA)',
        tagline: 'Investigación en auditoría situada de interacción',
        description:
          'Investigación en auditoría situada de la interacción con modelos de lenguaje, en el marco de CENIA.',
        stack: ['LLMs', 'Auditoría', 'Investigación'],
      },
      en: {
        title: 'LLM bias audit (CENIA)',
        tagline: 'Research on situated auditing of interaction',
        description:
          'Research on situated auditing of interaction with language models, within CENIA.',
        stack: ['LLMs', 'Auditing', 'Research'],
      },
    },
  },
  {
    slug: 'karate-panamericano',
    // Año confirmado por David; curso y rol siguen sin confirmar.
    year: '2023',
    metrics: [],
    // Portada: la pantalla de título (Santiago 2023), que también abre la galería; al pasar el mouse, el combate de cerca.
    // El video (public/projects/karate/gameplay.mp4) sigue pendiente.
    image: asset('/projects/karate/portada.png'),
    imageFit: 'cover',
    imageHover: asset('/projects/karate/hover.png'),
    gallery: [
      asset('/projects/karate/portada.png'),
      asset('/projects/karate/combate1.png'),
      asset('/projects/karate/combate2.png'),
    ],
    links: { github: 'https://github.com/Daavidasc/karate-panamericano' },
    type: 'wasm-gui',
    playConfig: { path: '/play/karate-panamericano/index.html' },
    text: {
      es: {
        title: 'Karate Panamericano',
        tagline: 'Torneo de karate por consola, con arte hecho de caracteres de bloque.',
        description:
          'Juego de karate por consola en C++ con arte hecho de caracteres de bloque. Eliges un país entre diez y compites en un torneo de tres rondas, con golpes, patadas, defensa, resistencia, penalizaciones por salir del cuadrilátero y un podio final.',
        stack: ['C++', 'WebAssembly', 'Emscripten', 'xterm.js'],
        controls: [
          'Menú y país: escribe el número y pulsa Enter.',
          'En combate: pulsa 1 o 2 (atacar o defenderse, puñete o patada).',
          'Cualquier tecla para continuar.',
        ],
      },
      en: {
        title: 'Karate Panamericano',
        tagline: 'A console karate tournament with block-character pixel art.',
        description:
          'A console karate game in C++ with block-character pixel art. You pick one of ten countries and fight a three-round tournament, with punches, kicks, defense, stamina, ring-out penalties and a final podium.',
        stack: ['C++', 'WebAssembly', 'Emscripten', 'xterm.js'],
        controls: [
          'Menu and country: type the number and press Enter.',
          'In a fight: press 1 or 2 (attack or defend, punch or kick).',
          'Any key to continue.',
        ],
      },
    },
  },
  {
    slug: 'ouite',
    // Año confirmado por David; curso y rol siguen sin confirmar.
    year: '2023',
    metrics: [],
    // Portada: la pantalla de título. El video sigue pendiente.
    image: asset('/projects/ouite/inicio.png'),
    // Al pasar el mouse por la tarjeta, la portada cambia a la partida con varias cartas.
    imageHover: asset('/projects/ouite/partida.png'),
    imageFit: 'cover',
    // La portada (inicio.png) no se repite en la galería de la ventana.
    gallery: [
      asset('/projects/ouite/menu.png'),
      asset('/projects/ouite/reparto.png'),
      asset('/projects/ouite/partida.png'),
    ],
    links: { github: 'https://github.com/Daavidasc/ouite' },
    type: 'wasm-gui',
    playConfig: { path: '/play/ouite/index.html' },
    text: {
      es: {
        title: 'Ouite',
        tagline: 'Juego de cartas por consola para dos jugadores.',
        description:
          'Juego de cartas por consola en C++ para dos jugadores, con las cartas dibujadas con caracteres de bloque. Eliges entre 5 y 10 rondas: en cada una sale una carta al azar y suma un punto quien la tenga en su mano de 8 cartas y la elimine.',
        stack: ['C++', 'WebAssembly', 'Emscripten', 'xterm.js'],
        controls: [
          'Menú: pulsa la letra de la opción (I, J, C o S).',
          'Rondas, nombres y carta a eliminar: escribe y pulsa Enter (0 para pasar).',
        ],
      },
      en: {
        title: 'Ouite',
        tagline: 'A two-player console card game.',
        description:
          'A two-player console card game in C++ with block-character card art. You pick 5 to 10 rounds: each round a random card is shown, and whoever holds it in their 8-card hand and discards it scores a point.',
        stack: ['C++', 'WebAssembly', 'Emscripten', 'xterm.js'],
        controls: [
          'Menu: press the option letter (I, J, C or S).',
          'Rounds, names and card to discard: type and press Enter (0 to pass).',
        ],
      },
    },
  },
  {
    slug: 'mision-espacial',
    // Año confirmado por David; curso y rol siguen sin confirmar.
    year: '2023',
    metrics: [],
    // Portada: img0; al pasar el mouse, img2. La galería de la ventana usa img1 a img3. El video sigue pendiente.
    image: asset('/projects/mision-espacial/portada.png'),
    imageHover: asset('/projects/mision-espacial/img2.png'),
    imageFit: 'cover',
    gallery: [
      asset('/projects/mision-espacial/img1.png'),
      asset('/projects/mision-espacial/img2.png'),
      asset('/projects/mision-espacial/img3.png'),
    ],
    links: { github: 'https://github.com/Daavidasc/Mision-Marte' },
    type: 'wasm-gui',
    playConfig: { path: '/play/mision-espacial/index.html' },
    text: {
      es: {
        title: 'Misión Espacial',
        tagline: 'Aterrizaje en Marte y recolección de muestras, por consola.',
        description:
          'Juego de consola en C++ ambientado en Marte: esquivas meteoritos para lograr un aterrizaje seguro y luego conduces un rover que recoge las muestras y las deja una por una en el depósito antes de volver a la nave. Se juega con las flechas, con modo automático y una simulación.',
        stack: ['C++', 'WebAssembly', 'Emscripten', 'xterm.js'],
        controls: [
          'Menú: escribe el número y pulsa Enter.',
          'Flechas para moverte; A activa o desactiva el modo automático.',
        ],
      },
      en: {
        title: 'Space Mission',
        tagline: 'A Mars landing and sample-collection mission on the console.',
        description:
          'A console game in C++ set on Mars: you dodge meteorites to land safely, then drive a rover that collects the samples and drops them off one by one at the depot before returning to the ship. It is played with the arrow keys, with an automatic mode and a simulation.',
        stack: ['C++', 'WebAssembly', 'Emscripten', 'xterm.js'],
        controls: [
          'Menu: type the number and press Enter.',
          'Arrow keys to move; A toggles automatic mode.',
        ],
      },
    },
  },
  {
    slug: 'greenlight',
    year: '2026',
    metrics: [],
    // Portada: el logo (PNG transparente) sobre verde bosque oscuro.
    image: asset('/projects/greenlight/logo.png'),
    tone: 'forest',
    // Pendiente: descripción, stack, enlaces y capturas (David los enviará).
    links: {},
    text: {
      es: {
        title: 'Greenlight',
        tagline: 'App de cine con IA.',
        description: '',
        stack: [],
      },
      en: {
        title: 'Greenlight',
        tagline: 'An AI film app.',
        description: '',
        stack: [],
      },
    },
  },
];

export const getProjects = (lang: Lang): Project[] =>
  projectBase.map(({ text, playConfig, ...base }) => {
    const { controls, ...copy } = text[lang];

    return {
      ...base,
      ...copy,
      playConfig: playConfig
        ? { path: asset(playConfig.path), controls: controls ?? [] }
        : undefined,
    };
  });

export const isPending = (value: string) =>
  value === '' || value.startsWith('TODO');
