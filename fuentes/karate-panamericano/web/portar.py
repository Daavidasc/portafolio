"""Genera main_web.cpp a partir de ../karate.cpp (el original no se modifica).

Pasos: UTF-8 con acentos recuperados, correcciones de errores del original y cambios mínimos de
portabilidad (sin pch.h, sin System, sin conio.h; cin >> n pasa a readInt()). La lógica del juego y el arte
no se tocan.

Uso: python portar.py
"""
import re
from pathlib import Path

AQUI = Path(__file__).resolve().parent
ORIGEN = AQUI.parent / "karate.cpp"
DESTINO = AQUI / "main_web.cpp"

texto = ORIGEN.read_bytes().decode("ascii").replace("\r\n", "\n")


def reemplazar(patron, nuevo, minimo=1, regex=False):
    """Reemplaza y comprueba que el patrón existía (para no fallar en silencio)."""
    global texto
    if regex:
        texto, veces = re.subn(patron, nuevo, texto)
    else:
        veces = texto.count(patron)
        texto = texto.replace(patron, nuevo)
    assert veces >= minimo, f"sin coincidencias: {patron!r}"


# --- 1. Acentos perdidos: el carácter original quedó como un espacio ---
for malo, bueno in [
    ("pa s:", "país:"),
    ("n mero", "número"),
    ("elecci n", "elección"),
    ("Posici n", "Posición"),
    ("Puntuaci n", "Puntuación"),
    ("Dise o", "Diseño"),
    ("Qu  decides", "Qué decides"),
    ("Qu  tipo", "Qué tipo"),
    ("fall !", "falló!"),
    ("Pu ete,", "Puñete,"),
    ("Pu etaso", "Puñetaso"),
    ("Pu etazo", "Puñetazo"),
    ("Cr ditos", "Créditos"),
    ("qued  sin", "quedó sin"),
    ("da o", "daño"),
    ("pu ete", "puñete"),
    ("dise o", "diseño"),
    ("Funci n", "Función"),
    ("el men ", "el menú"),
    ("Cr ditos", "Créditos"),
]:
    reemplazar(malo, bueno, minimo=0)

# --- 2. Cabecera portable ---
reemplazar('#include "pch.h"\n', '#include "compat.h"\n')
reemplazar("#include <conio.h>\n", "")
reemplazar("using namespace System;\n", "")

# --- 3. Errores del original ---
# int a sin inicializar en turnoJugador
reemplazar("    int a;\n    while (true) {\n        char tecla;", "    int a = 0;\n    while (true) {\n        char tecla;")

# elegirPais: caso por defecto (opción inválida) para no salir sin return
reemplazar(
    '    case 10: return { "REPUBLICA DOM.", 52, 0, 6, 53, 20 };\n    }\n}',
    '    case 10: return { "REPUBLICA DOM.", 52, 0, 6, 53, 20 };\n'
    '    default: return { "USA", 229, 227, 6, 1, 20 };\n    }\n}',
)

# p3 != p1 || p3 != p2  ->  &&  (el tercer puesto debe ser distinto de los dos anteriores)
reemplazar("p3 != p1 || p3 != p2", "p3 != p1 && p3 != p2")

# el ';' dejaba la suma sin efecto
reemplazar(
    "pelea.posicionRival = pelea.posicionRival; +recuperacionGolpe;",
    "pelea.posicionRival = pelea.posicionRival + recuperacionGolpe;",
    minimo=3,
)

# --- 4. cin >> entero  ->  readInt() ---
reemplazar(r"cin >> (\w+);", r"\1 = readInt();", minimo=4, regex=True)

# --- 5. Texto de los cuadros (estadísticas y opciones/mensajes de combate) en negro ---
# Solo desde mostrarEstado en adelante: antes de ahí colorear(141, 196) dibuja los bordes de los cuadros.
corte = texto.index("void mostrarEstado(")
texto = texto[:corte] + texto[corte:].replace("colorear(141, 196)", "colorear(141, 0)")

DESTINO.write_text(texto, encoding="utf-8", newline="\n")
print(f"{DESTINO} escrito ({len(texto)} caracteres)")
