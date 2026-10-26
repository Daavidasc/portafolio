# Misión Espacial en el navegador

Versión web del juego de consola (C++/CLI, consola de Windows). El original (`../misionespacial.cpp`) no se
modifica: `portar.py` genera una copia portable (`main_web.cpp`) y `compat.h` simula `System::Console`
(incluidos `ForegroundColor` y `ConsoleColor`), `conio.h` (`kbhit`/`getch`), `windows.h`
(`SetConsoleTextAttribute`), `_sleep`, `system("pause>0")` y `cin >> n` / `cin >> palabra`
(`readInt()` / `readWord()`). La terminal web es de 120 columnas × 30 filas.

- **Colores:** los atributos de Windows (fondo*16 + texto) y `ConsoleColor` se traducen a ANSI de 256, y la página
  usa la paleta de la consola de Windows.
- **Flechas:** el juego lee `getch()` y espera el código de la tecla tras el prefijo 224 de Windows; la página
  envía 224 y luego 72/80/75/77, igual que la consola.
- **Caracteres:** los CP437 (█, ▓, ╔, ⌠ ...) pasan a UTF-8 y los códigos 30/31 se dibujan como ▲ ▼.
- **Retoques al código:** `msj()` no parte los caracteres de varios bytes y `cin.ignore()` (que esperaba Enter
  tras «Opción no válida») pasa a `getch()`.
- Los bucles `if (kbhit)` posteriores a `getch()` no se tocan (ver README de karate-panamericano).

Este código vive fuera de `public/`; solo se publican `mision-espacial.js`, `mision-espacial.wasm` y la página en
`public/play/mision-espacial/` (xterm.js se comparte en `public/play/vendor/`).

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
  -sMODULARIZE=1 -sEXPORT_NAME=createMisionEspacial -sENVIRONMENT=web \
  -o ../../../public/play/mision-espacial/mision-espacial.js
```
