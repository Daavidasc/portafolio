import type { Profile } from './profile.es';
import { asset } from '../lib/asset';

export const profileEn: Profile = {
  name: 'David Serrudo',
  navItems: [
    { label: 'Home', href: '#inicio' },
    { label: 'Projects', href: '#proyectos' },
    { label: 'Experience', href: '#experiencia' },
    { label: 'Contact', href: '#contacto' },
  ],
  hero: {
    eyebrow: 'Computer Science',
    tagline:
      'I build software and AI that work from data to deployment, and research LLMs and QML.',
    scrollCta: 'View projects',
  },
  menu: {
    tagline: 'ML · Data · Software, Lima',
  },
  footer: {
    phraseLead: 'Always',
    phraseAccent: 'training.',
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
    'Concurrency',
  ],
  about: {
    label: 'about me',
    titleFirst: 'ABOUT',
    titleSecond: 'ME',
    // Las palabras entre ** ** van en negrita.
    paragraphs: [
      'I like building solutions for **real problems**. Easy to use, with their own identity, and focused on what’s actually needed, but also well built on the inside, with a solid foundation and an **architecture** that can grow and change without breaking.',
      'I’m especially interested in **AI integration**: leveraging its capabilities inside real applications and systems, connecting models with the rest of the solution, and building agentic solutions that work reliably. That includes designing the right architecture and harness for each case.',
      'I’m currently collaborating on NLP research with professors at CENIA in Chile. We study how LLMs behave and whether their responses change based on the user’s perceived identity, to uncover **biases** that aren’t always obvious. In parallel, I research **quantum computing**: how it works today, the gaps and challenges it faces compared to classical computing, and how it applies to quantum machine learning, especially how quantum noise shifts the distribution of outcomes.',
    ],
    signature: 'David Serrudo',
    image: {
      src: asset('/images/FotoPerfil.jpeg'),
      alt: 'Photo of David Serrudo, Computer Science student',
    },
  },
  projects: {
    range: '2025 - 2026',
    summary:
      'A selection of projects and technical work from academic experience, hackathons and professional practice.',
  },
  contact: {
    label: 'contact',
    summary: 'Open to internships, research collaborations and AI projects.',
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
        value: 'Download CV',
        // TODO: el CV disponible está en español; agregar uno en inglés.
        href: asset('/cv/CV_David_Serrudo_ES_Investigacion.pdf'),
      },
    ],
  },
};
