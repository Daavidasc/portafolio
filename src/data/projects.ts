import type { Lang } from '../i18n/types';
import { asset } from '../lib/asset';

export type Project = {
  slug: string;
  title: string;
  year: string;
  tagline: string;
  description: string;
  /** Invitación a probarlo (demo, jugar aquí o clonar el repo); va tras la descripción. */
  cta?: string;
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
  /** Fondo de la tarjeta: 'cream' (crema de ViviEstu), 'forest' (verde oscuro de Greenlight) 'white' (blanco de MyDNS), 'night' (casi negro de KeplerX) o 'mist' (gris azulado claro de Urpi), para logos. */
  tone?: 'cream' | 'forest' | 'white' | 'night' | 'mist';
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
  cta?: string;
  stack: string[];
  controls?: string[];
};

type ProjectBase = Omit<Project, keyof ProjectText | 'playConfig'> & {
  playConfig?: { path: string };
  text: Record<Lang, ProjectText>;
};

// Años y métricas marcados con TODO: pendientes de confirmar. No inventar cifras.
const projectBase: ProjectBase[] = [
  // Orden: más recientes primero (año y, dentro del año, fecha de creación del repositorio).
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
    // Descripción y stack tomados del README y el código del repositorio.
    links: {
      github: 'https://github.com/Daavidasc/Greenlight',
      demo: 'https://agentic-preproduction-433256380169.us-central1.run.app/',
    },
    text: {
      es: {
        title: 'Greenlight',
        tagline: 'El asistente de producción que un cineasta independiente no tiene.',
        description:
          'Subes un guion en PDF y Greenlight devuelve, en minutos, el desglose de cada escena (locación, INT/EXT, día o noche, personajes, utilería y vestuario), un storyboard con concept art por escena, un presupuesto con tarifas reales de mercado y un plan de rodaje que agrupa las escenas por locación. Un agente de Google ADK orquesta Gemini 2.5 en Vertex AI con salidas estructuradas en Pydantic, y la Parallel Search API busca precios de alquiler y de crew citando sus fuentes. El backend en FastAPI y el frontend en React y TypeScript están desplegados en Cloud Run. Pensado para productores de Chile y Latinoamérica sin acceso a herramientas de estudio; hecho para el hackathon Agentic Cinema de Google Cloud, categoría Parallel.',
        cta: 'Pruébalo en la demo con tu propio guion en PDF. La versión pública tiene un límite de uso diario; si clonas el repositorio y usas tus credenciales de Google Cloud, corre sin límite.',
        stack: ['Gemini', 'Google ADK', 'FastAPI', 'React'],
      },
      en: {
        title: 'Greenlight',
        tagline: 'The production assistant independent filmmakers never had.',
        description:
          'Upload a PDF script and Greenlight returns, in minutes, a breakdown of every scene (location, INT/EXT, day or night, characters, props and wardrobe), a storyboard with concept art for each scene, a budget built on real market rates and a shooting schedule that groups scenes by location. A Google ADK agent orchestrates Gemini 2.5 on Vertex AI with Pydantic structured outputs, and the Parallel Search API looks up rental and crew prices and cites its sources. The FastAPI backend and the React and TypeScript frontend run on Cloud Run. Designed for producers in Chile and Latin America without access to studio tools; built for the Google Cloud Agentic Cinema hackathon, Parallel track.',
        cta: 'Try it in the demo with your own PDF script. The public version has a daily usage cap; clone the repository and use your own Google Cloud credentials to run it without limits.',
        stack: ['Gemini', 'Google ADK', 'FastAPI', 'React'],
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
    // Descripción y stack tomados del README y el código del repositorio.
    links: { github: 'https://github.com/Daavidasc/MyDNS' },
    text: {
      es: {
        title: 'MyDNS',
        tagline: 'Un DNS propio para ver qué consulta cada dispositivo de la red y bloquear sitios.',
        description:
          'Servidor DNS local que se configura en el router para que toda la red pase por él. Cada consulta queda registrada: si el dominio está en la blacklist responde 0.0.0.0 y la página no carga; si no, la reenvía a un DNS externo. El núcleo está escrito en Python con dnslib, escucha en el puerto 53 y guarda el historial en SQLite; un panel en Next.js y TypeScript lee esa misma base para mostrar el tráfico en vivo, los dispositivos detectados y administrar los dominios bloqueados.',
        cta: 'Clona el repositorio y pruébalo en tu propia red: inicia el servidor DNS y el panel, y pon la IP de tu computadora como DNS principal en el router. En Windows, ejecútalo como administrador para poder usar el puerto 53.',
        stack: ['Python', 'SQLite', 'Next.js'],
      },
      en: {
        title: 'MyDNS',
        tagline: 'A home-made DNS to see what every device on the network looks up, and block sites.',
        description:
          'Local DNS server that is set on the router so the whole network goes through it. Every query is logged: if the domain is on the blacklist it answers 0.0.0.0 and the page does not load; otherwise it forwards the query to an external DNS. The core is written in Python with dnslib, listens on port 53 and stores the history in SQLite; a Next.js and TypeScript dashboard reads the same database to show live traffic and detected devices and to manage blocked domains.',
        cta: 'Clone the repository and try it on your own network: start the DNS server and the dashboard, then set your computer’s IP as the primary DNS on your router. On Windows, run it as administrator so it can use port 53.',
        stack: ['Python', 'SQLite', 'Next.js'],
      },
    },
  },
  {
    slug: 'urpi',
    year: '2026',
    metrics: [],
    // Portada: el favicon (paloma, PNG transparente) sobre gris azulado claro, del mismo tono que la marca.
    image: asset('/projects/urpi/logo.png'),
    tone: 'mist',
    // Al pasar el mouse: la lista de productos en tema claro (captura de David), recortada desde la izquierda
    // para que se vean el título y los nombres.
    imageHover: asset('/projects/urpi/hover.png'),
    hoverFit: 'cover',
    hoverAlign: 'start',
    // Galería a 1535×927 (proporción del marco): dashboard, la conversación real con Pid por WhatsApp
    // (centrada sobre negro) e insights.
    gallery: [
      asset('/projects/urpi/dashboard.png'),
      asset('/projects/urpi/whatsapp.png'),
      asset('/projects/urpi/insights.png'),
    ],
    // Descripción y stack tomados del README y el código de los dos repositorios.
    links: {
      github: 'https://github.com/Daavidasc/Urpi-Front',
      githubBack: 'https://github.com/Daavidasc/Urpi-Back',
      demo: 'https://urpi-front.vercel.app',
    },
    text: {
      es: {
        title: 'Urpi',
        tagline: 'Inventario para pequeños negocios que se maneja conversando, incluso por WhatsApp.',
        description:
          'Sistema de inventario para pymes: registra productos con su proveedor, lote de compra y stock mínimo, lleva las entradas y salidas, y un dashboard muestra el valor del inventario, el flujo de los últimos días y las alertas de stock bajo, con recomendaciones generadas a partir de los datos. Su asistente de IA usa Claude con herramientas para consultar el inventario, decir qué reponer y cuánto pedir, y registrar movimientos o productos nuevos en lenguaje natural, desde la web o por WhatsApp con Twilio, donde también entiende audios transcritos con Whisper. El backend es una API REST en Express y TypeScript con PostgreSQL y Drizzle, y el frontend está hecho en React con Tailwind.',
        cta: 'Pruébalo en la web: revisa el dashboard y los productos, y pregúntale al asistente qué productos tienen stock bajo o pídele que registre una entrada.',
        stack: ['React', 'Express', 'PostgreSQL', 'Claude'],
      },
      en: {
        title: 'Urpi',
        tagline: 'Inventory for small businesses that you run by chatting, even on WhatsApp.',
        description:
          'Inventory system for small businesses: it records products with their supplier, purchase lot and minimum stock, tracks stock in and out, and a dashboard shows inventory value, the flow of recent days and low-stock alerts, with recommendations generated from the data. Its AI assistant uses Claude with tools to query the inventory, say what to restock and how much to order, and log movements or new products in natural language, from the web or over WhatsApp with Twilio, where it also understands voice notes transcribed with Whisper. The backend is an Express and TypeScript REST API with PostgreSQL and Drizzle, and the frontend is built with React and Tailwind.',
        cta: 'Try it on the web: browse the dashboard and products, and ask the assistant which products are running low or have it log a stock entry.',
        stack: ['React', 'Express', 'PostgreSQL', 'Claude'],
      },
    },
  },
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
        tagline: 'La cámara lee tu cara y tus manos, y responde con una reacción.',
        description:
          'Aplicación de visión artificial que analiza la webcam en tiempo real. Clasifica la emoción del rostro (feliz, triste, sorprendido o neutral) con un modelo de Deep Learning sobre TensorFlow, usa los landmarks de MediaPipe para detectar si miras de reojo y reconoce gestos de la mano como pulgar arriba, pulgar abajo o la mano en el mentón «pensando». Según lo que detecta, muestra junto al video la imagen de reacción que corresponde y las probabilidades de cada emoción.',
        cta: 'Clona el repositorio, instala las dependencias y ejecútalo con tu webcam: sonríe, haz un pulgar arriba o lleva la mano al mentón y mira cómo responde.',
        stack: ['Python', 'OpenCV', 'MediaPipe', 'TensorFlow'],
      },
      en: {
        title: 'EmotionGestureApp',
        tagline: 'The camera reads your face and hands, and answers with a reaction.',
        description:
          'Computer vision app that analyzes the webcam in real time. It classifies the facial emotion (happy, sad, surprised or neutral) with a TensorFlow deep learning model, uses MediaPipe landmarks to detect side-eye glances, and recognizes hand gestures such as thumbs up, thumbs down or a hand on the chin “thinking”. Depending on what it sees, it shows the matching reaction image next to the video, along with the probability of each emotion.',
        cta: 'Clone the repository, install the dependencies and run it with your webcam: smile, give a thumbs up or rest your hand on your chin and watch it react.',
        stack: ['Python', 'OpenCV', 'MediaPipe', 'TensorFlow'],
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
    links: {
      github: 'https://github.com/Daavidasc/KeplerX',
      demo: 'https://keplerx-production.up.railway.app',
    },
    text: {
      es: {
        title: 'KeplerX',
        tagline: 'Machine Learning para encontrar exoplanetas en los datos de la NASA.',
        description:
          'Plataforma web que estima si una señal astronómica corresponde a un exoplaneta. Hecha para el reto «A World Away» del NASA Space Apps Challenge 2025: el análisis exploratorio y el entrenamiento se hicieron en Jupyter con Pandas sobre los catálogos abiertos de las misiones Kepler, K2 y TESS, y el modelo final es un Gradient Boosting de Scikit-learn. Una API en FastAPI sirve las predicciones y una interfaz en JavaScript permite ingresar los parámetros del tránsito y ver el resultado.',
        cta: 'Pruébalo en la web: carga uno de los ejemplos o ingresa los cuatro datos de un candidato y mira si el modelo lo clasifica como exoplaneta.',
        stack: ['Python', 'Scikit-learn', 'FastAPI'],
      },
      en: {
        title: 'KeplerX',
        tagline: 'Machine Learning to find exoplanets in NASA data.',
        description:
          'Web platform that estimates whether an astronomical signal is an exoplanet. Built for the “A World Away” challenge of the NASA Space Apps Challenge 2025: exploratory analysis and training were done in Jupyter with Pandas on the open catalogs of the Kepler, K2 and TESS missions, and the final model is a Scikit-learn Gradient Boosting classifier. A FastAPI service serves the predictions and a JavaScript interface lets you enter the transit parameters and see the result.',
        cta: 'Try it on the web: load one of the examples or enter the four values of a candidate and see whether the model classifies it as an exoplanet.',
        stack: ['Python', 'Scikit-learn', 'FastAPI'],
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
        tagline: 'Vivienda universitaria segura, sin buscar a ciegas.',
        description:
          'Plataforma web que conecta a estudiantes universitarios con arrendadores de habitaciones y departamentos cerca de su centro de estudios. Los estudiantes filtran por ubicación, precio y servicios incluidos (luz, agua, internet), y los arrendadores publican y editan sus anuncios desde un perfil propio. El frontend está hecho en Angular con TypeScript y RxJS, y se apoya en una API REST en Spring Boot con autenticación JWT y datos en PostgreSQL.',
        cta: 'Pruébalo en la web: explora los anuncios y filtra por ubicación, precio y servicios incluidos.',
        stack: ['Angular', 'Spring Boot', 'PostgreSQL'],
      },
      en: {
        title: 'ViviEstu',
        tagline: 'Safe student housing, without searching blind.',
        description:
          'Web platform that connects university students with landlords offering rooms and apartments near their campus. Students filter by location, price and included utilities (electricity, water, internet), and landlords publish and edit their listings from their own profile. The frontend is built with Angular, TypeScript and RxJS, backed by a Spring Boot REST API with JWT authentication and PostgreSQL storage.',
        cta: 'Try it on the web: browse the listings and filter by location, price and included utilities.',
        stack: ['Angular', 'Spring Boot', 'PostgreSQL'],
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
        tagline: 'Pelea por el podio de los Panamericanos, turno a turno, en la consola.',
        description:
          'Juego de pelea por turnos escrito en C++ y dibujado con caracteres de bloque y colores ANSI de 256 tonos. Eliges uno de diez países, tu karateka viste los colores de su bandera y avanzas de cuartos de final a la final. En cada turno atacas (puñete o patada, con distinto daño y empuje) o te defiendes, cuidando la resistencia: tres penalidades te descalifican y los jueces puntúan cada combate. Portado a WebAssembly con Emscripten para jugarse aquí mismo en una terminal xterm.js.',
        cta: 'Juégalo aquí mismo en el navegador con el botón «Jugar», o clona el repositorio para compilar la versión original de consola en Windows.',
        stack: ['C++'],
        controls: [
          'Menú y país: escribe el número y pulsa Enter.',
          'En combate: pulsa 1 o 2 (atacar o defenderse, puñete o patada).',
          'Cualquier tecla para continuar.',
        ],
      },
      en: {
        title: 'Karate Panamericano',
        tagline: 'Fight for the Pan American podium, turn by turn, on the console.',
        description:
          'Turn-based fighting game written in C++ and drawn with block characters and 256-color ANSI. You pick one of ten countries, your karateka wears its flag colors, and you advance from the quarterfinals to the final. Each turn you attack (punch or kick, with different damage and push) or defend while managing stamina: three penalties disqualify you and judges score every bout. Ported to WebAssembly with Emscripten so it can be played right here in an xterm.js terminal.',
        cta: 'Play it right here in the browser with the “Play” button, or clone the repository to build the original Windows console version.',
        stack: ['C++'],
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
        tagline: 'Duelo de cartas para dos jugadores en la misma pantalla.',
        description:
          'Juego de cartas por rondas escrito en C++/CLI para la consola de Windows, con las cartas dibujadas carácter por carácter y animación al repartir. Cada jugador recibe 8 cartas; en cada ronda la computadora voltea una al azar y suma un punto quien tenga ese valor en su mano y lo descarte. Se eligen de 5 a 10 rondas y gana quien acumule más puntos. Portado a WebAssembly con Emscripten para jugarse en el navegador.',
        cta: 'Juégalo aquí mismo en el navegador con el botón «Jugar», o clona el repositorio para compilar la versión original de consola en Windows.',
        stack: ['C++'],
        controls: [
          'Menú: pulsa la letra de la opción (I, J, C o S).',
          'Rondas, nombres y carta a eliminar: escribe y pulsa Enter (0 para pasar).',
        ],
      },
      en: {
        title: 'Ouite',
        tagline: 'A two-player card duel on the same screen.',
        description:
          'Round-based card game written in C++/CLI for the Windows console, with cards drawn character by character and a dealing animation. Each player gets 8 cards; every round the computer flips a random one, and whoever holds that value and discards it scores a point. You choose 5 to 10 rounds and the highest score wins. Ported to WebAssembly with Emscripten to be played in the browser.',
        cta: 'Play it right here in the browser with the “Play” button, or clone the repository to build the original Windows console version.',
        stack: ['C++'],
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
        tagline: 'Aterriza en Marte entre meteoritos y sal a recoger cristales.',
        description:
          'Arcade de consola en C++ hecho en una game jam, con dos niveles. Primero desciendes 700 km hacia Marte esquivando meteoritos, con cinco vidas y un panel de altura y tiempo de llegada; luego conduces un rover por el terreno para recoger los cinco cristales y volver a la nave. Se juega con las flechas, tiene un modo automático y una simulación en la que la computadora juega sola. Portado a WebAssembly con Emscripten.',
        cta: 'Juégalo aquí mismo en el navegador con el botón «Jugar» (o mira la simulación), o clona el repositorio para compilar la versión original de consola en Windows.',
        stack: ['C++'],
        controls: [
          'Menú: escribe el número y pulsa Enter.',
          'Flechas para moverte; A activa o desactiva el modo automático.',
        ],
      },
      en: {
        title: 'Space Mission',
        tagline: 'Land on Mars through a meteor shower, then go collect crystals.',
        description:
          'A two-level console arcade game in C++ made at a game jam. First you descend 700 km toward Mars dodging meteorites, with five lives and a panel showing altitude and arrival time; then you drive a rover across the terrain to collect five crystals and return to the ship. It is played with the arrow keys, with an automatic mode and a simulation where the computer plays by itself. Ported to WebAssembly with Emscripten.',
        cta: 'Play it right here in the browser with the “Play” button (or watch the simulation), or clone the repository to build the original Windows console version.',
        stack: ['C++'],
        controls: [
          'Menu: type the number and press Enter.',
          'Arrow keys to move; A toggles automatic mode.',
        ],
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
