import Lenis from 'lenis';
import { useEffect } from 'react';
import {
  gsap,
  prefersReducedMotion,
  ScrollTrigger,
  setLenis,
} from '../lib/motion';

export const useSmoothScroll = () => {
  useEffect(() => {
    if (prefersReducedMotion()) {
      return;
    }

    const lenis = new Lenis();
    const update = (time: number) => lenis.raf(time * 1000);

    setLenis(lenis);
    lenis.on('scroll', ScrollTrigger.update);
    gsap.ticker.add(update);
    gsap.ticker.lagSmoothing(0);

    return () => {
      gsap.ticker.remove(update);
      lenis.destroy();
      setLenis(null);
    };
  }, []);
};
