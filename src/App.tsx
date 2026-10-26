import { About } from './components/About';
import { Contact } from './components/Contact';
import { Cursor } from './components/Cursor';
import { Experience } from './components/Experience';
import { Hero } from './components/Hero';
import { Loader } from './components/Loader';
import { Navbar } from './components/Navbar';
import { Projects } from './components/Projects';
import { StackMarquee } from './components/StackMarquee';
import { useSmoothScroll } from './hooks/useSmoothScroll';
import { useTheme } from './hooks/useTheme';

function App() {
  const { theme, toggleTheme } = useTheme();

  useSmoothScroll();

  return (
    <div className="min-h-screen overflow-x-clip bg-[var(--color-bg)] text-[var(--color-text)]">
      <Loader />
      <Cursor />
      <Navbar theme={theme} onToggleTheme={toggleTheme} />
      <main>
        <Hero />
        <About />
        <Projects />
        <StackMarquee />
        <Experience />
        <Contact theme={theme} onToggleTheme={toggleTheme} />
      </main>
    </div>
  );
}

export default App;
