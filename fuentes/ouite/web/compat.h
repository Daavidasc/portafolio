// Capa de compatibilidad: permite compilar el juego de consola (C++/CLI + conio + windows.h) con Emscripten
// y ejecutarlo en xterm.js. No contiene lógica del juego.
//
// Terminal web fija de 105 columnas x 30 filas. La salida (cout y printf) pasa por un único búfer que
// traduce los bytes CP437 del arte (219 █, 220 ▄, 223 ▀, 177 ▒, 164 ñ...) a UTF-8 y lo envía a JS.
#pragma once

#include <emscripten.h>

#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <streambuf>
#include <string>

// Puentes a JavaScript (EM_JS debe ir en el ámbito global).
EM_JS(void, compat_js_write, (const char* text, int length), {
  if (window.karateWrite) {
    window.karateWrite(UTF8ToString(text, length));
  }
});

EM_JS(int, compat_js_kbhit, (), {
  return window.karateKeys && window.karateKeys.length > 0 ? 1 : 0;
});

EM_ASYNC_JS(int, compat_js_getch, (), {
  while (!window.karateKeys || window.karateKeys.length === 0) {
    await new Promise((resolve) => setTimeout(resolve, 8));
  }

  return window.karateKeys.shift();
});

namespace compat {

constexpr int kCols = 105;
constexpr int kRows = 30;

// ---------- Salida ----------

// Tabla CP437 para los bytes 0x80..0xFF.
inline const char* const kCp437[128] = {
    "Ç", "ü", "é", "â", "ä", "à", "å", "ç", "ê", "ë", "è", "ï", "î", "ì", "Ä", "Å",
    "É", "æ", "Æ", "ô", "ö", "ò", "û", "ù", "ÿ", "Ö", "Ü", "¢", "£", "¥", "₧", "ƒ",
    "á", "í", "ó", "ú", "ñ", "Ñ", "ª", "º", "¿", "⌐", "¬", "½", "¼", "¡", "«", "»",
    "░", "▒", "▓", "│", "┤", "╡", "╢", "╖", "╕", "╣", "║", "╗", "╝", "╜", "╛", "┐",
    "└", "┴", "┬", "├", "─", "┼", "╞", "╟", "╚", "╔", "╩", "╦", "╠", "═", "╬", "╧",
    "╨", "╤", "╥", "╙", "╘", "╒", "╓", "╫", "╪", "┘", "┌", "█", "▄", "▌", "▐", "▀",
    "α", "ß", "Γ", "π", "Σ", "σ", "µ", "τ", "Φ", "Θ", "Ω", "δ", "∞", "φ", "ε", "∩",
    "≡", "±", "≥", "≤", "⌠", "⌡", "÷", "≈", "°", "∙", "·", "√", "ⁿ", "²", "■", " ",
};

// Longitud de la secuencia UTF-8 válida que empieza en s[i], o 0 si no es válida.
inline int utf8Length(const unsigned char* s, size_t i, size_t n) {
  const unsigned char c = s[i];
  int len = 0;

  if (c >= 0xC2 && c <= 0xDF) {
    len = 2;
  } else if (c >= 0xE0 && c <= 0xEF) {
    len = 3;
  } else if (c >= 0xF0 && c <= 0xF4) {
    len = 4;
  } else {
    return 0;
  }

  if (i + len > n) {
    return 0;
  }

  for (int k = 1; k < len; ++k) {
    if ((s[i + k] & 0xC0) != 0x80) {
      return 0;
    }
  }

  return len;
}

inline std::string& pending() {
  static std::string buffer;
  return buffer;
}

// Añade bytes al búfer. Un byte alto suelto (cout << char(219)) es CP437; los textos con acentos del
// código fuente llegan en UTF-8 y se conservan.
inline void append(const char* data, size_t n) {
  std::string& out = pending();
  const unsigned char* s = reinterpret_cast<const unsigned char*>(data);

  for (size_t i = 0; i < n;) {
    if (s[i] < 0x80) {
      // En la consola de Windows los códigos 3..6 se dibujan como ♥ ♦ ♣ ♠ (palos de las cartas).
      static const char* const kSuits[4] = {"♥", "♦", "♣", "♠"};

      if (s[i] >= 3 && s[i] <= 6) {
        out += kSuits[s[i] - 3];
      } else {
        out.push_back(static_cast<char>(s[i]));
      }

      ++i;
      continue;
    }

    const int len = n == 1 ? 0 : utf8Length(s, i, n);

    if (len > 0) {
      out.append(data + i, len);
      i += len;
    } else {
      out += kCp437[s[i] - 0x80];
      ++i;
    }
  }
}

inline void flush() {
  std::string& out = pending();

  if (!out.empty()) {
    compat_js_write(out.c_str(), static_cast<int>(out.size()));
    out.clear();
  }
}

inline void ansi(const char* sequence) {
  append(sequence, std::strlen(sequence));
}

class WebBuf : public std::streambuf {
 protected:
  int_type overflow(int_type c) override {
    if (c != traits_type::eof()) {
      const char ch = static_cast<char>(c);

      append(&ch, 1);
    }

    return c;
  }

  std::streamsize xsputn(const char* s, std::streamsize n) override {
    append(s, static_cast<size_t>(n));

    return n;
  }

  int sync() override { return 0; }
};

inline WebBuf& buffer() {
  static WebBuf buf;
  return buf;
}

// Redirige std::cout al búfer antes de que arranque main.
inline const bool kInstalled = [] {
  std::cout.rdbuf(&buffer());

  return true;
}();

inline int printfWeb(const char* format, ...) {
  char text[512];
  va_list args;

  va_start(args, format);
  const int written = std::vsnprintf(text, sizeof text, format, args);
  va_end(args);

  if (written > 0) {
    append(text, std::min<size_t>(static_cast<size_t>(written), sizeof text - 1));
  }

  return written;
}

// ---------- Cursor y pantalla ----------

inline void gotoxyWeb(int x, int y) {
  char sequence[32];

  std::snprintf(sequence, sizeof sequence, "\033[%d;%dH", y + 1, x + 1);
  ansi(sequence);
  flush();
}

inline void clearScreen() {
  ansi("\033[2J\033[H");
  flush();
}

// ---------- Tiempo ----------

inline void sleepMs(int ms) {
  flush();
  emscripten_sleep(ms);
}

// ---------- Teclado ----------
// La página guarda las teclas en window.karateKeys (códigos de caracter).

inline int kbhit() { return compat_js_kbhit(); }

inline int getch() {
  flush();

  return compat_js_getch();
}

// Sustituye a `cin >> entero`: lee teclas hasta Enter, con eco y borrado (el menú admite "10").
inline int readInt() {
  std::string digits;

  for (;;) {
    const int key = getch();

    if (key == 13 || key == 10) {
      ansi("\r\n");
      flush();
      break;
    }

    if ((key == 8 || key == 127) && !digits.empty()) {
      digits.pop_back();
      ansi("\b \b");
      flush();
    } else if (key >= '0' && key <= '9' && digits.size() < 9) {
      digits.push_back(static_cast<char>(key));
      const char echo = static_cast<char>(key);

      append(&echo, 1);
      flush();
    }
  }

  return digits.empty() ? 0 : std::atoi(digits.c_str());
}

// Sustituye a `cin >> string`: una palabra (sin espacios) hasta Enter o espacio, con eco y borrado.
inline void readWord(std::string& word) {
  word.clear();

  for (;;) {
    const int key = getch();

    if (key == 13 || key == 10 || key == ' ') {
      if (!word.empty() || key != ' ') {
        ansi("\r\n");
        flush();
        break;
      }
    } else if ((key == 8 || key == 127) && !word.empty()) {
      word.pop_back();
      ansi("\b \b");
      flush();
    } else if (key >= 33 && key < 127 && word.size() < 20) {
      word.push_back(static_cast<char>(key));
      const char echo = static_cast<char>(key);

      append(&echo, 1);
      flush();
    }
  }
}

// ---------- System.Console ----------

struct CursorVisibleProxy {
  CursorVisibleProxy& operator=(bool visible) {
    ansi(visible ? "\033[?25h" : "\033[?25l");
    flush();

    return *this;
  }
};

struct Console {
  static constexpr int WindowWidth = kCols;
  static constexpr int WindowHeight = kRows;
  static inline CursorVisibleProxy CursorVisible;

  static void SetWindowSize(int, int) {}  // la terminal web es fija
  static void SetCursorPosition(int x, int y) { gotoxyWeb(x, y); }
  static void Clear() { clearScreen(); }
  static int ReadKey() { return getch(); }
};

inline int systemWeb(const char* command) {
  if (std::strcmp(command, "cls") == 0) {
    clearScreen();
  } else if (std::strncmp(command, "pause", 5) == 0) {
    getch();  // `pause>0`: espera una tecla sin mostrar mensaje
  }

  return 0;
}

// ---------- windows.h: SetConsoleTextAttribute ----------

using HANDLE = void*;
constexpr int STD_OUTPUT_HANDLE = -11;

inline HANDLE GetStdHandle(int) { return nullptr; }

// Atributo de Windows (fondo*16 + texto, colores 0-15) -> colores 256 de ANSI. Windows ordena los colores
// azul/verde/rojo y ANSI rojo/verde/azul, de ahí la tabla.
inline int SetConsoleTextAttribute(HANDLE, int attribute) {
  static const int kAnsi[16] = {0, 4, 2, 6, 1, 5, 3, 7, 8, 12, 10, 14, 9, 13, 11, 15};
  char sequence[40];

  std::snprintf(sequence, sizeof sequence, "[38;5;%dm[48;5;%dm", kAnsi[attribute & 15],
                kAnsi[(attribute >> 4) & 15]);
  ansi(sequence);

  return 1;
}

// Imprime un carácter completo (UTF-8 de varios bytes de una vez) para que msj() pueda escribir letra a letra
// textos con acentos sin partirlos. Devuelve los bytes consumidos.
inline int putUtf8(const std::string& text, size_t i) {
  const int len = utf8Length(reinterpret_cast<const unsigned char*>(text.data()), i, text.size());
  const int bytes = len > 0 ? len : 1;

  append(text.data() + i, bytes == 1 ? 1 : static_cast<size_t>(bytes));

  return bytes;
}

}  // namespace compat

// El código del juego llama a estas funciones sin espacio de nombres.
using compat::Console;
using compat::getch;
using compat::kbhit;
using compat::readInt;
using compat::readWord;
using compat::GetStdHandle;
using compat::HANDLE;
using compat::SetConsoleTextAttribute;
using compat::STD_OUTPUT_HANDLE;

#define printf compat::printfWeb
#define system compat::systemWeb
#define _sleep compat::sleepMs
