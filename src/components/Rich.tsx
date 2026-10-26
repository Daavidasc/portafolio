import type { ReactNode } from 'react';

type RichProps = {
  text: string;
};

// Convierte **palabra** en <strong>. La puntuación pegada a una negrita se mantiene unida a ella
// para que nunca quede sola al inicio de una línea.
export const Rich = ({ text }: RichProps) => {
  const nodes: ReactNode[] = [];
  const pattern = /\*\*(.+?)\*\*([.,;:!?)]*)/g;
  let last = 0;
  let match = pattern.exec(text);

  while (match) {
    if (match.index > last) {
      nodes.push(text.slice(last, match.index));
    }

    nodes.push(
      match[2] ? (
        <span className="nowrap" key={match.index}>
          <strong>{match[1]}</strong>
          {match[2]}
        </span>
      ) : (
        <strong key={match.index}>{match[1]}</strong>
      ),
    );
    last = match.index + match[0].length;
    match = pattern.exec(text);
  }

  if (last < text.length) {
    nodes.push(text.slice(last));
  }

  return <>{nodes}</>;
};
