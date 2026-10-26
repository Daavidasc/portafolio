import { asset } from '../lib/asset';

export const profileEs = {
  name: 'David Serrudo',
  navItems: [
    { label: 'Inicio', href: '#inicio' },
    { label: 'Proyectos', href: '#proyectos' },
    { label: 'Experiencia', href: '#experiencia' },
    { label: 'Contacto', href: '#contacto' },
  ],
  hero: {
    eyebrow: 'Ciencias de la Computación',
    tagline:
      'Construyo software e IA que funcionan de los datos al despliegue, e investigo LLMs y QML.',
    scrollCta: 'Ver proyectos',
  },
  menu: {
    tagline: 'ML · Data · Software, Lima',
  },
  footer: {
    phraseLead: 'Siempre',
    phraseAccent: 'entrenando.',
    copyright: '© 2026 David Serrudo',
  },
  stack: [
    'Machine Learning',
    'Reinforcement Learning',
    'Computer Vision',
    'LLMs',
    'Data Science',
    'Python',
    'Go',
    'C++',
    'SQL',
    'PyTorch',
    'Docker',
    'Full Stack',
    'Concurrencia',
  ],
  about: {
    label: 'sobre mí',
    titleFirst: 'ABOUT',
    titleSecond: 'ME',
    // Las palabras entre ** ** van en negrita.
    paragraphs: [
      'Me gusta crear soluciones para **problemas reales**. Que sean fáciles de usar, tengan identidad propia y resuelvan lo que de verdad hace falta, pero que también estén bien hechas por dentro, con una base sólida y una **arquitectura** que pueda crecer y cambiar sin romperse.',
      'Me interesa especialmente la **integración de IA**: aprovechar sus capacidades dentro de aplicaciones y sistemas reales, conectar modelos con el resto de la solución y construir soluciones agénticas que funcionen de forma confiable. Eso incluye diseñar la arquitectura y el harness adecuados para cada caso.',
      'Actualmente colaboro en una investigación de NLP con profesores de CENIA, en Chile. Estudiamos cómo se comportan los LLMs y si sus respuestas cambian según la identidad que perciben del usuario, para detectar **sesgos** que no siempre son evidentes. En paralelo, investigo **computación cuántica**: cómo funciona hoy, qué brechas y dificultades enfrenta frente a la computación clásica y cómo se aplica en quantum machine learning, en particular cómo el ruido cuántico altera la distribución de resultados.',
    ],
    signature: 'David Serrudo',
    image: {
      src: asset('/images/FotoPerfil.jpeg'),
      alt: 'Fotografía de David Serrudo, estudiante de Ciencias de la Computación',
    },
  },
  projects: {
    range: '2025 - 2026',
    summary:
      'Selección de proyectos y desarrollos técnicos basados en experiencia académica, hackathons y práctica profesional.',
  },
  contact: {
    label: 'contacto',
    summary:
      'Abierto a internships, colaboraciones de investigación y proyectos en IA.',
    channels: [
      {
        label: 'Email',
        value: 'dserrudocaina@gmail.com',
        href: 'mailto:dserrudocaina@gmail.com',
      },
      {
        label: 'GitHub',
        value: 'github.com/Daavidasc',
        href: 'https://github.com/Daavidasc',
      },
      {
        label: 'LinkedIn',
        value: 'linkedin.com/in/david-serrudo-4782bb274',
        href: 'https://www.linkedin.com/in/david-serrudo-4782bb274/',
      },
    ],
    resources: [
      {
        label: 'CV',
        value: 'Descargar CV',
        // TODO: solo existe el CV en español; agregar uno en inglés para la versión EN.
        href: asset('/cv/CV_David_Serrudo_ES_Investigacion.pdf'),
      },
    ],
  },
};

export type Profile = typeof profileEs;
