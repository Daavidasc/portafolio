import { useInView } from '../hooks/useInView';
import { useLang } from '../i18n/useLang';

type SignatureProps = {
  name: string;
};

// Firma animada: cada letra se dibuja con su contorno y luego se rellena; después, el trazo inferior.
export const Signature = ({ name }: SignatureProps) => {
  const { ui } = useLang();
  const { ref, inView } = useInView<HTMLDivElement>();

  return (
    <div className={`signature${inView ? ' is-drawn' : ''}`} ref={ref}>
      <svg
        aria-label={`${ui.signatureOf} ${name}`}
        role="img"
        viewBox="0 0 560 130"
      >
        <text aria-hidden="true" x="8" y="86">
          {Array.from(name).map((letter, index) => (
            <tspan key={`${letter}-${index}`}>{letter}</tspan>
          ))}
        </text>
        <path
          aria-hidden="true"
          d="M10 108C120 96 260 116 430 100S520 98 548 92"
          pathLength={1}
        />
      </svg>
    </div>
  );
};
