import type { Lang } from '../i18n/types';

// Fuente única de la línea de tiempo de experiencia (ES / EN).
// El orden del arreglo es el orden de aparición (lo más reciente arriba).
// Las descripciones vacías ('') no se muestran: son las pendientes de redactar.

type Localized<T> = Record<Lang, T>;

type ExperienceBase = {
  id: string;
  /** Año de inicio: se muestra grande a la izquierda y define el rango del encabezado. Opcional si aún no se conoce. */
  startYear?: number;
  /** Fecha de inicio ISO para <time datetime> ('' si aún no se conoce: entonces no se muestra la fecha). */
  start: string;
  /** Etiqueta de tipo sobre el rol (p. ej. Investigación). Opcional. */
  kind?: Localized<string>;
  /** Entrada vigente: lleva el pulso y la etiqueta "Actualmente". */
  current?: boolean;
  /** Texto de fechas ('' = no se muestra). */
  dates: Localized<string>;
  role: Localized<string>;
  organization: Localized<string>;
  location?: Localized<string>;
  focus: Localized<string[]>;
  description: Localized<string>;
  /** Logros en viñetas (opcional). Si falta, no se muestra nada. */
  points?: Localized<string[]>;
};

export type ExperienceEntry = {
  id: string;
  startYear?: number;
  start: string;
  kind?: string;
  current: boolean;
  dates: string;
  role: string;
  organization: string;
  location?: string;
  focus: string[];
  description: string;
  points: string[];
};

const entries: ExperienceBase[] = [
  {
    id: 'cenia-research',
    // TODO: FECHA DE INICIO PENDIENTE. Al conocerla, completar startYear, start ('AAAA-MM') y dates
    // (ES: 'Mmm AAAA – Actualidad' / EN: 'Mmm AAAA – Present'). Mientras tanto no se muestra año ni fecha.
    start: '',
    current: true,
    kind: { es: 'Investigación', en: 'Research' },
    dates: { es: '', en: '' },
    role: { es: 'Asistente de Investigación', en: 'Research Assistant' },
    organization: {
      es: 'CENIA · Universidad de Chile',
      en: 'CENIA · Universidad de Chile',
    },
    focus: {
      es: ['Python', 'NLP', 'LLM-as-judge', 'Interpretabilidad'],
      en: ['Python', 'NLP', 'LLM-as-judge', 'Interpretability'],
    },
    description: {
      es: 'Investigación de sesgos en LLMs según identidad percibida, bajo la supervisión del profesor Andrés Abeliuk.',
      en: 'Research on LLM bias based on perceived identity, under the supervision of Professor Andrés Abeliuk.',
    },
    points: {
      es: [
        'Desarrollé un pipeline que recorre WildChat-1M en streaming y filtra prompts reales en español latinoamericano, para auditar cómo los LLMs tratan a los usuarios según señales demográficas percibidas.',
        'Diseñé la clasificación con un LLM como juez en dos etapas, la calibré con el etiquetado manual del equipo y la ejecuto por lotes para mantener los costos bajos.',
        'Ahora exploro el sesgo según la formalidad del mensaje (formal frente a informal), con técnicas de interpretabilidad mecanicista como probing, que permiten encontrar las activaciones que representan un concepto.',
      ],
      en: [
        'I developed a pipeline that streams WildChat-1M and filters real Latin American Spanish prompts, to audit how LLMs treat users based on perceived demographic signals.',
        "I designed the classification as a two-stage LLM-as-judge, calibrated it against the team's manual labels, and run it in batches to keep costs low.",
        "I'm now exploring bias by message formality (formal vs. informal), using mechanistic interpretability techniques such as probing, which help find the activations that represent a concept.",
      ],
    },
  },
  {
    id: 'ejercito-fullstack',
    startYear: 2026,
    start: '2026-03',
    dates: { es: 'Mar 2026 – Jul 2026', en: 'Mar 2026 – Jul 2026' },
    role: {
      es: 'Practicante de Desarrollo Full Stack',
      en: 'Full Stack Development Intern',
    },
    organization: { es: 'Ejército del Perú', en: 'Ejército del Perú' },
    location: { es: 'Lima, Perú', en: 'Lima, Peru' },
    focus: {
      es: ['Java', 'Spring Boot', 'Angular', 'JavaScript', 'Postman', 'Oracle DB', 'SQL'],
      en: ['Java', 'Spring Boot', 'Angular', 'JavaScript', 'Postman', 'Oracle DB', 'SQL'],
    },
    description: {
      es: 'Sistemas internos, datos relacionales y documentación técnica.',
      en: 'Internal systems, relational data and technical documentation.',
    },
    points: {
      es: [
        'Desarrollé módulos internos integrando frontend, backend y bases de datos relacionales.',
        'Diseñé tablas, relaciones, catálogos y flujos de información para organizar datos operativos.',
        'Apoyé la documentación técnica, la validación de requerimientos y el control de versiones.',
        'Colaboré en soluciones considerando seguridad, trazabilidad, control de accesos y consistencia de información.',
      ],
      en: [
        'I developed internal modules integrating frontend, backend and relational databases.',
        'I designed tables, relationships, catalogs and information flows to organize operational data.',
        'I supported technical documentation, requirements validation and version control.',
        'I contributed to solutions that consider security, traceability, access control and data consistency.',
      ],
    },
  },
  {
    id: 'ayudantia-upc',
    startYear: 2024,
    start: '2024-03',
    dates: { es: 'Mar 2024 – Ago 2024', en: 'Mar 2024 – Aug 2024' },
    role: { es: 'Asistente de cátedra', en: 'Teaching Assistant' },
    organization: {
      es: 'Universidad Peruana de Ciencias Aplicadas',
      en: 'Universidad Peruana de Ciencias Aplicadas',
    },
    location: { es: 'Lima, Perú', en: 'Lima, Peru' },
    focus: { es: ['C++'], en: ['C++'] },
    description: {
      es: 'Tutoría personalizada y refuerzo de fundamentos de programación.',
      en: 'Personalized tutoring and reinforcement of programming fundamentals.',
    },
    points: {
      es: [
        'Impartí sesiones de tutoría para reforzar conocimientos de programación.',
        'Apliqué técnicas de enseñanza adaptativa para simplificar conceptos complejos.',
        'Promoví buenas prácticas de programación y claridad en la resolución de problemas.',
      ],
      en: [
        'Led tutoring sessions to reinforce programming knowledge.',
        'Applied adaptive teaching techniques to simplify complex concepts.',
        'Promoted good programming practices and clarity in problem solving.',
      ],
    },
  },
  {
    id: 'programacion-competitiva',
    startYear: 2022,
    start: '2022',
    dates: { es: '2022 – 2024', en: '2022 – 2024' },
    role: {
      es: 'Participante Grupo de Programación Competitiva',
      en: 'Member, Competitive Programming Group',
    },
    organization: {
      es: 'Universidad Peruana de Ciencias Aplicadas',
      en: 'Universidad Peruana de Ciencias Aplicadas',
    },
    location: { es: 'Lima, Perú', en: 'Lima, Peru' },
    focus: { es: ['C++', 'Python'], en: ['C++', 'Python'] },
    description: {
      es: 'Entrenamiento en algoritmos, estructuras de datos y resolución de problemas bajo restricciones de tiempo.',
      en: 'Training in algorithms, data structures and problem solving under time constraints.',
    },
    points: {
      es: [
        'Resolví problemas algorítmicos utilizando C++ y Python.',
        'Apliqué estructuras de datos y técnicas de optimización en competencias de programación.',
        'Fortalecí el pensamiento algorítmico, la resolución de problemas y el trabajo colaborativo.',
      ],
      en: [
        'Solved algorithmic problems using C++ and Python.',
        'Applied data structures and optimization techniques in programming contests.',
        'Strengthened algorithmic thinking, problem solving and teamwork.',
      ],
    },
  },
];

// Orden: las entradas actuales primero y luego por fecha de inicio (la más reciente arriba).
const byStart = (a: ExperienceBase, b: ExperienceBase) => {
  if (Boolean(a.current) !== Boolean(b.current)) {
    return a.current ? -1 : 1;
  }

  return b.start.localeCompare(a.start);
};

export const getExperience = (lang: Lang): ExperienceEntry[] =>
  [...entries].sort(byStart).map((entry) => ({
    id: entry.id,
    startYear: entry.startYear,
    start: entry.start,
    kind: entry.kind?.[lang],
    current: Boolean(entry.current),
    dates: entry.dates[lang],
    role: entry.role[lang],
    organization: entry.organization[lang],
    location: entry.location?.[lang],
    focus: entry.focus[lang],
    description: entry.description[lang],
    points: entry.points?.[lang] ?? [],
  }));

/** Rango del encabezado: año de la entrada más antigua hasta el año actual. */
export const getExperienceRange = () => {
  const first = Math.min(
    ...entries.map((entry) => entry.startYear ?? Infinity),
  );

  return `${first}–${new Date().getFullYear()}`;
};
