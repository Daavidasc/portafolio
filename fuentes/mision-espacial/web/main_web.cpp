#include "compat.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

#define ARRIBA 72
#define ABAJO 80
#define IZQUIERDA 75
#define DERECHA 77


using namespace std;

#define color SetConsoleTextAttribute
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

const int screenWidth = 120;
const int screenHeight = 30;



void gotoxy(int x, int y) {
    Console::SetCursorPosition(x, y);
}


void clear() {
    Console::Clear();
}

void color(int c)
{
    switch (c)
    {
    case 1:Console::ForegroundColor = ConsoleColor::Black;       break;
    case 2:Console::ForegroundColor = ConsoleColor::Blue;		 break;
    case 3:Console::ForegroundColor = ConsoleColor::Cyan;		 break;
    case 4:Console::ForegroundColor = ConsoleColor::DarkBlue;	 break;
    case 5:Console::ForegroundColor = ConsoleColor::DarkCyan;	 break;
    case 6:Console::ForegroundColor = ConsoleColor::DarkGray;	 break;
    case 7:Console::ForegroundColor = ConsoleColor::DarkGreen;	 break;
    case 8:Console::ForegroundColor = ConsoleColor::DarkMagenta; break;
    case 9:Console::ForegroundColor = ConsoleColor::DarkRed;	 break;
    case 10:Console::ForegroundColor = ConsoleColor::DarkYellow; break;
    case 11:Console::ForegroundColor = ConsoleColor::Gray;		 break;
    case 12:Console::ForegroundColor = ConsoleColor::Green;		 break;
    case 13:Console::ForegroundColor = ConsoleColor::Magenta;	 break;
    case 14:Console::ForegroundColor = ConsoleColor::Red;		 break;
    case 15:Console::ForegroundColor = ConsoleColor::White;		 break;
    case 16:Console::ForegroundColor = ConsoleColor::Yellow;	 break;
    }
}


void msj(const string& mensaje) {

    for (int i = 0; i < mensaje.length(); i++) {
        i += compat::putUtf8(mensaje, i) - 1;
        cout.flush(); // Vacía el búfer de salida para que se imprima inmediatamente

        // Espera 60 milisegundos antes de imprimir la siguiente letra
        _sleep(60);
    }
}

void titulo(int x, int y) {
    gotoxy(x, y); cout << "    ___     ___     ___     ___   " << endl;
    gotoxy(x, y + 1); cout << "   /\\  \\   /\\  \\   /\\__\\   /\\  \\  " << endl;
    gotoxy(x, y + 2); cout << "  /::\\  \\ /::\\  \\ /::L_L_ /::\\  \\ " << endl;
    gotoxy(x, y + 3); cout << " /:/\\:\\__/::\\:\\__/:/L:\\__/::\\:\\__\\" << endl;
    gotoxy(x, y + 4); cout << " \\:\\:\/__\/\\::/  \\/_/:/  \\:\\:\/  /" << endl;
    gotoxy(x, y + 5); cout << "  \\::/  /  /:/  /  /:/  / \:\\\/  / " << endl;
    gotoxy(x, y + 6); cout << "   \\/__\\/\\/__\\/\\/__\\/\\/__/  " << endl;
    gotoxy(x, y + 7); cout << "      _\\:\\  \\ /::\\  \\ /::L_L_     " << endl;
    gotoxy(x, y + 8); cout << "     /\\/::\\__/::\\:\\__/:/L:\\__\\    " << endl;
    gotoxy(x, y + 9); cout << "     \\::/\\/__\\/\\::/  \\/_/:/  /    " << endl;
    gotoxy(x, y + 10); cout << "      \\/__/    /:/  /  /:/  /     " << endl;
    gotoxy(x, y + 11); cout << "               \\/__/   \\/__/      " << endl;
}

void generarEstrellas(int cantidad)
{
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < cantidad; ++i)
    {
        int x = rand() % (screenWidth - 1) + 1; // Ajustar límites para evitar bordes
        int y = rand() % (screenHeight - 1) + 1; // Ajustar límites para evitar bordes
        gotoxy(x, y);
        cout << "*";
    }
}

void sistemaSolar(int x, int y)
{
    color(16);
    gotoxy(x, y); cout << "                       :";
    gotoxy(x, y + 1); cout << "                       :";
    gotoxy(x, y + 2); cout << "                       :";
    gotoxy(x, y + 3); cout << "                       :";
    gotoxy(x, y + 4); cout << "        .              :";
    gotoxy(x, y + 5); cout << "         '.            :           .'";
    gotoxy(x, y + 6); cout << "           '.          :         .'";
    gotoxy(x, y + 7); cout << "             '.   .-#######-.   .'                                   .'':";
    gotoxy(x, y + 8); cout << "               '.#          #.'                               .-####-.'         .---.          .----.        .-###-.";
    gotoxy(x, y + 9); cout << "                :            :                _    _        .#     .' #.    ...#     #...    .#      #.    .#       #.";
    gotoxy(x, y + 10); cout << "        .........            .........    o  ()  ()  ()   :    .'    :   '..:.......:..'   :        :    :         :   o";
    gotoxy(x, y + 11); cout << "                :            :                              :  .'      :       '.....'       '.      .'    '.       .'";
    gotoxy(x, y + 12); cout << "                 :          :                             .'.'.      .'                        `''''`        `'''''`";
    gotoxy(x, y + 13); cout << "                  '........'                              ''   ``````";
    gotoxy(x, y + 14); cout << "                 .'    :   '.";
    gotoxy(x, y + 15); cout << "               .'      :     '.";
    gotoxy(x, y + 16); cout << "             .'        :       '.";
    gotoxy(x, y + 17); cout << "           .'          :         '.";
    gotoxy(x, y + 18); cout << "                       :";
    gotoxy(x, y + 18); cout << "                       :";
    gotoxy(x, y + 19); cout << "                       :";
    gotoxy(x, y + 20); cout << "                       :";


}

void mostrarCreditos() {

    generarEstrellas(40);

    gotoxy(30, 7); cout << " " << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << " " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << endl;
    gotoxy(30, 8); cout << char(219) << "     " << char(219) << " " << char(219) << "     " << char(219) << " " << char(219) << "       " << char(219) << "     " << char(219) << "  " << char(219) << "     " << char(219) << "    " << char(219) << "     " << char(219) << " " << char(219) << "     " << char(219) << endl;
    gotoxy(30, 9); cout << char(219) << "       " << char(219) << "     " << char(219) << " " << char(219) << "       " << char(219) << "     " << char(219) << "  " << char(219) << "     " << char(219) << "    " << char(219) << "     " << char(219) << " " << char(219) << endl;
    gotoxy(30, 10); cout << char(219) << "       " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << "   " << char(219) << "     " << char(219) << "  " << char(219) << "     " << char(219) << "    " << char(219) << "     " << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << endl;
    gotoxy(30, 11); cout << char(219) << "       " << char(219) << "   " << char(219) << "   " << char(219) << "       " << char(219) << "     " << char(219) << "  " << char(219) << "     " << char(219) << "    " << char(219) << "     " << char(219) << "       " << char(219) << endl;
    gotoxy(30, 12); cout << char(219) << "     " << char(219) << " " << char(219) << "    " << char(219) << "  " << char(219) << "       " << char(219) << "     " << char(219) << "  " << char(219) << "     " << char(219) << "    " << char(219) << "     " << char(219) << " " << char(219) << "     " << char(219) << endl;
    gotoxy(30, 13); cout << " " << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << "     " << char(219) << " " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << "    " << char(219) << "    " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << endl;

    gotoxy(48, 16); cout << "  G A M E  J A M  " << endl;
    gotoxy(48, 17); cout << "------------------" << endl;
    gotoxy(50, 19); cout << " David Serrudo" << endl;
    gotoxy(49, 20); cout << " Francisco Uribe " << endl;
    gotoxy(50, 21); cout << " Alissa Zu" << char(164) << "iga " << endl;


    color(6); gotoxy(42, 25); msj("<Presione cualquier tecla para continuar...>");

    int tecla = getch();
    if (kbhit)
    {
        clear();
    }
}

void mostrarInstrucciones() {
    generarEstrellas(40);
    titulo(45, 0);

    gotoxy(55, 13); msj("<INSTRUCCIONES>");
    gotoxy(23, 14); cout << "El juego se trata de una mision en el planeta marte, nuestro pequeño personaje ";
    gotoxy(26, 15); cout << "debera esquivar los meteoritos en el cielo y lograr un aterrizaje seguro! ";
    gotoxy(26, 16); cout << "Utiliza las direccionales para moverte y presiona 'a' activar modo automatico";
    gotoxy(28, 17); cout << "Una vez logre el aterrizaje, el robot deberá recoger todas las muestras ";
    gotoxy(16, 18); cout << "y dejarlas una por una en el deposito! Una vez terminada su mision debera regresar a la nave.";
    gotoxy(30, 19); cout << "Utiliza las direccionales para moverte";

    color(6); gotoxy(42, 22); msj("<Presione cualquier tecla para continuar...>");

    int tecla = getch();
    if (kbhit)
    {
        clear();
    }
}

void mostrarSalida() {

    generarEstrellas(40);
    sistemaSolar(0, 5);
    color(15);
    gotoxy(72, 8);  msj("¡Muchas gracias por jugar!");
    color(6);
    gotoxy(66, 9); cout << "<Presione cualquier tecla para salir>";
    system("pause>0");
}


void inicio() {

    generarEstrellas(40);
    sistemaSolar(0, 5);
    color(15);
    gotoxy(65, 8);
    msj("En algun lugar del espacio exterior...     ");
    color(6);
    gotoxy(66, 9);
    cout << "<<Presione enter para continuar...>>";
    int tecla = getch();
    if (kbhit)
    {
        clear();
    }
}


int generarNumAleatorio(int Max, int Min) {
    int nume = rand() % (Max + 1 - Min) + Min;
    return nume;
}

void imprimirCielo(int x, int y) {
    color(hConsole, 100);
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            Console::SetCursorPosition(j, i); cout << " ";
        }
        cout << endl;
    }

    color(hConsole, 15);
}

void imprimirSuelo(int x, int y) {
    color(hConsole, 70);
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            Console::SetCursorPosition(j, i); cout << char(178);
        }

    }

    color(hConsole, 15);
}

void imprimirSol() {
    Console::SetCursorPosition(0, 0);
    color(hConsole, 110);

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 17; j++) {
            if ((i != 1 || (j < 15 && i == 1)) && (i != 2 || (j < 15 && i == 2)) && (i != 3 || (j < 13 && i == 3)) && (i != 4 || (j < 11 && i == 4)) && (i != 5 || (j < 8 && i == 5)) && (i != 6 || (j < 3 && i == 6)))
                cout << char(178);
        }
        cout << endl;
    }
}

void imprimirMarcadorSegundo() {
    color(hConsole, 6);
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 96; j <= 119; j++)
        {
            if (i == 0 && j != 119 && j != 96) { Console::SetCursorPosition(j, i); cout << char(205); }
            else if (i == 0 && j == 119) { Console::SetCursorPosition(j, i); cout << char(187); }
            else if ((j == 96 || j == 119) && i != 0 && i != 5) { Console::SetCursorPosition(j, i); cout << char(186); }
            else if (i == 0 && j == 96) { Console::SetCursorPosition(j, i); cout << char(201); }
            else if (i == 5 && j != 96 && j != 119) { Console::SetCursorPosition(j, i); cout << char(205); }
            else if (i == 5 && j == 96) { Console::SetCursorPosition(j, i); cout << char(200); }
            else if (i == 5 && j == 119) { Console::SetCursorPosition(j, i); cout << char(188); }
            else if (i != 1 && i != 2 && i != 3 && i != 4) {
                Console::SetCursorPosition(j, i);  color(hConsole, 6); cout << " "; color(hConsole, 100);
            }
        }
        cout << endl;
    }

    color(hConsole, 15);
}

void imprimirMarcadorPrimer() {
    color(hConsole, 100);
    for (int i = 0; i <= 7; i++)
    {
        for (int j = 96; j <= 119; j++)
        {
            if (i == 0 && j != 119 && j != 96) { Console::SetCursorPosition(j, i); cout << char(205); }
            else if (i == 0 && j == 119) { Console::SetCursorPosition(j, i); cout << char(187); }
            else if ((j == 96 || j == 119) && i != 0 && i != 7) { Console::SetCursorPosition(j, i); cout << char(186); }
            else if (i == 0 && j == 96) { Console::SetCursorPosition(j, i); cout << char(201); }
            else if (i == 7 && j != 96 && j != 119) { Console::SetCursorPosition(j, i); cout << char(205); }
            else if (i == 7 && j == 96) { Console::SetCursorPosition(j, i); cout << char(200); }
            else if (i == 7 && j == 119) { Console::SetCursorPosition(j, i); cout << char(188); }
            else if (i != 1 && i != 2 && i != 3 && i != 4 && i != 5 && i != 6) {
                Console::SetCursorPosition(j, i);  color(hConsole, 6); cout << " "; color(hConsole, 100);
            }
        }
        cout << endl;
    }

    color(hConsole, 15);
}

void imprimirEstado(int x, int y, int estado) {
    color(hConsole, 3);
    Console::SetCursorPosition(x, y); cout << "                      ";
    Console::SetCursorPosition(x, y); color(hConsole, 15); cout << " Estado:  "; color(hConsole, 3);
    for (int i = 0; i < estado; i++) {
        cout << char(244) << " ";
    }
    color(hConsole, 15);
};

void imprimirEstadisticas(int x, int y, int altura, int limiteAbajo, int by, int meteoritos, string nombre) {

    Console::SetCursorPosition(x, y);
    cout << "                      ";
    Console::SetCursorPosition(x, y);
    cout << " Altura: ";
    cout << altura * 2 + (limiteAbajo - by) * 2 - 2 << "km       ";
    Console::SetCursorPosition(x, y + 2);
    cout << " Nro. Meteoritos: "; cout << meteoritos << "   ";
    Console::SetCursorPosition(x, y + 3);
    cout << " Llegada:"; cout << altura / 11 << " Seg aprox ";
    Console::SetCursorPosition(x + 10, y + 4); cout << "            ";
    Console::SetCursorPosition(x, y + 4);
    cout << " Operador: "; cout << nombre;

};

void imprimirEstadisticasSegundo(int x, int y, int cantidad, string nombre, int cantCristales) {

    Console::SetCursorPosition(x, y);
    cout << "                      ";
    Console::SetCursorPosition(x, y);
    cout << " Cant cristales: " << cantCristales;
    Console::SetCursorPosition(x, y + 1);
    cout << " Nro. Meteoritos: "; cout << cantidad << "  ";
    Console::SetCursorPosition(x, y + 2);
    cout << "                      ";
    Console::SetCursorPosition(x, y + 2);
    cout << " Operador: "; cout << nombre;

};

void borrarNave(int x, int y) {
    color(hConsole, 100);

    Console::SetCursorPosition(x - 2, y); cout << " ";
    Console::SetCursorPosition(x - 2, y + 1); cout << " ";

    Console::SetCursorPosition(x - 1, y); cout << " ";
    Console::SetCursorPosition(x - 1, y + 1); cout << " ";

    Console::SetCursorPosition(x, y); cout << " ";
    Console::SetCursorPosition(x, y + 1); cout << " ";

    Console::SetCursorPosition(x + 1, y); cout << " ";
    Console::SetCursorPosition(x + 1, y + 1); cout << " ";

    Console::SetCursorPosition(x + 2, y); cout << " ";
    Console::SetCursorPosition(x + 2, y + 1); cout << " ";
    color(hConsole, 15);
}

void imprimirNave(int x, int y) {

    color(hConsole, 96);
    Console::SetCursorPosition(x - 2, y); cout << char(201);
    Console::SetCursorPosition(x - 2, y + 1); cout << char(202);

    Console::SetCursorPosition(x - 1, y); cout << char(188);
    color(hConsole, 142);
    Console::SetCursorPosition(x - 1, y + 1); cout << char(220);
    Console::SetCursorPosition(x + 1, y + 1); cout << char(220);

    Console::SetCursorPosition(x, y + 1); cout << char(220);
    color(hConsole, 96);
    Console::SetCursorPosition(x + 1, y); cout << char(200);
    color(hConsole, 129);
    Console::SetCursorPosition(x, y); cout << char(223);

    color(hConsole, 96);
    Console::SetCursorPosition(x + 2, y); cout << char(187);
    Console::SetCursorPosition(x + 2, y + 1); cout << char(202);
}

void borrarRover(int x, int y) {
    color(hConsole, 70);
    Console::SetCursorPosition(x, y); cout << char(178);
    Console::SetCursorPosition(x + 5, y + 2); cout << char(178);
    Console::SetCursorPosition(x + 5, y); cout << char(178);
    Console::SetCursorPosition(x, y + 2); cout << char(178);

    Console::SetCursorPosition(x + 1, y); cout << char(178);
    Console::SetCursorPosition(x + 2, y); cout << char(178);
    Console::SetCursorPosition(x + 3, y); cout << char(178);
    Console::SetCursorPosition(x + 4, y); cout << char(178);

    Console::SetCursorPosition(x, y + 1); cout << char(178);
    Console::SetCursorPosition(x + 1, y + 1); cout << char(178);
    Console::SetCursorPosition(x + 2, y + 1); cout << char(178);
    Console::SetCursorPosition(x + 3, y + 1); cout << char(178);
    Console::SetCursorPosition(x + 4, y + 1); cout << char(178);
    Console::SetCursorPosition(x + 5, y + 1); cout << char(178);

    Console::SetCursorPosition(x + 1, y + 2); cout << char(178);
    Console::SetCursorPosition(x + 2, y + 2); cout << char(178);
    Console::SetCursorPosition(x + 3, y + 2); cout << char(178);
    Console::SetCursorPosition(x + 4, y + 2); cout << char(178);

}

void imprimirRover(int x, int y) {
    Console::SetCursorPosition(x + 1, y); cout << char(205);
    Console::SetCursorPosition(x + 2, y); cout << char(187);
    Console::SetCursorPosition(x + 3, y); cout << char(201);
    Console::SetCursorPosition(x + 4, y); cout << char(205);



    Console::SetCursorPosition(x, y + 1); cout << char(186);
    Console::SetCursorPosition(x + 1, y + 1); cout << " ";
    Console::SetCursorPosition(x + 2, y + 1); cout << char(200);
    Console::SetCursorPosition(x + 3, y + 1); cout << char(188);
    Console::SetCursorPosition(x + 4, y + 1); cout << " ";
    Console::SetCursorPosition(x + 5, y + 1); cout << char(186);



    Console::SetCursorPosition(x + 1, y + 2); cout << char(205);
    Console::SetCursorPosition(x + 2, y + 2); cout << char(205);
    Console::SetCursorPosition(x + 3, y + 2); cout << char(205);
    Console::SetCursorPosition(x + 4, y + 2); cout << char(205);

    color(hConsole, 96);
    Console::SetCursorPosition(x, y); cout << char(79);
    Console::SetCursorPosition(x + 5, y + 2); cout << char(79);
    Console::SetCursorPosition(x + 5, y); cout << char(79);
    Console::SetCursorPosition(x, y + 2); cout << char(79);

}

void imprimirNaveSegundo(int x, int y) {

    color(hConsole, 96);

    Console::SetCursorPosition(x, y); cout << char(206);
    Console::SetCursorPosition(x + 1, y); cout << char(219);
    Console::SetCursorPosition(x + 2, y); cout << char(205);
    Console::SetCursorPosition(x + 3, y); cout << char(205);
    Console::SetCursorPosition(x + 4, y); cout << char(205);
    Console::SetCursorPosition(x + 5, y); cout << char(205);
    Console::SetCursorPosition(x + 6, y); cout << char(219);
    Console::SetCursorPosition(x + 7, y); cout << char(206);

    Console::SetCursorPosition(x, y + 1); cout << char(186);
    Console::SetCursorPosition(x + 1, y + 1); cout << char(219);
    Console::SetCursorPosition(x + 2, y + 1); cout << char(174);
    Console::SetCursorPosition(x + 3, y + 1); cout << char(201);
    Console::SetCursorPosition(x + 4, y + 1); cout << char(187);
    Console::SetCursorPosition(x + 5, y + 1); cout << char(175);
    Console::SetCursorPosition(x + 6, y + 1); cout << char(219);
    Console::SetCursorPosition(x + 7, y + 1); cout << char(186);

    Console::SetCursorPosition(x, y + 2); cout << char(186);
    Console::SetCursorPosition(x + 1, y + 2); cout << char(219);
    Console::SetCursorPosition(x + 2, y + 2); cout << char(174);
    Console::SetCursorPosition(x + 3, y + 2); cout << char(200);
    Console::SetCursorPosition(x + 4, y + 2); cout << char(188);
    Console::SetCursorPosition(x + 5, y + 2); cout << char(175);
    Console::SetCursorPosition(x + 6, y + 2); cout << char(219);
    Console::SetCursorPosition(x + 7, y + 2); cout << char(186);

    Console::SetCursorPosition(x, y + 3); cout << char(206);
    Console::SetCursorPosition(x + 1, y + 3); cout << char(219);
    Console::SetCursorPosition(x + 2, y + 3); cout << char(205);
    Console::SetCursorPosition(x + 3, y + 3); cout << char(205);
    Console::SetCursorPosition(x + 4, y + 3); cout << char(205);
    Console::SetCursorPosition(x + 5, y + 3); cout << char(205);
    Console::SetCursorPosition(x + 6, y + 3); cout << char(219);
    Console::SetCursorPosition(x + 7, y + 3); cout << char(206);

}

void borrarMeteoritos(int x, int y) {
    color(hConsole, 100);
    Console::SetCursorPosition(x, y); cout << " ";
    Console::SetCursorPosition(x + 1, y); cout << " ";
    color(hConsole, 15);
}

void imprimirMeteoritos(int x, int y, int colorM) {
    switch (colorM)
    {
    case 1:
        color(hConsole, 97);
        break;
    case 2:
        color(hConsole, 100);
        break;
    case 3:
        color(hConsole, 101);
        break;
    case 4:
        color(hConsole, 103);
        break;
    case 5:
        color(hConsole, 107);
        break;
    }
    Console::SetCursorPosition(x, y); cout << char(177);
    Console::SetCursorPosition(x + 1, y); cout << char(177);
}

bool ejecutarPrimerNivel(int ALTO, int ANCHO, string nombre, bool modo, int& estadoTot) {

    imprimirCielo(ANCHO, ALTO);

    char tecla = ' ';

    //posicion de inicio
    int y = 16;
    int x = 59;

    //posicion actual nave
    int bx, by;
    bx = x, by = y - 1;

    //velocidad nave
    int dx = 3;
    int dy = 1;

    //movimiento automatico
    bool automatico = false;

    //movimiento canstante
    int dxconst = 0;
    int dyconst = 0;

    //altura 700
    int altura = 700;

    //estado de la nave
    int estado = estadoTot;

    //limite inferior pantalla
    int limiteAbajo = 29;

    //numero meteoritos
    const int cantMeteoritos = 7;

    bool meteorito[cantMeteoritos];

    //cordenada meteoritos
    int mx[cantMeteoritos];
    int my[cantMeteoritos];

    //velocidad meteoritos
    int nx[cantMeteoritos];
    int ny[cantMeteoritos];

    //color meteoritos
    int colorM[cantMeteoritos];

    bool modoCPU = modo;

    //inicializar valores meteoriotos
    for (int i = 0; i < cantMeteoritos; i++) {

        meteorito[i] = false;
        mx[i] = generarNumAleatorio(118, 0);

        my[i] = 1;

        nx[i] = generarNumAleatorio(2, 1);
        ny[i] = generarNumAleatorio(2, 1);

        colorM[i] = generarNumAleatorio(5, 1);

    }
    if (!modoCPU) {
        Console::SetCursorPosition(97, 3);
        color(hConsole, 12);
        cout << " Modo Manual          ";
        color(hConsole, 15);
    }
    else {
        Console::SetCursorPosition(97, 3);
        color(hConsole, 7);
        cout << " Modo CPU             ";
        color(hConsole, 15);
    }

    int meteoritosActivos = 0;

    //imprimir estado de nave
    imprimirEstado(97, 1, estado);

    bool perdio;

    while (true) {

        imprimirSol();


        //imprimir suelo de marte
        if (altura == 35) {
            color(hConsole, 70);
            Console::SetCursorPosition(0, 29);
            for (int i = 0; i < 120; i++) {
                cout << char(178);

            }
            color(hConsole, 15);
            limiteAbajo--;
        }

        if (altura == 25) {
            color(hConsole, 70);
            Console::SetCursorPosition(0, 28);
            for (int i = 0; i < 120; i++) {
                cout << char(178);
            }

            color(hConsole, 15);
            limiteAbajo--;
        }

        //mostrar mensaje aterrizar
        if (altura < 15 && by != 25) {
            color(hConsole, 110);
            Console::SetCursorPosition(53, 10);
            cout << "Hora de aterrizar!";

            color(hConsole, 70);
            for (int i = 0; i < 3; i++)
            {
                Console::SetCursorPosition(0, 27 + i);
                for (int i = 0; i < 120; i++) {
                    cout << char(178);
                }
            }
            color(hConsole, 15);
        }

        //cambiar limite inferior pantalla
        if (altura == 15) limiteAbajo--;


        //mostrar mensaje
        if (by == 25) {
            color(hConsole, 110);
            Console::SetCursorPosition(53, 10);
            cout << "                  ";
            Console::SetCursorPosition(52, 10);
            msj("Aterrizaje Exitoso!");

            Console::SetCursorPosition(42, 15);
            msj("<Presione cualquier tecla para continuar...>");

            int cantinue = getch();

            perdio = false;

            if (kbhit)
            {
                break;
            }

        }

        //generar nuevos meteoritos

        for (int i = 0; i < cantMeteoritos; i++) {
            int probabilidad = generarNumAleatorio(5, 1);
            //buscar meteoritos apagado y asignar valores
            if (probabilidad == 1 && meteorito[i] == false) {
                meteorito[i] = true;
                mx[i] = generarNumAleatorio(118, 0);
                //mx[i] = 90;
                my[i] = 0;

                nx[i] = generarNumAleatorio(2, 1);
                ny[i] = generarNumAleatorio(2, 1);

                colorM[i] = generarNumAleatorio(5, 1);

            };
        }

        //borrar
        borrarNave(bx, by);

        if (!modoCPU) {

            //recepcion de teclas modo manual

            if (kbhit() && automatico == false) {
                Console::SetCursorPosition(97, 3);
                color(hConsole, 12);
                cout << " Modo Manual          ";
                color(hConsole, 15);
                tecla = getch();
                if (tecla == ARRIBA && ((by - dy >= 0 && bx < 95) || (by - dy > 7))) {
                    by -= dy;
                    dyconst = 0;
                }
                if (tecla == ABAJO && by + dy < limiteAbajo) {
                    by += dy;
                    dyconst = 0;
                }
                if (tecla == IZQUIERDA && bx - dx > 0) {
                    bx -= dx;
                    dxconst = 0;
                }
                if (tecla == DERECHA && ((bx + dx < 119 && by > 7) || (bx + dx < 95))) {
                    bx += dx;
                    dxconst = 0;
                }
                if (tecla == 'a') {
                    Console::SetCursorPosition(97, 3);
                    color(hConsole, 3);
                    cout << " Modo Automatico";
                    color(hConsole, 15);
                    automatico = true;
                    tecla = ' ';
                }

            }

            //recepcion de teclas modo automatico

            if (kbhit() && automatico == true) {

                Console::SetCursorPosition(97, 3);
                color(hConsole, 3);
                cout << " Modo Automatico";
                color(hConsole, 15);
                tecla = getch();
                if (tecla == ARRIBA || tecla == ABAJO) {
                    dyconst = dy;
                }

                if (tecla == IZQUIERDA || tecla == DERECHA) {
                    dxconst = dx;
                }
                if (tecla == 'a') {
                    Console::SetCursorPosition(97, 3);
                    color(hConsole, 12);
                    cout << " Modo Manual          ";
                    color(hConsole, 15);
                    automatico = false;
                    tecla = ' ';
                }
            }

            //movimiento constante de modo automatico

            if (tecla == ARRIBA && ((by - dy >= 0 && bx < 95) || (by - dy > 7)) && automatico == true) {

                by -= dyconst;
            }
            if (tecla == ABAJO && by + dy < limiteAbajo && automatico == true) {

                by += dyconst;
            }
            if (tecla == IZQUIERDA && bx - dx > 0 && automatico == true) {

                bx -= dxconst;
            }
            if (tecla == DERECHA && ((bx + dx < 119 && by > 7) || (bx + dx < 95)) && automatico == true) {

                bx += dxconst;
            }

        }
        else {
            Console::SetCursorPosition(97, 3);
            color(hConsole, 7);
            cout << " Modo CPU             ";
            color(hConsole, 15);

            if (altura < 5) {
                by++;
            }

            for (int i = 0; i < cantMeteoritos; i++) {

                if ((meteorito[i] == true) && ((mx[i] + 2 * nx[i] == bx - 2 && my[i] + 2 * ny[i] == by) || (mx[i] + 2 * nx[i] == bx - 2 && my[i] + 2 * ny[i] == by + 1) || (mx[i] + 2 * nx[i] == bx - 1 && my[i] + 2 * ny[i] == by) || (mx[i] + 2 * nx[i] == bx - 1 && my[i] + 2 * ny[i] == by + 1) || (mx[i] + 2 * nx[i] == bx && my[i] + 2 * ny[i] == by) ||
                    (mx[i] + 2 * nx[i] == bx && my[i] + 2 * ny[i] == by + 1) || (mx[i] + 2 * nx[i] == bx + 1 && my[i] + 2 * ny[i] == by) || (mx[i] + 2 * nx[i] == bx + 1 && my[i] + 2 * ny[i] == by + 1) || (mx[i] + 2 * nx[i] == bx + 2 && my[i] + 2 * ny[i] == by) || (mx[i] + 2 * nx[i] == bx + 2 && my[i] + 2 * ny[i] == by + 1) ||
                    (mx[i] + 2 * nx[i] + 1 == bx - 2 && my[i] + 2 * ny[i] == by) || (mx[i] + 2 * nx[i] + 1 == bx - 2 && my[i] + 2 * ny[i] == by + 1) || (mx[i] + 2 * nx[i] + 1 == bx - 1 && my[i] + 2 * ny[i] == by) || (mx[i] + 2 * nx[i] + 1 == bx - 1 && my[i] + 2 * ny[i] == by + 1) || (mx[i] + 2 * nx[i] + 1 == bx && my[i] + 2 * ny[i] == by) ||
                    (mx[i] + 2 * nx[i] + 1 == bx && my[i] + 2 * ny[i] == by + 1) || (mx[i] + 2 * nx[i] + 1 == bx + 1 && my[i] + 2 * ny[i] == by) || (mx[i] + 2 * nx[i] + 1 == bx + 1 && my[i] + 2 * ny[i] == by + 1) || (mx[i] + 2 * nx[i] + 1 == bx + 2 && my[i] + 2 * ny[i] == by) || (mx[i] + 2 * nx[i] + 1 == bx + 2 && my[i] + 2 * ny[i] == by + 1))) {

                    by -= dy;
                    bx -= dx;

                    if (bx < 30) {
                        by += dy;
                        bx += dx;
                    }
                    else {

                        if ((meteorito[i] == true) && ((mx[i] - nx[i] == bx - 2 && my[i] + ny[i] == by) || (mx[i] - nx[i] == bx - 2 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] == bx - 1 && my[i] + ny[i] == by) || (mx[i] - nx[i] == bx - 1 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] == bx && my[i] + ny[i] == by) ||
                            (mx[i] - nx[i] == bx && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] == bx + 1 && my[i] + ny[i] == by) || (mx[i] - nx[i] == bx + 1 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] == bx + 2 && my[i] + ny[i] == by) || (mx[i] - nx[i] == bx + 2 && my[i] + ny[i] == by + 1) ||
                            (mx[i] - nx[i] + 1 == bx - 2 && my[i] + ny[i] == by) || (mx[i] - nx[i] + 1 == bx - 2 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] + 1 == bx - 1 && my[i] + ny[i] == by) || (mx[i] - nx[i] + 1 == bx - 1 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] + 1 == bx && my[i] + ny[i] == by) ||
                            (mx[i] - nx[i] + 1 == bx && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] + 1 == bx + 1 && my[i] + ny[i] == by) || (mx[i] - nx[i] + 1 == bx + 1 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] + 1 == bx + 2 && my[i] + ny[i] == by) || (mx[i] - nx[i] + 1 == bx + 2 && my[i] + ny[i] == by + 1))) {
                            by += dy;
                            bx += dx;
                            by += dy;
                            bx += dx;
                        }



                    }
                }

                if ((meteorito[i] == true) && ((mx[i] - nx[i] == bx - 2 && my[i] + ny[i] == by) || (mx[i] - nx[i] == bx - 2 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] == bx - 1 && my[i] + ny[i] == by) || (mx[i] - nx[i] == bx - 1 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] == bx && my[i] + ny[i] == by) ||
                    (mx[i] - nx[i] == bx && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] == bx + 1 && my[i] + ny[i] == by) || (mx[i] - nx[i] == bx + 1 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] == bx + 2 && my[i] + ny[i] == by) || (mx[i] - nx[i] == bx + 2 && my[i] + ny[i] == by + 1) ||
                    (mx[i] - nx[i] + 1 == bx - 2 && my[i] + ny[i] == by) || (mx[i] - nx[i] + 1 == bx - 2 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] + 1 == bx - 1 && my[i] + ny[i] == by) || (mx[i] - nx[i] + 1 == bx - 1 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] + 1 == bx && my[i] + ny[i] == by) ||
                    (mx[i] - nx[i] + 1 == bx && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] + 1 == bx + 1 && my[i] + ny[i] == by) || (mx[i] - nx[i] + 1 == bx + 1 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] + 1 == bx + 2 && my[i] + ny[i] == by) || (mx[i] - nx[i] + 1 == bx + 2 && my[i] + ny[i] == by + 1))) {

                    by -= dy;
                    bx -= dx;

                    if (bx < 30) {
                        by += dy;
                        bx += dx;
                    }
                    else {

                        if ((meteorito[i] == true) && ((mx[i] - nx[i] == bx - 2 && my[i] + ny[i] == by) || (mx[i] - nx[i] == bx - 2 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] == bx - 1 && my[i] + ny[i] == by) || (mx[i] - nx[i] == bx - 1 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] == bx && my[i] + ny[i] == by) ||
                            (mx[i] - nx[i] == bx && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] == bx + 1 && my[i] + ny[i] == by) || (mx[i] - nx[i] == bx + 1 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] == bx + 2 && my[i] + ny[i] == by) || (mx[i] - nx[i] == bx + 2 && my[i] + ny[i] == by + 1) ||
                            (mx[i] - nx[i] + 1 == bx - 2 && my[i] + ny[i] == by) || (mx[i] - nx[i] + 1 == bx - 2 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] + 1 == bx - 1 && my[i] + ny[i] == by) || (mx[i] - nx[i] + 1 == bx - 1 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] + 1 == bx && my[i] + ny[i] == by) ||
                            (mx[i] - nx[i] + 1 == bx && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] + 1 == bx + 1 && my[i] + ny[i] == by) || (mx[i] - nx[i] + 1 == bx + 1 && my[i] + ny[i] == by + 1) || (mx[i] - nx[i] + 1 == bx + 2 && my[i] + ny[i] == by) || (mx[i] - nx[i] + 1 == bx + 2 && my[i] + ny[i] == by + 1))) {
                            by += dy;
                            bx += dx;
                            by += dy;
                            bx += dx;
                        }



                    }
                }
            }
        }


        //imprimir nave

        imprimirNave(bx, by);

        //movimiento meteoritos

        for (int i = 0; i < cantMeteoritos; i++) {

            if (meteorito[i]) {
                //borrar
                borrarMeteoritos(mx[i], my[i]);

                if (mx[i] - nx[i] < 1 || my[i] + ny[i] > limiteAbajo) {
                    meteorito[i] = false;
                }

                //dibujar
                if (meteorito[i] == true) {
                    mx[i] -= nx[i];
                    my[i] += ny[i];
                    imprimirMeteoritos(mx[i], my[i], colorM[i]);
                }
            }
        }

        //colision nave meteoritos

        for (int i = 0; i < cantMeteoritos; i++)
        {
            //if nave tiene la misma cordenada de meteorito: restar una barra de estado - eliminar meteorito - imprimir nave con color rojo
            if ((meteorito[i] == true) && ((mx[i] == bx - 2 && my[i] == by) || (mx[i] == bx - 2 && my[i] == by + 1) || (mx[i] == bx - 1 && my[i] == by) || (mx[i] == bx - 1 && my[i] == by + 1) || (mx[i] == bx && my[i] == by) ||
                (mx[i] == bx && my[i] == by + 1) || (mx[i] == bx + 1 && my[i] == by) || (mx[i] == bx + 1 && my[i] == by + 1) || (mx[i] == bx + 2 && my[i] == by) || (mx[i] == bx + 2 && my[i] == by + 1) ||
                (mx[i] + 1 == bx - 2 && my[i] == by) || (mx[i] + 1 == bx - 2 && my[i] == by + 1) || (mx[i] + 1 == bx - 1 && my[i] == by) || (mx[i] + 1 == bx - 1 && my[i] == by + 1) || (mx[i] + 1 == bx && my[i] == by) ||
                (mx[i] + 1 == bx && my[i] == by + 1) || (mx[i] + 1 == bx + 1 && my[i] == by) || (mx[i] + 1 == bx + 1 && my[i] == by + 1) || (mx[i] + 1 == bx + 2 && my[i] == by) || (mx[i] + 1 == bx + 2 && my[i] == by + 1))) {

                estado--;
                meteorito[i] = false;
                borrarMeteoritos(mx[i], my[i]);

                color(hConsole, 4);
                imprimirNave(bx, by);
                color(hConsole, 15);

                _sleep(80);
            }


        }

        imprimirMarcadorPrimer();
        imprimirEstado(97, 1, estado);

        if (estado == 0) {
            perdio = true;
            break;
        }
        if (altura > 0)
            altura--;
        meteoritosActivos = 0;
        for (int i = 0; i < cantMeteoritos; i++)
        {
            if (meteorito[i]) {
                meteoritosActivos++;
            }
        }


        imprimirEstadisticas(97, 2, altura, limiteAbajo, by, meteoritosActivos, nombre);

        _sleep(40);


    }
    return perdio;

}

void imprimirCristal(int X, int Y) {
    color(hConsole, 99);
    Console::SetCursorPosition(X, Y - 1); cout << char(30);
    Console::SetCursorPosition(X, Y); cout << char(178);
    Console::SetCursorPosition(X, Y + 1); cout << char(31);
}

void imprimirMeteoritoSegunda(int x1, int y1, int colorM) {

    switch (colorM)
    {
    case 1:
        color(hConsole, 97);
        break;
    case 2:
        color(hConsole, 100);
        break;
    case 3:
        color(hConsole, 101);
        break;
    case 4:
        color(hConsole, 103);
        break;
    case 5:
        color(hConsole, 107);
        break;
    }

    Console::SetCursorPosition(x1, y1);           cout << char(177);
    Console::SetCursorPosition(x1 + 1, y1);       cout << char(177);
    Console::SetCursorPosition(x1 + 2, y1);       cout << char(177);
    Console::SetCursorPosition(x1, y1 + 1);       cout << char(177);
    Console::SetCursorPosition(x1 + 1, y1 + 1);   cout << char(177);
    Console::SetCursorPosition(x1 + 2, y1 + 1);   cout << char(177);
}

bool ejecutarSegundoNivel(int ALTO, int ANCHO, string nombre, bool modo, int& estadoTot) {

    imprimirSuelo(ANCHO, ALTO);

    int estado = estadoTot;

    //posicion de inicio
    int y = 10;
    int x = 4;

    //posicion actual Rover
    int bx, by;
    bx = x, by = y - 1;

    //velocidad Rover
    int dx = 2;
    int dy = 1;

    char tecla = ' ';

    imprimirNaveSegundo(2, 2);

    int meteoritoX[14];
    int meteoritoY[14];

    int colorM[14];

    int cristalX[5];
    int cristalY[5];
    bool cristales[5];

    for (int i = 0; i < 5; i++) {
        cristales[i] = true;
    }
    int perdio;
    cristalX[0] = 21;
    cristalY[0] = 3;

    cristalX[1] = 90;
    cristalY[1] = 2;

    cristalX[2] = 110;
    cristalY[2] = 10;

    cristalX[3] = 114;
    cristalY[3] = 24;

    cristalX[4] = 48;
    cristalY[4] = 23;

    meteoritoX[0] = 14;
    meteoritoY[0] = 21;

    int cantCristales = 5;

    colorM[0] = generarNumAleatorio(5, 1);

    meteoritoX[1] = 8;
    meteoritoY[1] = 13;
    colorM[1] = generarNumAleatorio(5, 1);

    meteoritoX[2] = 16;
    meteoritoY[2] = 26;
    colorM[2] = generarNumAleatorio(5, 1);

    meteoritoX[3] = 35;
    meteoritoY[3] = 15;
    colorM[3] = generarNumAleatorio(5, 1);

    meteoritoX[4] = 100;
    meteoritoY[4] = 27;
    colorM[4] = generarNumAleatorio(5, 1);

    meteoritoX[5] = 70;
    meteoritoY[5] = 18;
    colorM[5] = generarNumAleatorio(5, 1);

    meteoritoX[6] = 59;
    meteoritoY[6] = 7;
    colorM[6] = generarNumAleatorio(5, 1);

    meteoritoX[7] = 71;
    meteoritoY[7] = 4;
    colorM[7] = generarNumAleatorio(5, 1);

    meteoritoX[8] = 89;
    meteoritoY[8] = 18;
    colorM[8] = generarNumAleatorio(5, 1);

    meteoritoX[9] = 30;
    meteoritoY[9] = 22;
    colorM[9] = generarNumAleatorio(5, 1);

    meteoritoX[10] = 70;
    meteoritoY[10] = 25;
    colorM[10] = generarNumAleatorio(5, 1);

    meteoritoX[11] = 30;
    meteoritoY[11] = 4;
    colorM[11] = generarNumAleatorio(5, 1);

    meteoritoX[12] = 82;
    meteoritoY[12] = 15;
    colorM[12] = generarNumAleatorio(5, 1);

    meteoritoX[13] = 79;
    meteoritoY[13] = 28;
    colorM[13] = generarNumAleatorio(5, 1);

    for (int i = 0; i < 14; i++)
    {
        imprimirMeteoritoSegunda(meteoritoX[i], meteoritoY[i], colorM[i]);

    }

    imprimirMarcadorSegundo();


    while (true) {


        //imprimir cristal
        for (int i = 0; i < 5; i++)
        {
            if (cristales[i] == true) {
                imprimirCristal(cristalX[i], cristalY[i]);
            }
        }


        borrarRover(bx, by);

        if (kbhit()) {
            tecla = getch();

            if (tecla == ARRIBA && ((by - dy >= 0 && bx < 91) || (by - dy > 6)) && ((by - dy >= 0 && bx >= 10) || (by - dy > 5))) {
                by -= dy;
            }
            if (tecla == ABAJO && by + dy < 28) {
                by += dy;
            }
            if (tecla == IZQUIERDA && ((bx - dx >= 0 && by > 5) || (bx - dx >= 10))) {
                bx -= dx;
            }
            if (tecla == DERECHA && ((bx + dx < 115 && by > 6) || (bx + dx < 92))) {
                bx += dx;
            }

        }


        color(hConsole, 111);
        imprimirRover(bx, by);


        //colisiones
        for (int i = 0; i < 13; i++) {
            if ((bx == meteoritoX[i] && by == meteoritoY[i]) || (bx == meteoritoX[i] + 1 && by == meteoritoY[i]) || (bx == meteoritoX[i] + 2 && by == meteoritoY[i]) ||
                (bx == meteoritoX[i] && by == meteoritoY[i] + 1) || (bx == meteoritoX[i] + 1 && by == meteoritoY[i] + 1) || (bx == meteoritoX[i] + 2 && by == meteoritoY[i] + 1) ||

                (bx + 1 == meteoritoX[i] && by == meteoritoY[i]) || (bx + 1 == meteoritoX[i] + 1 && by == meteoritoY[i]) || (bx + 1 == meteoritoX[i] + 2 && by == meteoritoY[i]) ||
                (bx + 1 == meteoritoX[i] && by == meteoritoY[i] + 1) || (bx + 1 == meteoritoX[i] + 1 && by == meteoritoY[i] + 1) || (bx + 1 == meteoritoX[i] + 2 && by == meteoritoY[i] + 1) ||

                (bx + 4 == meteoritoX[i] && by == meteoritoY[i]) || (bx + 4 == meteoritoX[i] + 1 && by == meteoritoY[i]) || (bx + 4 == meteoritoX[i] + 2 && by == meteoritoY[i]) ||
                (bx + 4 == meteoritoX[i] && by == meteoritoY[i] + 1) || (bx + 4 == meteoritoX[i] + 1 && by == meteoritoY[i] + 1) || (bx + 4 == meteoritoX[i] + 2 && by == meteoritoY[i] + 1) ||

                (bx + 5 == meteoritoX[i] && by == meteoritoY[i]) || (bx + 5 == meteoritoX[i] + 1 && by == meteoritoY[i]) || (bx + dx + 5 == meteoritoX[i] + 2 && by == meteoritoY[i]) ||
                (bx + 5 == meteoritoX[i] && by == meteoritoY[i] + 1) || (bx + 5 == meteoritoX[i] + 1 && by == meteoritoY[i] + 1) || (bx + 5 == meteoritoX[i] + 2 && by == meteoritoY[i] + 1) ||


                (bx == meteoritoX[i] && by + 2 == meteoritoY[i]) || (bx == meteoritoX[i] + 1 && by + 2 == meteoritoY[i]) || (bx == meteoritoX[i] + 2 && by + 2 == meteoritoY[i]) ||
                (bx == meteoritoX[i] && by + 2 == meteoritoY[i] + 1) || (bx == meteoritoX[i] + 1 && by + 2 == meteoritoY[i] + 1) || (bx == meteoritoX[i] + 2 && by + 2 == meteoritoY[i] + 1) ||

                (bx + 1 == meteoritoX[i] && by + 2 == meteoritoY[i]) || (bx + 1 == meteoritoX[i] + 1 && by + 2 == meteoritoY[i]) || (bx + 1 == meteoritoX[i] + 2 && by + 2 == meteoritoY[i]) ||
                (bx + 1 == meteoritoX[i] && by + 2 == meteoritoY[i] + 1) || (bx + 1 == meteoritoX[i] + 1 && by + 2 == meteoritoY[i] + 1) || (bx + 1 == meteoritoX[i] + 2 && by + 2 == meteoritoY[i] + 1) ||

                (bx + 4 == meteoritoX[i] && by + 2 == meteoritoY[i]) || (bx + 4 == meteoritoX[i] + 1 && by + 2 == meteoritoY[i]) || (bx + 4 == meteoritoX[i] + 2 && by + 2 == meteoritoY[i]) ||
                (bx + 4 == meteoritoX[i] && by + 2 == meteoritoY[i] + 1) || (bx + 4 == meteoritoX[i] + 1 && by + 2 == meteoritoY[i] + 1) || (bx + 4 == meteoritoX[i] + 2 && by + 2 == meteoritoY[i] + 1) ||

                (bx + 5 == meteoritoX[i] && by + 2 == meteoritoY[i]) || (bx + 5 == meteoritoX[i] + 1 && by + 2 == meteoritoY[i]) || (bx + 5 == meteoritoX[i] + 2 && by + 2 == meteoritoY[i]) ||
                (bx + 5 == meteoritoX[i] && by + 2 == meteoritoY[i] + 1) || (bx + 5 == meteoritoX[i] + 1 && by + 2 == meteoritoY[i] + 1) || (bx + 5 == meteoritoX[i] + 2 && by + 2 == meteoritoY[i] + 1)

                ) {
                estado--;
                meteoritoX[i] = 0;
                meteoritoY[i] = 0;
                color(hConsole, 100);
                imprimirRover(bx, by);
                color(hConsole, 111);
                _sleep(100);

            }

            imprimirEstado(97, 1, estado);
        }


        if (estado == 0) {
            perdio = true;
            break;
        }

        if (((bx == 10 && by == 2) || (bx == 10 && by == 3) || (bx == 10 && by == 4) || (bx == 10 && by == 5) || (bx == 10 && by == 6) || (bx == 9 && by == 6) || (bx == 8 && by == 6) || (bx == 7 && by == 6) || (bx == 6 && by == 6) || (bx == 5 && by == 6) || (bx == 4 && by == 6) || (bx == 3 && by == 6) || (bx == 2 && by == 6)) && cantCristales == 0) {
            perdio = false;
            break;
        }


        for (int i = 0; i < 5; i++)
        {
            if ((bx == cristalX[i] && by == cristalY[i]) || (bx + 1 == cristalX[i] && by == cristalY[i]) || (bx + 4 == cristalX[i] && by == cristalY[i]) || (bx + 5 == cristalX[i] && by == cristalY[i]) ||
                (bx == cristalX[i] && by + 2 == cristalY[i]) || (bx + 1 == cristalX[i] && by + 2 == cristalY[i]) || (bx + 4 == cristalX[i] && by + 2 == cristalY[i]) || (bx + 5 == cristalX[i] && by + 2 == cristalY[i]))
            {
                cristalX[i] = 0;
                cristalY[i] = 0;

                cristales[i] = false;
                cantCristales--;
            }
        }


        imprimirEstadisticasSegundo(97, 2, 14, nombre, cantCristales);

        _sleep(40);
    }

    return perdio;
}


int main()
{

    Console::CursorVisible = false;
    srand(time(NULL));

    const int ALTO = 30;
    const int ANCHO = 120;

    Console::SetWindowSize(120, 30);

    int opcion;
    bool estadoSegundoNivel;
    inicio();

    do
    {
        clear();
        generarEstrellas(50);
        color(15); titulo(45, 0);
        int titleX = (screenWidth - 18) / 2;
        gotoxy(titleX, 15);
        cout << "<<MENU DEL JUEGO>>" << endl;

        int menuX = (screenWidth - 15) / 2;
        int menuY = 16;
        gotoxy(menuX, menuY);
        cout << "1. Jugar" << endl;

        gotoxy(menuX, menuY + 1);
        cout << "2. Instrucciones" << endl;

        gotoxy(menuX, menuY + 2);
        cout << "3. Creditos" << endl;

        gotoxy(menuX, menuY + 3);
        cout << "4. Salir" << endl;

        gotoxy(menuX, menuY + 5);
        cout << "Elija una opcion: ";
        opcion = readInt();

        bool modoCPU;
        int opc2;
        string nombre;
        int estadoTot = 5;
        switch (opcion)
        {
        case 1:
            clear();
            imprimirCielo(120, 30);
            color(hConsole, 111);
            gotoxy(50, 10);
            cout << "1. Jugar juego";
            gotoxy(50, 15);
            cout << "2. Ver simulacion";
            gotoxy(50, 18);
            cout << "Seleccione opcion: ";
            opc2 = readInt();

            if (opc2 == 1) {
                gotoxy(50, 22);
                cout << "Digite su nombre: ";
                readWord(nombre);
                modoCPU = false;
                bool estadoPrimerNivel = ejecutarPrimerNivel(ALTO, ANCHO, nombre, modoCPU, estadoTot);
                if (!estadoPrimerNivel) {
                    estadoSegundoNivel = ejecutarSegundoNivel(ALTO, ANCHO, nombre, modoCPU, estadoTot);
                }
                else {
                    break;
                }
                if (!estadoSegundoNivel) {
                    imprimirCielo(120, 30);
                    gotoxy(55, 15);
                    cout << "Ganaste!!";
                }

            }
            else {
                modoCPU = true;
                nombre = "NASA";
                bool estadoPrimerNivel = ejecutarPrimerNivel(ALTO, ANCHO, nombre, modoCPU, estadoTot);
                if (!estadoPrimerNivel) {
                    estadoSegundoNivel = ejecutarSegundoNivel(ALTO, ANCHO, nombre, modoCPU, estadoTot);
                }
                else {
                    break;
                }
                if (!estadoSegundoNivel) {
                    imprimirCielo(120, 30);
                    gotoxy(55, 15);
                    cout << "Ganaste!!";
                }
            }
            break;
        case 2:
            clear();
            mostrarInstrucciones();

            break;
        case 3:
            clear();
            mostrarCreditos();
            break;
        case 4:
            clear();
            mostrarSalida();
            break;
        default:
            cout << "Opción no válida. Por favor, seleccione una opción válida." << endl;
            getch();
            break;
        }
    } while (opcion != 4);

    return 0;
}