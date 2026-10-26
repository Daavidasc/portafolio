const blobs = [
  { x: 0.2, y: 0.3, r: 90 },
  { x: 0.75, y: 0.55, r: 140 },
  { x: 0.5, y: 0.85, r: 70 },
];

export const Blobs = () => (
  <svg className="blobs" aria-hidden="true">
    <defs>
      <filter id="goo">
        <feGaussianBlur in="SourceGraphic" stdDeviation="18" result="blur" />
        <feColorMatrix
          in="blur"
          values="1 0 0 0 0  0 1 0 0 0  0 0 1 0 0  0 0 0 18 -8"
        />
      </filter>
    </defs>
    <g filter="url(#goo)">
      {blobs.map((blob) => (
        <circle
          cx={`${blob.x * 100}%`}
          cy={`${blob.y * 100}%`}
          fill="var(--color-accent)"
          key={`${blob.x}-${blob.y}`}
          r={blob.r}
        />
      ))}
    </g>
  </svg>
);
