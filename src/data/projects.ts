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
  /** Fondo de la tarjeta: 'cream' (crema de ViviEstu), 'forest' (verde oscuro de Greenlight) 'white' (blanco de MyDNS) o 'night' (casi negro de KeplerX), para logos. */
  tone?: 'cream' | 'forest' | 'white' | 'night';
  /** Video que se reproduce solo (mudo, en bucle) arriba de la ventana de detalle, en lugar de la galería. */
  video?: string;
  /** Capturas que se ven en el detalle del proyecto. */
  gallery?: string[];
  /** Con githubBack, el enlace github se muestra como «GitHub Front» (repos separados). */
  links: { github?: string; githubBack?: string; demo?: string; paper?: string };
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
    // Portada: collage de caras (personas, animales, dibujos); llena toda la tarjeta.
    image: asset('/projects/emotiongestureapp/cover.png'),
    // Al pasar el mouse: la app en uso (detección de cara y mano).
    imageHover: asset('/projects/emotiongestureapp/hover.png'),
    imageFit: 'cover',
    // Render a pantalla completa (358×456, ~10 s) que se reproduce al abrir la ventana.
    video: asset('/projects/emotiongestureapp/render.mp4'),
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
    links: {
      github: 'https://github.com/Daavidasc/viviEstu-app-front',
      githubBack: 'https://github.com/Machiz/ViviEstu',
      demo: 'https://viviestu.vercel.app/',
    },
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
    // Portada: el logo con su propio fondo casi negro (#04060c), igual que la tarjeta.
    image: asset('/projects/keplerx/logo.png'),
    tone: 'night',
    // Al pasar el mouse: animación del tránsito (el brillo de la estrella baja cuando pasa el planeta).
    imageHover: asset('/projects/keplerx/hover.png'),
    hoverFit: 'cover',
    // Capturas: inicio, cómo funciona y resultado del análisis. Ajustadas a 1610×972
    // (proporción del marco de la galería) sin recortar contenido.
    gallery: [
      asset('/projects/keplerx/inicio.png'),
      asset('/projects/keplerx/como-funciona.png'),
      asset('/projects/keplerx/resultado.png'),
    ],
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
    // Al pasar el mouse: captura de la app (storyboard de una escena).
    imageHover: asset('/projects/greenlight/hover.png'),
    hoverFit: 'cover',
    // Capturas: storyboard primero (la más visual), luego análisis del guion y presupuesto.
    // Recortadas a 1535×927 (misma proporción que el marco de la galería) para que no queden franjas.
    gallery: [
      asset('/projects/greenlight/storyboard.png'),
      asset('/projects/greenlight/analisis.png'),
      asset('/projects/greenlight/presupuesto.png'),
    ],
    // Descripción y stack tomados del README del repositorio.
    links: {
      github: 'https://github.com/Daavidasc/Greenlight',
      demo: 'https://agentic-preproduction-433256380169.us-central1.run.app/',
    },
    text: {
      es: {
        title: 'Greenlight',
        tagline: 'Del guion en PDF al storyboard, presupuesto y plan de rodaje.',
        description:
          'Asistente de producción para cineastas independientes: convierte un guion en PDF en un análisis escena por escena, storyboards, un presupuesto con fuentes y un calendario de rodaje. Gemini en Vertex AI, orquestado con Google ADK, analiza el guion y genera el concept art, y la Parallel Search API consulta tarifas actuales de mercado citando sus fuentes. Hecho para el hackathon Agentic Cinema (Google Cloud), categoría Parallel.',
        stack: ['Gemini', 'Google ADK', 'FastAPI', 'React', 'Cloud Run'],
      },
      en: {
        title: 'Greenlight',
        tagline: 'From a PDF script to a storyboard, budget and shooting schedule.',
        description:
          'Production assistant for independent filmmakers: it turns a PDF script into a scene-by-scene analysis, storyboards, a sourced budget and a shooting schedule. Gemini on Vertex AI, orchestrated with Google ADK, analyzes the script and generates the concept art, and the Parallel Search API looks up current market rates and cites its sources. Built for the Agentic Cinema hackathon (Google Cloud), Parallel track.',
        stack: ['Gemini', 'Google ADK', 'FastAPI', 'React', 'Cloud Run'],
      },
    },
  },
  {
    slug: 'mydns',
    year: '2026',
    metrics: [],
    // Portada: el logo (PNG transparente; "my" azul marino) sobre tarjeta blanca, donde se lee mejor.
    image: asset('/projects/mydns/logo.png'),
    tone: 'white',
    // Al pasar el mouse: el panel de dispositivos detectados del dashboard.
    imageHover: asset('/projects/mydns/hover.png'),
    hoverFit: 'cover',
    // Capturas del dashboard: panel general (dispositivos y tráfico) y blacklist.
    // Recortadas a 1294×781 (misma proporción que el marco de la galería).
    gallery: [asset('/projects/mydns/panel.png'), asset('/projects/mydns/blacklist.png')],
    // Descripción y stack tomados del README del repositorio.
    links: { github: 'https://github.com/Daavidasc/MyDNS' },
    text: {
      es: {
        title: 'MyDNS',
        tagline: 'DNS local para ver el tráfico de la red y bloquear dominios',
        description:
          'Sistema local para visualizar el tráfico DNS de la red y restringir el acceso a páginas web por sus dominios. Los dispositivos de la red consultan a este DNS: si el dominio está en la blacklist responde 0.0.0.0 y la página queda bloqueada; si no, reenvía la consulta a un DNS externo. Un servidor en Python registra las consultas en SQLite y un panel en Next.js muestra el tráfico, los dispositivos detectados y administra la blacklist.',
        stack: ['Python', 'dnslib', 'SQLite', 'Next.js'],
      },
      en: {
        title: 'MyDNS',
        tagline: 'Local DNS to monitor network traffic and block domains',
        description:
          'Local system to monitor DNS traffic on the network and restrict access to websites by domain. Devices on the network query this DNS: if the domain is on the blacklist it answers 0.0.0.0 and the site is blocked; otherwise it forwards the query to an external DNS. A Python server logs queries to SQLite and a Next.js dashboard shows the traffic and detected devices and manages the blacklist.',
        stack: ['Python', 'dnslib', 'SQLite', 'Next.js'],
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
