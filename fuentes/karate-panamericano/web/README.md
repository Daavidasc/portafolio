# Karate Panamericano en el navegador

Versión web del juego de consola (C++/CLI). El original (`../karate.cpp`) no se modifica: `portar.py` genera
una copia portable (`main_web.cpp`) y `compat.h` simula `System::Console`, `conio.h` (`kbhit`/`getch`),
`_sleep`, `system("cls")`, `cin >> n` y la salida por `cout`/`printf` hacia xterm.js.

Este código fuente vive fuera de `public/`, así que no se publica como archivo suelto. Solo se publican
`karate.js` y `karate.wasm` (y la página en `public/play/karate-panamericano/`).

## Reconstruir el build

Requisitos: Python 3 y [Emscripten](https://emscripten.org/docs/getting_started/downloads.html) (probado con 6.0.13).

```powershell
# Instalación de Emscripten (una vez)
git clone https://github.com/emscripten-core/emsdk.git C:\emsdk
cd C:\emsdk
.\emsdk install latest
.\emsdk activate latest

# Reconstruir (desde esta carpeta)
.\build.ps1 -Emsdk C:\emsdk
```

En Linux/macOS/Git Bash: `source /ruta/a/emsdk/emsdk_env.sh && ./build.sh`.

Comando exacto de compilación (lo que hacen los scripts tras ejecutar `python portar.py`):

```
em++ main_web.cpp -O2 -std=c++17 -Wno-pointer-bool-conversion \
  -sASYNCIFY -sEXIT_RUNTIME=1 -sALLOW_MEMORY_GROWTH=1 \
  -sMODULARIZE=1 -sEXPORT_NAME=createKarate -sENVIRONMENT=web \
  -o ../../../public/play/karate-panamericano/karate.js
```

## Qué corrige `portar.py` respecto al original

- Acentos perdidos (`pa s` → `país`, `n mero` → `número`, `Cr ditos` → `Créditos`...) y archivo en UTF-8.
- `int a` sin inicializar en `turnoJugador` (`= 0`).
- `elegirPais`: caso por defecto (opción inválida → USA) para no salir de la función sin `return`.
- `p3 != p1 || p3 != p2` → `&&` en el tercer puesto aleatorio.
- `pelea.posicionRival = pelea.posicionRival; +recuperacionGolpe;` → la suma ahora se aplica (3 sitios).
- `cin >> n` → `readInt()` (3 menús y la pausa final del podio).

Los bucles `while (1) { if (kbhit) break; }` posteriores a cada `getch()` **no** se han convertido en `kbhit()`:
en el original `kbhit` sin paréntesis es siempre verdadero, así que no esperan nada. Con `kbhit()` exigirían una
segunda pulsación en cada «PULSA CUALQUIER TECLA» y dejarían teclas en cola.

## Vendor

`public/play/vendor/` (compartido con los demás juegos) contiene xterm.js 6.0.0 y su addon WebGL 0.19.0 (MIT), copiados del
paquete npm `@xterm/xterm` / `@xterm/addon-webgl` (sin los sourcemaps).
