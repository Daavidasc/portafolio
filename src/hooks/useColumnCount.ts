import { useEffect, useState } from 'react';

const getColumnCount = () => {
  if (window.matchMedia('(min-width: 1200px)').matches) {
    return 4;
  }

  return window.matchMedia('(min-width: 768px)').matches ? 2 : 1;
};

export const useColumnCount = () => {
  const [columnCount, setColumnCount] = useState(getColumnCount);

  useEffect(() => {
    const update = () => setColumnCount(getColumnCount());
    const queries = [
      window.matchMedia('(min-width: 1200px)'),
      window.matchMedia('(min-width: 768px)'),
    ];

    queries.forEach((query) => query.addEventListener('change', update));

    return () =>
      queries.forEach((query) => query.removeEventListener('change', update));
  }, []);

  return columnCount;
};
