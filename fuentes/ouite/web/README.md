# Ouite en el navegador

Versión web del juego de cartas de consola (C++/CLI, consola de Windows). El original (`../ouite.cpp`) no se
modifica: `portar.py` genera una copia portable (`main_web.cpp`) y `compat.h` simula `System::Console`,
`conio.h` (`kbhit`/`getch`), `windows.h` (`SetConsoleTextAttribute`), `_sleep`, `system("cls")`,
`system("pause>0")` y `cin >> n` / `cin >> palabra` (`readInt()` / `readWord()`).

- Los atributos de color de Windows (fondo*16 + texto) se traducen a colores ANSI de 256 y la página usa la
  paleta de la consola de Windows.
- Los códigos 3-6 (palos de las cartas) se dibujan como ♥ ♦ ♣ ♠ y los CP437 (█, ▓, ╔, ═...) como UTF-8.
- `msj()` escribe letra a letra sin partir los caracteres de varios bytes (único retoque al código del juego).
- Los bucles `if (kbhit)` posteriores a `getch()` no se tocan (ver README de karate-panamericano).

Este código vive fuera de `public/`; solo se publican `ouite.js`, `ouite.wasm` y la página en
`public/play/ouite/` (xterm.js se comparte en `public/play/vendor/`).

## Reconstruir el build

Requisitos: Python 3 y Emscripten (probado con 6.0.13).

```powershell
.\build.ps1 -Emsdk C:\ruta\a\emsdk
```

En Linux/macOS/Git Bash: `source /ruta/a/emsdk/emsdk_env.sh && ./build.sh`.

Comando exacto (tras `python portar.py`):

```
em++ main_web.cpp -O2 -std=c++17 -Wno-pointer-bool-conversion \
  -sASYNCIFY -sEXIT_RUNTIME=1 -sALLOW_MEMORY_GROWTH=1 \
  -sMODULARIZE=1 -sEXPORT_NAME=createOuite -sENVIRONMENT=web \
  -o ../../../public/play/ouite/ouite.js
```
