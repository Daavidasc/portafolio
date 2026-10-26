"""Genera main_web.cpp a partir de ../ouite.cpp (el original no se modifica).

Solo cambios de portabilidad (sin pch.h, conio.h ni windows.h; cin >> x pasa a readInt()/readWord()) y un
ajuste en msj() para que no parta los caracteres UTF-8. La lógica del juego y el arte no se tocan.

Uso: python portar.py
"""
import re
from pathlib import Path

AQUI = Path(__file__).resolve().parent
ORIGEN = AQUI.parent / "ouite.cpp"
DESTINO = AQUI / "main_web.cpp"

texto = ORIGEN.read_bytes().decode("utf-8").replace("\r\n", "\n")


def reemplazar(patron, nuevo, minimo=1, regex=False):
    """Reemplaza y comprueba que el patrón existía (para no fallar en silencio)."""
    global texto
    if regex:
        texto, veces = re.subn(patron, nuevo, texto)
    else:
        veces = texto.count(patron)
        texto = texto.replace(patron, nuevo)
    assert veces >= minimo, f"sin coincidencias: {patron!r}"


# --- Cabecera portable ---
reemplazar('#include "pch.h"\n', '#include "compat.h"\n')
reemplazar('#include "conio.h"\n', "")
reemplazar("#include <windows.h>\n", "")
reemplazar("using namespace System;\n", "")

# --- msj(): escribe letra a letra sin partir los caracteres de varios bytes (p. ej. «¡») ---
reemplazar("        cout << mensaje[i];\n", "        i += compat::putUtf8(mensaje, i) - 1;\n")

# --- cin >> x ---
reemplazar(r"cin >> (N|a);", r"\1 = readInt();", minimo=4, regex=True)
reemplazar(r"cin >> (j1|j2);", r"readWord(\1);", minimo=2, regex=True)

DESTINO.write_text(texto, encoding="utf-8", newline="\n")
print(f"{DESTINO} escrito ({len(texto)} caracteres)")
