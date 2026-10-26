import gsap from 'gsap';
import { ScrollTrigger } from 'gsap/ScrollTrigger';
import { SplitText } from 'gsap/SplitText';
import type Lenis from 'lenis';

gsap.registerPlugin(ScrollTrigger, SplitText);

let lenis: Lenis | null = null;

export const setLenis = (instance: Lenis | null) => {
  lenis = instance;
};

export const getLenis = () => lenis;

export const prefersReducedMotion = () =>
  window.matchMedia('(prefers-reduced-motion: reduce)').matches;

export const scrollToHash = (hash: string) => {
  const target = document.querySelector<HTMLElement>(hash);

  if (!target) {
    return;
  }

  if (lenis) {
    lenis.scrollTo(target, { offset: 0 });
  } else {
    target.scrollIntoView();
  }
};

export { gsap, ScrollTrigger, SplitText };
