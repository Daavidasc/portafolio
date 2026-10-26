#include "compat.h"
#include "iostream"
#include <time.h>
#include <stdlib.h>

#define color SetConsoleTextAttribute
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

using namespace std;


//config de pantalla
void configurar_ventana() {
    Console::SetWindowSize(105, 30);
    Console::CursorVisible = false;
}

void gotoxy(int x, int y) {
    Console::SetCursorPosition(x, y);
}

// limpia la pantalla
void clear() {
    Console::Clear();
}

//imprime le mensaje letra por letra
void msj(const string& mensaje) {

    for (int i = 0; i < mensaje.length(); i++) {
        i += compat::putUtf8(mensaje, i) - 1;
        cout.flush(); // Vacía el búfer de salida para que se imprima inmediatamente

        // Espera 60 milisegundos antes de imprimir la siguiente letra
       _sleep(60);
    }
}

//borra las cartas del jugador anterior
void borrarCartas() {
    int x = 5, y = 18;
    color(hConsole, 174);
    Console::SetCursorPosition(x, y); cout << "                                                                                               ";
    Console::SetCursorPosition(x, y + 1); cout << "                                                                                               ";
    Console::SetCursorPosition(x, y + 2); cout << "                                                                                               ";
    Console::SetCursorPosition(x, y + 3); cout << "                                                                                               ";
    Console::SetCursorPosition(x, y + 4); cout << "                                                                                               ";
    Console::SetCursorPosition(x, y + 5); cout << "                                                                                               ";
    Console::SetCursorPosition(x, y + 6); cout << "                                                                                               ";
    Console::SetCursorPosition(x, y + 7); cout << "                                                                                               ";
}

//calcula cordenada x de primera carta dependinedo de la cantidad de cartas en el tablero
int calcularPuntoX(int cantCartasj1) {
    int puntoX;
    switch (cantCartasj1) {
    case 1:
        puntoX = 47;
        break;
    case 2:
        puntoX = 41;
        break;
    case 3:
        puntoX = 35;
        break;
    case 4:
        puntoX = 29;
        break;
    case 5:
        puntoX = 23;
        break;
    case 6:
        puntoX = 17;
        break;
    case 7:
        puntoX = 11;
        break;
    case 8:
        puntoX = 5;
        break;

    }


    return puntoX;
}

int generarNumAleatorio(int Max, int Min) {
    int nume = rand() % (Max + 1 - Min) + Min;
    return nume;
};

int contarCartas(int carta_1, int carta_2, int carta_3, int carta_4, int carta_5, int carta_6, int carta_7, int carta_8) {
    int cont = 0;
    if (carta_1 != 0) cont++;
    if (carta_2 != 0) cont++;
    if (carta_3 != 0) cont++;
    if (carta_4 != 0) cont++;
    if (carta_5 != 0) cont++;
    if (carta_6 != 0) cont++;
    if (carta_7 != 0) cont++;
    if (carta_8 != 0) cont++;
    return cont;

}

void graficarCarta(int x, int y, int numero, int simbolo) {

    //graficar carta vacia

    color(hConsole, 244);

    Console::SetCursorPosition(x, y); cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
    Console::SetCursorPosition(x, y + 1); cout << char(186);
    Console::SetCursorPosition(x, y + 2); cout << char(186);
    Console::SetCursorPosition(x, y + 3); cout << char(186);
    Console::SetCursorPosition(x, y + 4); cout << char(186);
    Console::SetCursorPosition(x, y + 5); cout << char(186);
    Console::SetCursorPosition(x, y + 6); cout << char(186);

    Console::SetCursorPosition(x + 1, y + 1); cout << "         ";
    Console::SetCursorPosition(x + 1, y + 2); cout << "         ";
    Console::SetCursorPosition(x + 1, y + 3); cout << "         ";
    Console::SetCursorPosition(x + 1, y + 4); cout << "         ";
    Console::SetCursorPosition(x + 1, y + 5); cout << "         ";
    Console::SetCursorPosition(x + 1, y + 6); cout << "         ";

    Console::SetCursorPosition(x + 10, y + 1); cout << char(186);
    Console::SetCursorPosition(x + 10, y + 2); cout << char(186);
    Console::SetCursorPosition(x + 10, y + 3); cout << char(186);
    Console::SetCursorPosition(x + 10, y + 4); cout << char(186);
    Console::SetCursorPosition(x + 10, y + 5); cout << char(186);
    Console::SetCursorPosition(x + 10, y + 6); cout << char(186);

    Console::SetCursorPosition(x, y + 7); cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);


    //graficar numero 

    color(hConsole, 15);

    switch (numero) {
    case 0:
        //carta reverso 
        color(hConsole, 244);

        Console::SetCursorPosition(x + 1, y + 1); cout << char(178);
        Console::SetCursorPosition(x + 1, y + 2); cout << char(178);
        Console::SetCursorPosition(x + 1, y + 3); cout << char(178);
        Console::SetCursorPosition(x + 1, y + 4); cout << char(178);
        Console::SetCursorPosition(x + 1, y + 5); cout << char(178);
        Console::SetCursorPosition(x + 1, y + 6); cout << char(178);
        Console::SetCursorPosition(x + 2, y + 1); cout << char(178);
        Console::SetCursorPosition(x + 2, y + 2); cout << char(178);
        Console::SetCursorPosition(x + 2, y + 3); cout << char(178);
        Console::SetCursorPosition(x + 2, y + 4); cout << char(178);
        Console::SetCursorPosition(x + 2, y + 5); cout << char(178);
        Console::SetCursorPosition(x + 2, y + 6); cout << char(178);
        Console::SetCursorPosition(x + 3, y + 1); cout << char(178);
        Console::SetCursorPosition(x + 3, y + 2); cout << char(178);
        Console::SetCursorPosition(x + 3, y + 3); cout << char(178);
        Console::SetCursorPosition(x + 3, y + 4); cout << char(178);
        Console::SetCursorPosition(x + 3, y + 5); cout << char(178);
        Console::SetCursorPosition(x + 3, y + 6); cout << char(178);
        Console::SetCursorPosition(x + 4, y + 1); cout << char(178);
        Console::SetCursorPosition(x + 4, y + 2); cout << char(178);
        Console::SetCursorPosition(x + 4, y + 3); cout << char(178);
        Console::SetCursorPosition(x + 4, y + 4); cout << char(178);
        Console::SetCursorPosition(x + 4, y + 5); cout << char(178);
        Console::SetCursorPosition(x + 4, y + 6); cout << char(178);
        Console::SetCursorPosition(x + 5, y + 1); cout << char(178);
        Console::SetCursorPosition(x + 5, y + 2); cout << char(178);
        Console::SetCursorPosition(x + 5, y + 3); cout << char(178);
        Console::SetCursorPosition(x + 5, y + 4); cout << char(178);
        Console::SetCursorPosition(x + 5, y + 5); cout << char(178);
        Console::SetCursorPosition(x + 5, y + 6); cout << char(178);
        Console::SetCursorPosition(x + 6, y + 1); cout << char(178);
        Console::SetCursorPosition(x + 6, y + 2); cout << char(178);
        Console::SetCursorPosition(x + 6, y + 3); cout << char(178);
        Console::SetCursorPosition(x + 6, y + 4); cout << char(178);
        Console::SetCursorPosition(x + 6, y + 5); cout << char(178);
        Console::SetCursorPosition(x + 6, y + 6); cout << char(178);
        Console::SetCursorPosition(x + 7, y + 1); cout << char(178);
        Console::SetCursorPosition(x + 7, y + 2); cout << char(178);
        Console::SetCursorPosition(x + 7, y + 3); cout << char(178);
        Console::SetCursorPosition(x + 7, y + 4); cout << char(178);
        Console::SetCursorPosition(x + 7, y + 5); cout << char(178);
        Console::SetCursorPosition(x + 7, y + 6); cout << char(178);
        Console::SetCursorPosition(x + 8, y + 1); cout << char(178);
        Console::SetCursorPosition(x + 8, y + 2); cout << char(178);
        Console::SetCursorPosition(x + 8, y + 3); cout << char(178);
        Console::SetCursorPosition(x + 8, y + 4); cout << char(178);
        Console::SetCursorPosition(x + 8, y + 5); cout << char(178);
        Console::SetCursorPosition(x + 8, y + 6); cout << char(178);
        Console::SetCursorPosition(x + 9, y + 1); cout << char(178);
        Console::SetCursorPosition(x + 9, y + 2); cout << char(178);
        Console::SetCursorPosition(x + 9, y + 3); cout << char(178);
        Console::SetCursorPosition(x + 9, y + 4); cout << char(178);
        Console::SetCursorPosition(x + 9, y + 5); cout << char(178);
        Console::SetCursorPosition(x + 9, y + 6); cout << char(178);
        break;
    case 1:

        Console::SetCursorPosition(x + 5, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 4, y + 2); cout << char(220);
        Console::SetCursorPosition(x + 5, y + 2); cout << " ";

        Console::SetCursorPosition(x + 5, y + 3); cout << " ";
        Console::SetCursorPosition(x + 4, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 4); cout << " ";
        break;
    case 2:
        Console::SetCursorPosition(x + 6, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 4, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 3, y + 2); cout << " ";
        Console::SetCursorPosition(x + 7, y + 2); cout << " ";
        Console::SetCursorPosition(x + 5, y + 3); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 3); cout << char(220);
        Console::SetCursorPosition(x + 4, y + 3); cout << char(223);
        Console::SetCursorPosition(x + 4, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 3, y + 4); cout << " ";
        Console::SetCursorPosition(x + 5, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 7, y + 4); cout << char(223);
        break;
    case 3:
        Console::SetCursorPosition(x + 3, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 4, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 7, y + 2); cout << " ";

        Console::SetCursorPosition(x + 4, y + 1 + 2); cout << char(220);
        Console::SetCursorPosition(x + 5, y + 1 + 2); cout << char(220);
        Console::SetCursorPosition(x + 6, y + 1 + 2); cout << char(220);
        Console::SetCursorPosition(x + 7, y + 1 + 2); cout << char(223);

        Console::SetCursorPosition(x + 7, y + 1 + 3); cout << char(220);

        Console::SetCursorPosition(x + 3, y + 1 + 3); cout << char(223);
        Console::SetCursorPosition(x + 4, y + 1 + 3); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 1 + 3); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 1 + 3); cout << char(223);




        break;
    case 4:
        Console::SetCursorPosition(x + 3, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 3, y + 2); cout << " ";

        Console::SetCursorPosition(x + 7, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 7, y + 2); cout << " ";

        Console::SetCursorPosition(x + 7, y + 3); cout << " ";
        Console::SetCursorPosition(x + 5, y + 3); cout << char(220);
        Console::SetCursorPosition(x + 4, y + 3); cout << char(220);
        Console::SetCursorPosition(x + 3, y + 3); cout << char(220);

        Console::SetCursorPosition(x + 6, y + 3); cout << char(220);
        Console::SetCursorPosition(x + 7, y + 4); cout << " ";

        break;

    case 5:
        Console::SetCursorPosition(x + 3, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 4, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 7, y + 1); cout << char(223);

        Console::SetCursorPosition(x + 3, y + 2); cout << " ";

        Console::SetCursorPosition(x + 4, y + 3); cout << char(220);
        Console::SetCursorPosition(x + 5, y + 3); cout << char(220);
        Console::SetCursorPosition(x + 6, y + 3); cout << char(220);
        Console::SetCursorPosition(x + 7, y + 3); cout << char(223);

        Console::SetCursorPosition(x + 7, y + 4); cout << char(220);
        Console::SetCursorPosition(x + 3, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 4, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 4); cout << char(223);

        break;

    case 6:
        Console::SetCursorPosition(x + 4, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 1); cout << char(223);


        Console::SetCursorPosition(x + 3, y + 2); cout << " ";
        Console::SetCursorPosition(x + 7, y + 2); cout <<char(220);


        Console::SetCursorPosition(x + 4, y + 3); cout << char(220);
        Console::SetCursorPosition(x + 5, y + 3); cout << char(220);
        Console::SetCursorPosition(x + 6, y + 3); cout << char(220);
        Console::SetCursorPosition(x + 7, y + 3); cout << char(223);

        Console::SetCursorPosition(x + 3, y + 3); cout << " ";

        Console::SetCursorPosition(x + 3, y + 4); cout << char(220);
        Console::SetCursorPosition(x + 4, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 7, y + 4); cout << char(220);


        break;
    case 7:
        Console::SetCursorPosition(x + 3, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 4, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 7, y + 1); cout << char(223);

        Console::SetCursorPosition(x + 6, y + 2); cout << char(223);
        Console::SetCursorPosition(x + 7, y + 2); cout << char(220);

        Console::SetCursorPosition(x + 5, y + 3); cout << " ";
        Console::SetCursorPosition(x + 5, y + 4); cout << " ";

        break;
    case 8:

        Console::SetCursorPosition(x + 4, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 1); cout << char(223);


        Console::SetCursorPosition(x + 3, y + 2); cout << " ";
        Console::SetCursorPosition(x + 7, y + 2); cout << " ";


        Console::SetCursorPosition(x + 4, y + 3); cout << char(220);
        Console::SetCursorPosition(x + 5, y + 3); cout << char(220);
        Console::SetCursorPosition(x + 6, y + 3); cout << char(220);

        Console::SetCursorPosition(x + 3, y + 3); cout << char(223);
        Console::SetCursorPosition(x + 7, y + 3); cout << char(223);

        Console::SetCursorPosition(x + 4, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 3, y + 4); cout << char(220);
        Console::SetCursorPosition(x + 7, y + 4); cout << char(220);


        break;
    case 9:
        Console::SetCursorPosition(x + 4, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 1); cout << char(223);


        Console::SetCursorPosition(x + 3, y + 2); cout << " ";
        Console::SetCursorPosition(x + 7, y + 2); cout << " ";


        Console::SetCursorPosition(x + 4, y + 3); cout << char(220);
        Console::SetCursorPosition(x + 5, y + 3); cout << char(220);
        Console::SetCursorPosition(x + 6, y + 3); cout << char(220);

        Console::SetCursorPosition(x + 7, y + 3); cout << " ";

        Console::SetCursorPosition(x + 3, y + 4); cout << char(220);
        Console::SetCursorPosition(x + 4, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 7, y + 4); cout << char(220);


        break;
    case 10:
        Console::SetCursorPosition(x + 3, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 7, y + 1); cout << char(223);
       

        Console::SetCursorPosition(x + 3, y + 2); cout << " ";

        Console::SetCursorPosition(x + 5, y + 2); cout << " ";
        Console::SetCursorPosition(x + 7, y + 2); cout << " ";

        Console::SetCursorPosition(x + 3, y + 3); cout << " ";
        Console::SetCursorPosition(x + 5, y + 3); cout << " ";
        Console::SetCursorPosition(x + 7, y + 3); cout << " ";

       
        Console::SetCursorPosition(x + 3, y + 4); cout << " ";
        Console::SetCursorPosition(x + 5, y + 4); cout << " ";
        Console::SetCursorPosition(x + 6, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 7, y + 4); cout << " ";


        break;
    case 11:

        Console::SetCursorPosition(x + 4, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 7, y + 1); cout << char(223);

        Console::SetCursorPosition(x + 6, y + 2); cout <<" ";
        Console::SetCursorPosition(x + 6, y + 3); cout << " ";
        Console::SetCursorPosition(x + 4, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 3, y + 4); cout << char(220);
        Console::SetCursorPosition(x + 6, y + 4); cout << char(220);



        break;
    case 12:
        Console::SetCursorPosition(x + 4, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 1); cout << char(223);

        Console::SetCursorPosition(x + 3, y + 2); cout << " ";
        Console::SetCursorPosition(x + 7, y + 2); cout << " ";
        Console::SetCursorPosition(x + 3, y + 3); cout << " ";
        Console::SetCursorPosition(x + 5, y + 3); cout << char(223);
        Console::SetCursorPosition(x + 7, y + 3); cout << " ";

        Console::SetCursorPosition(x + 3, y + 4); cout << char(220);
        Console::SetCursorPosition(x + 4, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 4); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 4); cout << char(220);
        Console::SetCursorPosition(x + 7, y + 4); cout << char(223);

        break;
    case 13:
        Console::SetCursorPosition(x + 3, y + 1); cout << char(223);
        Console::SetCursorPosition(x + 6, y + 1); cout << char(223);

        Console::SetCursorPosition(x + 7, y + 1); cout << char(223);

        Console::SetCursorPosition(x + 6, y + 2); cout << char(220);
        Console::SetCursorPosition(x + 3, y + 2); cout << " ";
        Console::SetCursorPosition(x + 4, y + 2); cout << char(223);;
        Console::SetCursorPosition(x + 5, y + 2); cout << " ";


        Console::SetCursorPosition(x + 3, y + 3); cout << " ";
        Console::SetCursorPosition(x + 4, y + 3); cout << char(220);
        Console::SetCursorPosition(x + 6, y + 3); cout << char(223);
        Console::SetCursorPosition(x + 5, y + 3); cout << " ";

        Console::SetCursorPosition(x + 3, y + 4); cout << " ";

        Console::SetCursorPosition(x + 6, y + 4); cout << char(220);
        Console::SetCursorPosition(x + 7, y + 4); cout << " ";


        break;

    }

    //grafica simbolo

    switch (simbolo) {
    case 0:
        break;
    case 1:
        Console::SetCursorPosition(x + 5, y + 6); color(hConsole, 244);
        cout << char(3);
        break;
    case 2:
        Console::SetCursorPosition(x + 5, y + 6); color(hConsole, 244);
        cout << char(4);
        break;
    case 3:
        Console::SetCursorPosition(x + 5, y + 6);  color(hConsole, 240);
        cout << char(5);
        break;
    case 4:
        Console::SetCursorPosition(x + 5, y + 6);  color(hConsole, 240);
        cout << char(6);
        break;
    }

}

void borrartablero() {
    color(hConsole, 174);

    for (int i = 1; i < 104; i++)
    {
        for (int m = 1; m < 29; m++)
        {
            Console::SetCursorPosition(i, m);
            cout << " ";
        }
    }

    for (int i = 0; i < 105; i++)
    {

        color(hConsole, 240);
        Console::SetCursorPosition(i, 0);
        cout << " ";
        Console::SetCursorPosition(i, 29);
        cout << " ";

        i++;
        color(hConsole, 1);
        Console::SetCursorPosition(i, 0);
        cout << " ";
        Console::SetCursorPosition(i, 29);
        cout << " ";

        i++;
        color(hConsole, 64);
        Console::SetCursorPosition(i, 0);
        cout << " ";
        Console::SetCursorPosition(i, 29);
        cout << " ";
    }

    for (int i = 0; i < 30; i++)
    {

        color(hConsole, 240);
        Console::SetCursorPosition(0, i);
        cout << " ";
        Console::SetCursorPosition(104, i);
        cout << " ";

        i++;
        color(hConsole, 1);
        Console::SetCursorPosition(0, i);
        cout << " ";
        Console::SetCursorPosition(104, i);
        cout << " ";

        i++;
        color(hConsole, 64);
        Console::SetCursorPosition(0, i);
        cout << " ";
        Console::SetCursorPosition(104, i);
        cout << " ";

    }

    color(hConsole, 6);
    Console::SetCursorPosition(0, 0);
    cout << char(201);


    Console::SetCursorPosition(0, 29);
    cout << char(200);

    Console::SetCursorPosition(104, 0);
    cout << char(187);


    Console::SetCursorPosition(104, 29);
    cout << char(188);

}

void mostrar_salida() {
    borrartablero();
    color(hConsole, 172);
    gotoxy(5, 3);  cout << "  @@@@@@@@@@@@@@@@@@@@@@@@@@@ ";   gotoxy(69, 3);  cout << "  @@@@@@@@@@@@@@@@@@@@@@@@@@@ ";
    gotoxy(5, 4);  cout << "  @@%*@@@@@@@@@@@@@@@@@@@@@@@ ";   gotoxy(69, 4);  cout << "  @@%*@@@@@@@@@@@@@@@@@@@@@@@ ";
    gotoxy(5, 5);  cout << "  @@%#@@@@@@@@@@@@@@@@@@@@@@@ ";   gotoxy(69, 5);  cout << "  @@%#@@@@@@@@@@@@@@@@@@@@@@@ ";
    gotoxy(5, 6);  cout << "  @@#-@@@@@@@@@@@@@@@@@@@@@@@ ";   gotoxy(69, 6);  cout << "  @@#-@@@@@@@@@@@@@@@@@@@@@@@ ";
    gotoxy(5, 7);  cout << "  @@@+@@@@@@@@@@@@@@@@@@@@@@@ ";   gotoxy(69, 7);  cout << "  @@@+@@@@@@@@@@@@@@@@@@@@@@@ ";
    gotoxy(5, 8);  cout << "  @@@@@@@@@@@@@@@@@@@@@@@@@@@ ";   gotoxy(69, 8);  cout << "  @@@@@@@@@@@@@@@@@@@@@@@@@@@ ";
    gotoxy(5, 9);  cout << "  @@@@@@@@@@@@@ @@@@@@@@@@@@@ ";   gotoxy(69, 9);  cout << "  @@@@@@@@@@@@@ @@@@@@@@@@@@@ ";
    gotoxy(5, 10); cout << "  @@@@@@@@@@@@   @@@@@@@@@@@@ ";   gotoxy(69, 10); cout << "  @@@@@@@@@@@@   @@@@@@@@@@@@ ";
    gotoxy(5, 11); cout << "  @@@@@@@@@@@     @@@@@@@@@@@ ";   gotoxy(69, 11); cout << "  @@@@@@@@@@@     @@@@@@@@@@@ ";
    gotoxy(5, 12); cout << "  @@@@@@@@@@       @@@@@@@@@@ ";   gotoxy(69, 12); cout << "  @@@@@@@@@@       @@@@@@@@@@ ";
    gotoxy(5, 13); cout << "  @@@@@@@@@@@     @@@@@@@@@@@ ";   gotoxy(69, 13); cout << "  @@@@@@@@@@@     @@@@@@@@@@@ ";
    gotoxy(5, 14); cout << "  @@@@@@@@@@@@   @@@@@@@@@@@@ ";   gotoxy(69, 14); cout << "  @@@@@@@@@@@@   @@@@@@@@@@@@ ";
    gotoxy(5, 15); cout << "  @@@@@@@@@@@@@ @@@@@@@@@@@@@ ";   gotoxy(69, 15); cout << "  @@@@@@@@@@@@@ @@@@@@@@@@@@@ ";
    gotoxy(5, 16); cout << "  @@@@@@@@@@@@@@@@@@@@@@@@@@@ ";   gotoxy(69, 16); cout << "  @@@@@@@@@@@@@@@@@@@@@@@@@@@ ";
    gotoxy(5, 17); cout << "  @@@@@@@@@@@@@@@@@@@@@@@@%@@ ";   gotoxy(69, 17); cout << "  @@@@@@@@@@@@@@@@@@@@@@@@%@@ ";
    gotoxy(5, 18); cout << "  @@@@@@@@@@@@@@@@@@@@@@@=-@@ ";   gotoxy(69, 18); cout << "  @@@@@@@@@@@@@@@@@@@@@@@=-@@ ";
    gotoxy(5, 19); cout << "  @@@@@@@@@@@@@@@@@@@@@@@*@+@ ";   gotoxy(69, 19); cout << "  @@@@@@@@@@@@@@@@@@@@@@@*@+@ ";
    gotoxy(5, 20); cout << "  @@@@@@@@@@@@@@@@@@@@@@@@=@@ ";   gotoxy(69, 20); cout << "  @@@@@@@@@@@@@@@@@@@@@@@@=@@ ";
    gotoxy(5, 21); cout << "  @@@@@@@@@@@@@@@@@@@@@@@@@@@ ";   gotoxy(69, 21); cout << "  @@@@@@@@@@@@@@@@@@@@@@@@@@@ ";


    gotoxy(40, 15);  msj("¡Muchas gracias por jugar!");

    gotoxy(35, 23); cout << "<Presione cualquier tecla para salir>";
    system("pause>0");
}

void mostrar_animacion() {
    color(hConsole, 244);
    int a;

    int x = 37, y = 7;
    //1
    Console::SetCursorPosition(x, y); cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
    Console::SetCursorPosition(x, y + 1); cout << char(186) << "         " << char(186);
    Console::SetCursorPosition(x, y + 2); cout << char(186) << "         " << char(186);
    Console::SetCursorPosition(x, y + 3); cout << char(186) << "         " << char(186);
    Console::SetCursorPosition(x, y + 4); cout << char(186) << "         " << char(186);
    Console::SetCursorPosition(x, y + 5); cout << char(186) << "         " << char(186);
    Console::SetCursorPosition(x, y + 6); cout << char(186) << "         " << char(186);
    Console::SetCursorPosition(x, y + 7); cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);

    _sleep(100);

    color(hConsole, 174);

    Console::SetCursorPosition(x, y);  cout << "           ";
    Console::SetCursorPosition(x, y + 1);  cout << "           ";
    Console::SetCursorPosition(x, y + 2);  cout << "           ";
    Console::SetCursorPosition(x, y + 3);  cout << "           ";
    Console::SetCursorPosition(x, y + 4);  cout << "           ";
    Console::SetCursorPosition(x, y + 5);  cout << "           ";
    Console::SetCursorPosition(x, y + 6);  cout << "           ";
    Console::SetCursorPosition(x, y + 7);  cout << "           ";


    color(hConsole, 244);
    //2
    graficarCarta(37, 7, 0, 0);
    Console::SetCursorPosition(x + 1, y - 1); cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(187) << " ";
    Console::SetCursorPosition(x + 1, y); cout << char(186) << "     " << char(205) << char(205) << char(205) << char(205) << char(187);
    Console::SetCursorPosition(x + 1, y + 1); cout << char(186) << "         " << char(186);
    Console::SetCursorPosition(x + 1, y + 2); cout << char(186) << "         " << char(186);
    Console::SetCursorPosition(x + 1, y + 3); cout << char(186) << "         " << char(186);
    Console::SetCursorPosition(x + 1, y + 4); cout << char(186) << "         " << char(186);
    Console::SetCursorPosition(x + 1, y + 5); cout << char(186) << "         " << char(186);
    Console::SetCursorPosition(x + 1, y + 6); cout << char(200) << char(205) << char(205) << char(205) << char(187) << "     " << char(186);
    Console::SetCursorPosition(x + 1 + 4, y + 7); cout << " " << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);

    _sleep(100);

    color(hConsole, 174);

    Console::SetCursorPosition(1 + x, y - 1);   cout << "                ";
    Console::SetCursorPosition(1 + x, y);  cout << "                ";
    Console::SetCursorPosition(1 + x, y + 1);  cout << "                ";
    Console::SetCursorPosition(1 + x, y + 2);  cout << "                ";
    Console::SetCursorPosition(1 + x, y + 3);  cout << "                ";
    Console::SetCursorPosition(1 + x, y + 4);  cout << "                ";
    Console::SetCursorPosition(1 + x, y + 5);  cout << "                ";
    Console::SetCursorPosition(1 + x, y + 6);  cout << "           ";
    Console::SetCursorPosition(1 + x + 4, y + 7);  cout << "       ";

    color(hConsole, 244);
    //3
    graficarCarta(37, 7, 0, 0);
    Console::SetCursorPosition(2 + x + 1, y - 2);  cout << char(201) << char(205) << char(205) << " ";
    Console::SetCursorPosition(2 + x + 1, y - 1);  cout << char(186) << "  " << char(200) << char(205) << char(205) << char(187);
    Console::SetCursorPosition(2 + x + 1, y);  cout << char(186) << "      " << char(205) << char(205) << char(187);
    Console::SetCursorPosition(2 + x + 1, y + 1);  cout << char(186) << "        " << char(186);
    Console::SetCursorPosition(2 + x + 1, y + 2);  cout << char(186) << "        " << char(186);
    Console::SetCursorPosition(2 + x + 1, y + 3);  cout << char(186) << "        " << char(186);
    Console::SetCursorPosition(2 + x + 1, y + 4); cout << char(186) << "        " << char(186);
    Console::SetCursorPosition(2 + x + 1, y + 5);  cout << char(200) << char(205) << "       " << char(186);
    Console::SetCursorPosition(2 + x + 3, y + 6); cout << char(200) << char(205) << char(205) << char(187) << "   " << char(186);
    Console::SetCursorPosition(2 + x + 6, y + 7); cout << " " << char(205) << char(205) << char(205) << char(188);

    _sleep(150);

    color(hConsole, 174);
    Console::SetCursorPosition(2 + x, y - 2);   cout << "                 ";
    Console::SetCursorPosition(2 + x, y - 1);   cout << "                 ";
    Console::SetCursorPosition(2 + x, y);  cout << "                 ";
    Console::SetCursorPosition(2 + x, y + 1);  cout << "                 ";
    Console::SetCursorPosition(2 + x, y + 2);  cout << "                 ";
    Console::SetCursorPosition(2 + x, y + 3);  cout << "                 ";
    Console::SetCursorPosition(2 + x, y + 4);  cout << "                 ";
    Console::SetCursorPosition(2 + x, y + 5);  cout << "                 ";
    Console::SetCursorPosition(2 + x + 2, y + 6);  cout << "                 ";
    Console::SetCursorPosition(2 + x + 2, y + 7);  cout << "                 ";
    color(hConsole, 244);

    //4
    graficarCarta(37, 7, 0, 0);
    Console::SetCursorPosition(3 + x + 3, y - 3); cout << char(201) << char(205) << " ";
    Console::SetCursorPosition(3 + x + 3, y - 2); cout << char(186) << " " << char(200) << char(187) << " ";
    Console::SetCursorPosition(3 + x + 3, y - 1); cout << char(186) << "   " << char(200) << char(205) << " ";
    Console::SetCursorPosition(3 + x + 3, y); cout << char(186) << "     " << char(200) << char(187);
    Console::SetCursorPosition(3 + x + 3, y + 1); cout << char(186) << "      " << char(186);
    Console::SetCursorPosition(3 + x + 3, y + 2); cout << char(186) << "      " << char(186);
    Console::SetCursorPosition(3 + x + 3, y + 3); cout << char(186) << "      " << char(186);
    Console::SetCursorPosition(3 + x + 3, y + 4); cout << char(200) << char(187) << "     " << char(186);
    Console::SetCursorPosition(3 + x + 4, y + 5); cout << " " << char(205) << char(187) << "   " << char(186);
    Console::SetCursorPosition(3 + x + 6, y + 6); cout << " " << char(200) << char(187) << " " << char(186);
    Console::SetCursorPosition(3 + x + 8, y + 7); cout << " " << char(205) << char(188);
    _sleep(150);


    color(hConsole, 174);
    Console::SetCursorPosition(3 + x, y - 3);   cout << "                ";
    Console::SetCursorPosition(3 + x, y - 2);   cout << "                ";
    Console::SetCursorPosition(3 + x, y - 1);   cout << "                ";
    Console::SetCursorPosition(3 + x, y);  cout << "                ";
    Console::SetCursorPosition(3 + x, y + 1);  cout << "                ";
    Console::SetCursorPosition(3 + x, y + 2);  cout << "                ";
    Console::SetCursorPosition(3 + x, y + 3);  cout << "                ";
    Console::SetCursorPosition(3 + x, y + 4);  cout << "                ";
    Console::SetCursorPosition(3 + x, y + 5);  cout << "                   ";
    Console::SetCursorPosition(3 + x + 6, y + 6);  cout << "     ";
    Console::SetCursorPosition(3 + x + 8, y + 7);  cout << "   ";
    color(hConsole, 244);

    //5
    graficarCarta(37, 7, 0, 0);
    Console::SetCursorPosition(4 + x + 5, y - 4); cout << char(201) << char(187);
    Console::SetCursorPosition(4 + x + 5, y - 3); cout << char(186) << " " << char(187);
    Console::SetCursorPosition(4 + x + 5, y - 2); cout << char(186) << "  " << char(186);
    Console::SetCursorPosition(4 + x + 5, y - 1); cout << char(186) << "   " << char(187);
    Console::SetCursorPosition(4 + x + 5, y); cout << char(186) << "    " << char(187);
    Console::SetCursorPosition(4 + x + 5, y + 1); cout << char(186) << "    " << char(186);
    Console::SetCursorPosition(4 + x + 5, y + 2); cout << char(186) << "    " << char(186);
    Console::SetCursorPosition(4 + x + 5, y + 3); cout << char(200) << "    " << char(186);
    Console::SetCursorPosition(4 + x + 6, y + 4); cout << char(200) << "   " << char(186);
    Console::SetCursorPosition(4 + x + 7, y + 5);  cout << char(186) << "  " << char(186);
    Console::SetCursorPosition(4 + x + 8, y + 6);  cout << char(200) << " " << char(186);
    Console::SetCursorPosition(4 + x + 9, y + 7);  cout << char(200) << char(188);

    _sleep(150);

    color(hConsole, 174);
    Console::SetCursorPosition(4 + x + 5, y - 4);   cout << "                ";
    Console::SetCursorPosition(4 + x + 5, y - 3);  cout << "                ";
    Console::SetCursorPosition(4 + x + 5, y - 2);  cout << "                ";
    Console::SetCursorPosition(4 + x + 5, y - 1);  cout << "                ";
    Console::SetCursorPosition(4 + x + 5, y);  cout << "                ";
    Console::SetCursorPosition(4 + x + 5, y + 1);  cout << "                ";
    Console::SetCursorPosition(4 + x + 5, y + 2);  cout << "                ";
    Console::SetCursorPosition(4 + x + 5, y + 3);  cout << "                ";
    Console::SetCursorPosition(4 + x + 6, y + 4); cout << "                   ";
    Console::SetCursorPosition(4 + x + 7, y + 5); cout << "                   ";
    Console::SetCursorPosition(4 + x + 8, y + 6); cout << "       ";
    Console::SetCursorPosition(4 + x + 9, y + 7); cout << "       ";
    color(hConsole, 244);


    //6
    graficarCarta(37, 7, 0, 0);
    Console::SetCursorPosition(5 + x + 7, y - 5); cout << char(201) << char(187);
    Console::SetCursorPosition(5 + x + 7, y - 4); cout << char(186) << char(186);
    Console::SetCursorPosition(5 + x + 7, y - 3); cout << char(186) << " " << char(186);
    Console::SetCursorPosition(5 + x + 7, y - 2); cout << char(186) << " " << char(186);
    Console::SetCursorPosition(5 + x + 7, y - 1); cout << char(186) << " " << char(186);
    Console::SetCursorPosition(5 + x + 7, y); cout << char(186) << "  " << char(187);
    Console::SetCursorPosition(5 + x + 7, y + 1); cout << char(186) << "  " << char(186);
    Console::SetCursorPosition(5 + x + 7, y + 2); cout << char(200) << char(187) << " " << char(186);
    Console::SetCursorPosition(5 + x + 8, y + 3); cout << char(186) << " " << char(186);
    Console::SetCursorPosition(5 + x + 8, y + 4); cout << char(186) << " " << char(186);
    Console::SetCursorPosition(5 + x + 8, y + 5); cout << char(200) << " " << char(186);
    Console::SetCursorPosition(5 + x + 9, y + 6); cout << char(186) << char(186);
    Console::SetCursorPosition(5 + x + 9, y + 7); cout << char(200) << char(188);

    _sleep(100);

    color(hConsole, 174);
    Console::SetCursorPosition(5 + x + 7, y - 5);   cout << "                ";
    Console::SetCursorPosition(5 + x + 7, y - 4);  cout << "                ";
    Console::SetCursorPosition(5 + x + 7, y - 3);  cout << "                ";
    Console::SetCursorPosition(5 + x + 7, y - 2);  cout << "                ";
    Console::SetCursorPosition(5 + x + 7, y - 1);  cout << "                ";
    Console::SetCursorPosition(5 + x + 7, y);  cout << "                ";
    Console::SetCursorPosition(5 + x + 7, y + 1);  cout << "                ";
    Console::SetCursorPosition(5 + x + 7, y + 2);  cout << "                ";
    Console::SetCursorPosition(5 + x + 7, y + 3); cout << "                   ";
    Console::SetCursorPosition(5 + x + 7, y + 4); cout << "                   ";
    Console::SetCursorPosition(5 + x + 7, y + 5); cout << "                   ";
    Console::SetCursorPosition(5 + x + 7, y + 6); cout << "                   ";
    Console::SetCursorPosition(5 + x + 7, y + 7); cout << "        ";
    Console::SetCursorPosition(5 + x + 7, y + 8); cout << "        ";
    color(hConsole, 244);

    //7
    graficarCarta(37, 7, 0, 0);
    Console::SetCursorPosition(6 + x + 10, y - 5); cout << char(186);
    Console::SetCursorPosition(6 + x + 10, y - 4); cout << char(186);
    Console::SetCursorPosition(6 + x + 10, y - 3); cout << char(186);
    Console::SetCursorPosition(6 + x + 10, y - 2); cout << char(186);
    Console::SetCursorPosition(6 + x + 10, y - 1); cout << char(186);
    Console::SetCursorPosition(6 + x + 10, y); cout << char(186);
    Console::SetCursorPosition(6 + x + 10, y + 1); cout << char(186);
    Console::SetCursorPosition(6 + x + 10, y + 2); cout << char(186);
    Console::SetCursorPosition(6 + x + 10, y + 3); cout << char(186);
    Console::SetCursorPosition(6 + x + 10, y + 4); cout << char(186);
    Console::SetCursorPosition(6 + x + 10, y + 5); cout << char(186);
    Console::SetCursorPosition(6 + x + 10, y + 6); cout << char(186);
    Console::SetCursorPosition(6 + x + 10, y + 7); cout << char(186);

    _sleep(150);

    color(hConsole, 174);
    Console::SetCursorPosition(6 + x + 10, y - 5); cout << " ";
    Console::SetCursorPosition(6 + x + 10, y - 4); cout << " ";
    Console::SetCursorPosition(6 + x + 10, y - 3); cout << " ";
    Console::SetCursorPosition(6 + x + 10, y - 2); cout << " ";
    Console::SetCursorPosition(6 + x + 10, y - 1); cout << " ";
    Console::SetCursorPosition(6 + x + 10, y); cout << " ";
    Console::SetCursorPosition(6 + x + 10, y + 1); cout << " ";
    Console::SetCursorPosition(6 + x + 10, y + 2); cout << " ";
    Console::SetCursorPosition(6 + x + 10, y + 3); cout << " ";
    Console::SetCursorPosition(6 + x + 10, y + 4); cout << " ";
    Console::SetCursorPosition(6 + x + 10, y + 5); cout << " ";
    Console::SetCursorPosition(6 + x + 10, y + 6); cout << " ";
    Console::SetCursorPosition(6 + x + 10, y + 7); cout << " ";
    Console::SetCursorPosition(6 + x + 10, y + 8); cout << " ";
    color(hConsole, 244);


    //8
    graficarCarta(37, 7, 0, 0);
    Console::SetCursorPosition(7 + x + 12, y - 5); cout << char(201) << char(187);
    Console::SetCursorPosition(7 + x + 12, y - 4); cout << char(186) << char(186);
    Console::SetCursorPosition(7 + x + 11, y - 3); cout << char(186) << " " << char(186);
    Console::SetCursorPosition(7 + x + 11, y - 2); cout << char(186) << " " << char(186);
    Console::SetCursorPosition(7 + x + 11, y - 1); cout << char(186) << " " << char(186);
    Console::SetCursorPosition(7 + x + 10, y); cout << char(201) << "  " << char(186);
    Console::SetCursorPosition(7 + x + 10, y + 1); cout << char(186) << "  " << char(186);
    Console::SetCursorPosition(7 + x + 10, y + 2); cout << char(186) << " " << char(201) << char(188);
    Console::SetCursorPosition(7 + x + 10, y + 3); cout << char(186) << " " << char(186);
    Console::SetCursorPosition(7 + x + 10, y + 4); cout << char(186) << " " << char(186);
    Console::SetCursorPosition(7 + x + 10, y + 5); cout << char(186) << " " << char(188);
    Console::SetCursorPosition(7 + x + 10, y + 6); cout << char(186) << char(186);
    Console::SetCursorPosition(7 + x + 10, y + 7); cout << char(200) << char(188);

    _sleep(150);

    color(hConsole, 174);
    Console::SetCursorPosition(7 + x + 12, y - 5); cout << "       ";
    Console::SetCursorPosition(7 + x + 12, y - 4); cout << "       ";
    Console::SetCursorPosition(7 + x + 11, y - 3); cout << "       ";
    Console::SetCursorPosition(7 + x + 11, y - 2); cout << "       ";
    Console::SetCursorPosition(7 + x + 10, y - 1); cout << "       ";
    Console::SetCursorPosition(7 + x + 10, y); cout << "       ";
    Console::SetCursorPosition(7 + x + 10, y + 1); cout << "       ";
    Console::SetCursorPosition(7 + x + 10, y + 2); cout << "       ";
    Console::SetCursorPosition(7 + x + 10, y + 3); cout << "       ";
    Console::SetCursorPosition(7 + x + 10, y + 4); cout << "       ";
    Console::SetCursorPosition(7 + x + 10, y + 5); cout << "       ";
    Console::SetCursorPosition(7 + x + 10, y + 6); cout << "       ";
    Console::SetCursorPosition(7 + x + 10, y + 7); cout << "       ";

    color(hConsole, 244);
    //9
    graficarCarta(37, 7, 0, 0);
    Console::SetCursorPosition(8 + x + 14, y - 4); cout << char(201) << char(187);
    Console::SetCursorPosition(8 + x + 13, y - 3); cout << char(201) << " " << char(186);
    Console::SetCursorPosition(8 + x + 12, y - 2); cout << char(186) << "  " << char(186);
    Console::SetCursorPosition(8 + x + 11, y - 1); cout << char(201) << "   " << char(186);
    Console::SetCursorPosition(8 + x + 10, y); cout << char(201) << "    " << char(186);
    Console::SetCursorPosition(8 + x + 10, y + 1); cout << char(186) << "    " << char(186);
    Console::SetCursorPosition(8 + x + 10, y + 2); cout << char(186) << "    " << char(186);
    Console::SetCursorPosition(8 + x + 10, y + 3); cout << char(186) << "    " << char(188);
    Console::SetCursorPosition(8 + x + 10, y + 4); cout << char(186) << "   " << char(188);
    Console::SetCursorPosition(8 + x + 10, y + 5); cout << char(186) << "  " << char(186);
    Console::SetCursorPosition(8 + x + 10, y + 6); cout << char(186) << " " << char(188);
    Console::SetCursorPosition(8 + x + 10, y + 7); cout << char(200) << char(188);

    _sleep(150);


    color(hConsole, 174);
    Console::SetCursorPosition(8 + x + 14, y - 4);  cout << "       ";
    Console::SetCursorPosition(8 + x + 13, y - 3);  cout << "       ";
    Console::SetCursorPosition(8 + x + 12, y - 2);  cout << "       ";
    Console::SetCursorPosition(8 + x + 11, y - 1);  cout << "       ";
    Console::SetCursorPosition(8 + x + 10, y); cout << "       ";
    Console::SetCursorPosition(8 + x + 10, y + 1); cout << "       ";
    Console::SetCursorPosition(8 + x + 10, y + 2); cout << "       ";
    Console::SetCursorPosition(8 + x + 10, y + 3); cout << "       ";
    Console::SetCursorPosition(8 + x + 10, y + 4); cout << "       ";
    Console::SetCursorPosition(8 + x + 10, y + 5); cout << "       ";
    Console::SetCursorPosition(8 + x + 10, y + 6); cout << "       ";
    Console::SetCursorPosition(8 + x + 10, y + 7); cout << "       ";


    color(hConsole, 244);
    //10
    graficarCarta(37, 7, 0, 0);
    Console::SetCursorPosition(9 + x + 15, y - 3); cout << " " << char(205) << char(187);
    Console::SetCursorPosition(9 + x + 13, y - 2); cout << " " << char(201) << char(188) << " " << char(186);
    Console::SetCursorPosition(9 + x + 11, y - 1); cout << " " << char(205) << char(188) << "   " << char(186);
    Console::SetCursorPosition(9 + x + 10, y); cout << char(201) << char(188) << "     " << char(186);
    Console::SetCursorPosition(9 + x + 10, y + 1); cout << char(186) << "      " << char(186);
    Console::SetCursorPosition(9 + x + 10, y + 2); cout << char(186) << "      " << char(186);
    Console::SetCursorPosition(9 + x + 10, y + 3); cout << char(186) << "      " << char(186);
    Console::SetCursorPosition(9 + x + 10, y + 4); cout << char(186) << "     " << char(201) << char(188);
    Console::SetCursorPosition(9 + x + 10, y + 5); cout << char(186) << "   " << char(201) << char(205) << " ";
    Console::SetCursorPosition(9 + x + 10, y + 6); cout << char(186) << " " << char(201) << char(188) << " ";
    Console::SetCursorPosition(9 + x + 10, y + 7); cout << char(200) << char(205) << " ";

    _sleep(150);

    color(hConsole, 174);
    Console::SetCursorPosition(9 + x + 15, y - 3); cout << "         ";
    Console::SetCursorPosition(9 + x + 13, y - 2); cout << "         ";
    Console::SetCursorPosition(9 + x + 11, y - 1); cout << "         ";
    Console::SetCursorPosition(9 + x + 10, y);   cout << "         ";
    Console::SetCursorPosition(9 + x + 10, y + 1); cout << "         ";
    Console::SetCursorPosition(9 + x + 10, y + 2); cout << "         ";
    Console::SetCursorPosition(9 + x + 10, y + 3); cout << "         ";
    Console::SetCursorPosition(9 + x + 10, y + 4); cout << "         ";
    Console::SetCursorPosition(9 + x + 10, y + 5); cout << "     ";
    Console::SetCursorPosition(9 + x + 10, y + 6); cout << "     ";
    Console::SetCursorPosition(9 + x + 10, y + 7); cout << "     ";

    //11
    color(hConsole, 244);
    graficarCarta(37, 7, 0, 0);
    Console::SetCursorPosition(10 + x + 16, y - 2); cout << " " << char(205) << char(205) << char(187);
    Console::SetCursorPosition(10 + x + 13, y - 1); cout << char(201) << char(205) << char(205) << char(188) << "  " << char(186);
    Console::SetCursorPosition(10 + x + 10, y); cout << char(201) << char(205) << char(205) << "      " << char(186);
    Console::SetCursorPosition(10 + x + 10, y + 1); cout << char(186) << "        " << char(186);
    Console::SetCursorPosition(10 + x + 10, y + 2); cout << char(186) << "        " << char(186);
    Console::SetCursorPosition(10 + x + 10, y + 3); cout << char(186) << "        " << char(186);
    Console::SetCursorPosition(10 + x + 10, y + 4); cout << char(186) << "        " << char(186);
    Console::SetCursorPosition(10 + x + 10, y + 5); cout << char(186) << "       " << char(205) << char(188);
    Console::SetCursorPosition(10 + x + 10, y + 6); cout << char(186) << "   " << char(201) << char(205) << char(205) << char(188);
    Console::SetCursorPosition(10 + x + 10, y + 7); cout << char(200) << char(205) << char(205) << char(205) << " ";

    _sleep(100);

    color(hConsole, 174);


    Console::SetCursorPosition(10 + x + 16, y - 2);   cout << "          ";
    Console::SetCursorPosition(10 + x + 13, y - 1);   cout << "          ";
    Console::SetCursorPosition(10 + x + 10, y);  cout << "          ";
    Console::SetCursorPosition(10 + x + 10, y + 1);  cout << "          ";
    Console::SetCursorPosition(10 + x + 10, y + 2);  cout << "          ";
    Console::SetCursorPosition(10 + x + 10, y + 3);  cout << "          ";
    Console::SetCursorPosition(10 + x + 10, y + 4);  cout << "          ";
    Console::SetCursorPosition(10 + x + 10, y + 5);  cout << "          ";
    Console::SetCursorPosition(10 + x + 10, y + 6);  cout << "          ";
    Console::SetCursorPosition(10 + x + 10, y + 7);  cout << "          ";


    color(hConsole, 244);
    //12
    graficarCarta(37, 7, 0, 0);
    Console::SetCursorPosition(11 + x + 14, y - 1); cout << " " << char(201) << char(205) << char(205) << char(205) << char(205) << char(187);
    Console::SetCursorPosition(11 + x + 10, y); cout << char(201) << char(205) << char(205) << char(205) << char(205) << "     " << char(186);
    Console::SetCursorPosition(11 + x + 10, y + 1); cout << char(186) << "         " << char(186);
    Console::SetCursorPosition(11 + x + 10, y + 2); cout << char(186) << "         " << char(186);
    Console::SetCursorPosition(11 + x + 10, y + 3); cout << char(186) << "         " << char(186);
    Console::SetCursorPosition(11 + x + 10, y + 4); cout << char(186) << "         " << char(186);
    Console::SetCursorPosition(11 + x + 10, y + 5); cout << char(186) << "         " << char(186);
    Console::SetCursorPosition(11 + x + 10, y + 6); cout << char(186) << "     " << char(205) << char(205) << char(205) << char(205) << char(188);
    Console::SetCursorPosition(11 + x + 10, y + 7); cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(188) << " ";

    _sleep(100);

    color(hConsole, 174);
    Console::SetCursorPosition(11 + x + 14, y - 1); cout << "           ";
    Console::SetCursorPosition(11 + x + 10, y); cout << "           ";
    Console::SetCursorPosition(11 + x + 10, y + 1); cout << "           ";
    Console::SetCursorPosition(11 + x + 10, y + 2); cout << "           ";
    Console::SetCursorPosition(11 + x + 10, y + 3); cout << "           ";
    Console::SetCursorPosition(11 + x + 10, y + 4); cout << "           ";
    Console::SetCursorPosition(11 + x + 10, y + 5); cout << "           ";
    Console::SetCursorPosition(11 + x + 10, y + 6); cout << "           ";
    Console::SetCursorPosition(11 + x + 10, y + 7); cout << "           ";



    color(hConsole, 244);

    //13
    graficarCarta(37, 7, 0, 0);
  
 



}

void mostrar_creditos() {

    color(hConsole, 172);
    gotoxy(27, 7); cout << " " << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << " " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << endl;
    gotoxy(27, 8); cout << char(219) << "     " << char(219) << " " << char(219) << "     " << char(219) << " " << char(219) << "       " << char(219) << "     " << char(219) << "  " << char(219) << "     " << char(219) << "    " << char(219) << "     " << char(219) << " " << char(219) << "     " << char(219) << endl;
    gotoxy(27, 9); cout << char(219) << "       " << char(219) << "     " << char(219) << " " << char(219) << "       " << char(219) << "     " << char(219) << "  " << char(219) << "     " << char(219) << "    " << char(219) << "     " << char(219) << " " << char(219) << endl;
    gotoxy(27, 10); cout << char(219) << "       " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << "   " << char(219) << "     " << char(219) << "  " << char(219) << "     " << char(219) << "    " << char(219) << "     " << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << endl;
    gotoxy(27, 11); cout << char(219) << "       " << char(219) << "   " << char(219) << "   " << char(219) << "       " << char(219) << "     " << char(219) << "  " << char(219) << "     " << char(219) << "    " << char(219) << "     " << char(219) << "       " << char(219) << endl;
    gotoxy(27, 12); cout << char(219) << "     " << char(219) << " " << char(219) << "    " << char(219) << "  " << char(219) << "       " << char(219) << "     " << char(219) << "  " << char(219) << "     " << char(219) << "    " << char(219) << "     " << char(219) << " " << char(219) << "     " << char(219) << endl;
    gotoxy(27, 13); cout << " " << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << "     " << char(219) << " " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << "    " << char(219) << "    " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << endl;

    gotoxy(46, 16); cout << " G R U P O  O C H O" << endl;
    gotoxy(46, 17); cout << " ------------------" << endl;
    gotoxy(48, 19); cout << " David Serrudo" << endl;
    gotoxy(47, 20); cout << " Francisco Uribe " << endl;
    gotoxy(48, 21); cout << " Alissa Zu"<<char(164)<<"iga " << endl;


    gotoxy(33, 25); msj("<Presione cualquier tecla para continuar...>");

    int tecla = getch();
    if (kbhit)
    {
        clear();
    }
}

void mostrar_instrucciones() {
    color(hConsole, 172);
    gotoxy(43, 8); msj("<INSTRUCCIONES>");
    gotoxy(13, 14); cout << "Comienza el juego repartiendo 8 cartas a cada uno de los 2 jugadores. Luego, la ";
    gotoxy(12, 15); cout << "computadora muestra una carta al azar. Si alguno de los jugadores tiene esa carta ";
    gotoxy(16, 16); cout << "en su mano, la descarta. El ganador es el jugador que se quede sin cartas";
    gotoxy(20, 17); cout << "primero o el que tenga menos al momento que se acaben las rondas.";;

    gotoxy(33, 24); msj("<Presione cualquier tecla para continuar...>");

    int tecla = getch();
    if (kbhit)
    {
        clear();
    }
}

void mostrar_ventanaInicio() {

    borrartablero();
    color(hConsole, 172);
    gotoxy(35, 7); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << "   " << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << endl;
    gotoxy(35, 8); cout << char(219) << char(219) << "   " << char(219) << char(219) << "  " << char(219) << char(219) << "   " << char(219) << char(219) << "    " << char(219) << char(219) << "      " << char(219) << char(219) << "    " << char(219) << char(219) << "     " << endl;
    gotoxy(35, 9); cout << char(219) << char(219) << "   " << char(219) << char(219) << "  " << char(219) << char(219) << "   " << char(219) << char(219) << "    " << char(219) << char(219) << "      " << char(219) << char(219) << "    " << char(219) << char(219) << "     " << endl;
    gotoxy(35, 10); cout << char(219) << char(219) << "   " << char(219) << char(219) << "  " << char(219) << char(219) << "   " << char(219) << char(219) << "    " << char(219) << char(219) << "      " << char(219) << char(219) << "    " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << endl;
    gotoxy(35, 11); cout << char(219) << char(219) << "   " << char(219) << char(219) << "  " << char(219) << char(219) << "   " << char(219) << char(219) << "    " << char(219) << char(219) << "      " << char(219) << char(219) << "    " << char(219) << char(219) << "     " << endl;
    gotoxy(35, 12); cout << char(219) << char(219) << "   " << char(219) << char(219) << "  " << char(219) << char(219) << "   " << char(219) << char(219) << "    " << char(219) << char(219) << "      " << char(219) << char(219) << "    " << char(219) << char(219) << "     " << endl;
    gotoxy(35, 13); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "    " << char(219) << char(219) << "    " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << endl;

    gotoxy(33, 22); msj("<Presione cualquier tecla para continuar...>");

    int tecla = getch();
    if (kbhit)
    {
        clear();
    }

}


void mostrar_menuprincipal(int cartaj1_1 = generarNumAleatorio(13, 1), int cartaj1_2 = generarNumAleatorio(13, 1), int cartaj1_3 = generarNumAleatorio(13, 1), int cartaj1_4 = generarNumAleatorio(13, 1), int cartaj1_5 = generarNumAleatorio(13, 1), int cartaj1_6 = generarNumAleatorio(13, 1), int cartaj1_7 = generarNumAleatorio(13, 1), int cartaj1_8 = generarNumAleatorio(13, 1), int cartaj2_1 = generarNumAleatorio(13, 1), int cartaj2_2 = generarNumAleatorio(13, 1), int cartaj2_3 = generarNumAleatorio(13, 1), int cartaj2_4 = generarNumAleatorio(13, 1), int cartaj2_5 = generarNumAleatorio(13, 1), int cartaj2_6 = generarNumAleatorio(13, 1), int cartaj2_7 = generarNumAleatorio(13, 1), int cartaj2_8 = generarNumAleatorio(13, 1), int simboloj1_1 = generarNumAleatorio(4, 1), int simboloj1_2 = generarNumAleatorio(4, 1), int simboloj1_3 = generarNumAleatorio(4, 1), int simboloj1_4 = generarNumAleatorio(4, 1), int simboloj1_5 = generarNumAleatorio(4, 1), int simboloj1_6 = generarNumAleatorio(4, 1), int simboloj1_7 = generarNumAleatorio(4, 1), int simboloj1_8 = generarNumAleatorio(4, 1), int simboloj2_1 = generarNumAleatorio(4, 1), int simboloj2_2 = generarNumAleatorio(4, 1), int simboloj2_3 = generarNumAleatorio(4, 1), int simboloj2_4 = generarNumAleatorio(4, 1), int simboloj2_5 = generarNumAleatorio(4, 1), int simboloj2_6 = generarNumAleatorio(4, 1), int simboloj2_7 = generarNumAleatorio(4, 1), int simboloj2_8 = generarNumAleatorio(4, 1), int N = 0, int cantCartasj1 = 0, int cantCartasj2 = 0, int a = 0, int contScoreP1 = 0, int contScoreP2 = 0, int puntoX2 = 5, int puntoX = 5) {
    bool isTrue = true;
    string j1, j2;
    char opcion;
    do {
        borrartablero();
        color(hConsole, 172);
        gotoxy(35, 7); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << "   " << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << endl;
        gotoxy(35, 8); cout << char(219) << char(219) << "   " << char(219) << char(219) << "  " << char(219) << char(219) << "   " << char(219) << char(219) << "    " << char(219) << char(219) << "      " << char(219) << char(219) << "    " << char(219) << char(219) << "     " << endl;
        gotoxy(35, 9); cout << char(219) << char(219) << "   " << char(219) << char(219) << "  " << char(219) << char(219) << "   " << char(219) << char(219) << "    " << char(219) << char(219) << "      " << char(219) << char(219) << "    " << char(219) << char(219) << "     " << endl;
        gotoxy(35, 10); cout << char(219) << char(219) << "   " << char(219) << char(219) << "  " << char(219) << char(219) << "   " << char(219) << char(219) << "    " << char(219) << char(219) << "      " << char(219) << char(219) << "    " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << endl;
        gotoxy(35, 11); cout << char(219) << char(219) << "   " << char(219) << char(219) << "  " << char(219) << char(219) << "   " << char(219) << char(219) << "    " << char(219) << char(219) << "      " << char(219) << char(219) << "    " << char(219) << char(219) << "     " << endl;
        gotoxy(35, 12); cout << char(219) << char(219) << "   " << char(219) << char(219) << "  " << char(219) << char(219) << "   " << char(219) << char(219) << "    " << char(219) << char(219) << "      " << char(219) << char(219) << "    " << char(219) << char(219) << "     " << endl;
        gotoxy(35, 13); cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "    " << char(219) << char(219) << "    " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << endl;

        color(hConsole, 160);
        gotoxy(48, 16); cout << " MENU PRINCIPAL" << endl;
        gotoxy(48, 17); cout << " --------------" << endl;
        gotoxy(46, 19); cout << " INSTRUCCIONES <I>" << endl;
        gotoxy(50, 20); cout << " JUGAR <J> " << endl;
        gotoxy(48, 21); cout << " CREDITOS <C>" << endl;
        gotoxy(50, 22); cout << " SALIR <S>" << endl;
        gotoxy(48, 24); msj("Elige tu opcion: ");

        do
        {
            opcion = getch();
            if (opcion != 'J' && opcion != 'j' && opcion != 'I' && opcion != 'i' && opcion != 'C' && opcion != 'c' && opcion != 'S' && opcion != 's' && opcion != 'g') {

            }
        } while (opcion != 'J' && opcion != 'j' && opcion != 'I' && opcion != 'i' && opcion != 'C' && opcion != 'c' && opcion != 'S' && opcion != 's' && opcion != 'g');

        borrartablero();



        switch (opcion) {
        case 'J':
        case 'j':

            color(hConsole, 160);
            gotoxy(27, 5); msj("Inserta la cantidad de rondas que desees jugar (5-10): ");

            N = readInt();

            while (N < 5 || N>10) {
                gotoxy(76, 5); cout<<"   ";
                gotoxy(77, 5);
                N = readInt();

            }

            gotoxy(29, 10); msj("Ingrese el nombre del primer jugador: ");

            readWord(j1);

            gotoxy(29, 15); msj("Ingrese el nombre del segundo jugador: ");

            readWord(j2);

            color(hConsole, 164);
             gotoxy(30, 22); cout << "A jugar! " << j1 << " VS " << j2<< endl;
             

             
             _sleep(900);

             int cartaRandom, simboloRandom ;
           
            for (int i = 0; i < N; i++)
            {
                borrartablero();
                color(hConsole, 160);
                Console::SetCursorPosition(5, 3); cout << "Puntaje " <<j1 <<": "<< contScoreP1;
                Console::SetCursorPosition(5, 5); cout << "Puntaje " <<j2 <<": "<< contScoreP2;
                
                if(i>0) graficarCarta(59, 7, cartaRandom, simboloRandom);

                cartaRandom = generarNumAleatorio(13, 1);
                simboloRandom = generarNumAleatorio(4, 1);

                color(hConsole, 160);
                Console::SetCursorPosition(87, 3); cout << "Ronda " << i+1 << " de " << N;

                graficarCarta(37, 7, 0, 0);
                _sleep(100);

                mostrar_animacion();

                graficarCarta(59, 7, cartaRandom, simboloRandom);


                borrarCartas();
                cantCartasj1 = contarCartas(cartaj1_1, cartaj1_2, cartaj1_3, cartaj1_4, cartaj1_5, cartaj1_6, cartaj1_7, cartaj1_8);
                
                puntoX =  calcularPuntoX(cantCartasj1);


                if (cartaj1_1 != 0) { graficarCarta(puntoX, 18, cartaj1_1, simboloj1_1);  puntoX += 12; }
                if (cartaj1_2 != 0) { graficarCarta(puntoX, 18, cartaj1_2, simboloj1_2);  puntoX += 12; }
                if (cartaj1_3 != 0) { graficarCarta(puntoX, 18, cartaj1_3, simboloj1_3);  puntoX += 12; }
                if (cartaj1_4 != 0) { graficarCarta(puntoX, 18, cartaj1_4, simboloj1_4);  puntoX += 12; }
                if (cartaj1_5 != 0) { graficarCarta(puntoX, 18, cartaj1_5, simboloj1_5);  puntoX += 12; }
                if (cartaj1_6 != 0) { graficarCarta(puntoX, 18, cartaj1_6, simboloj1_6);  puntoX += 12; }
                if (cartaj1_7 != 0) { graficarCarta(puntoX, 18, cartaj1_7, simboloj1_7);  puntoX += 12; }
                if (cartaj1_8 != 0) { graficarCarta(puntoX, 18, cartaj1_8, simboloj1_8);  puntoX += 12; }
              


                while (1) {
                    color(hConsole, 160);
                    Console::SetCursorPosition(80, 16); cout << "                        ";
                    Console::SetCursorPosition(4, 16); cout << j1<< ", indique el valor de la carta que desea eliminar (1-13) o presione '0' para pasar: ";
                    a = readInt();
                    if (a == 0)
                    {
                        break;
                    }
                    if (a == cartaRandom && a == cartaj1_1)
                    {
                        cartaj1_1 = 0;
                        contScoreP1++;
                        break;
                    }
                    else
                    {
                        if (a == cartaRandom && a == cartaj1_2)
                        {
                            cartaj1_2 = 0;
                            contScoreP1++;
                            break;
                        }
                        else
                        {
                            if (a == cartaRandom && a == cartaj1_3)
                            {
                                cartaj1_3 = 0;
                                contScoreP1++;
                                break;
                            }
                            else
                            {
                                if (a == cartaRandom && a == cartaj1_4)
                                {
                                    cartaj1_4 = 0;
                                    contScoreP1++;
                                    break;
                                }
                                else
                                {
                                    if (a == cartaRandom && a == cartaj1_5)
                                    {
                                        cartaj1_5 = 0;
                                        contScoreP1++;
                                        break;
                                    }
                                    else
                                    {
                                        if (a == cartaRandom && a == cartaj1_6)
                                        {
                                            cartaj1_6 = 0;
                                            contScoreP1++;
                                            break;
                                        }
                                        else
                                        {
                                            if (a == cartaRandom && a == cartaj1_7)
                                            {
                                                cartaj1_7 = 0;
                                                contScoreP1++;
                                                break;
                                            }
                                            else
                                            {
                                                if (a == cartaRandom && a == cartaj1_8)
                                                {
                                                    cartaj1_8 = 0;
                                                    contScoreP1++;
                                                    break;
                                                }

                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

                borrarCartas();
                cantCartasj2 = contarCartas(cartaj2_1, cartaj2_2, cartaj2_3, cartaj2_4, cartaj2_5, cartaj2_6, cartaj2_7, cartaj2_8);
                color(hConsole, 160);
                Console::SetCursorPosition(5, 3); cout << "Puntaje " << j1 << ": " << contScoreP1;
                Console::SetCursorPosition(5, 5); cout << "Puntaje " << j2 << ": " << contScoreP2;

                puntoX2 = calcularPuntoX(cantCartasj2);


                if (cartaj2_1 != 0) { graficarCarta(puntoX2, 18, cartaj2_1, simboloj2_1);  puntoX2 += 12; }
                if (cartaj2_2 != 0) { graficarCarta(puntoX2, 18, cartaj2_2, simboloj2_2);  puntoX2 += 12; }
                if (cartaj2_3 != 0) { graficarCarta(puntoX2, 18, cartaj2_3, simboloj2_3);  puntoX2 += 12; }
                if (cartaj2_4 != 0) { graficarCarta(puntoX2, 18, cartaj2_4, simboloj2_4);  puntoX2 += 12; }
                if (cartaj2_5 != 0) { graficarCarta(puntoX2, 18, cartaj2_5, simboloj2_5);  puntoX2 += 12; }
                if (cartaj2_6 != 0) { graficarCarta(puntoX2, 18, cartaj2_6, simboloj2_6);  puntoX2 += 12; }
                if (cartaj2_7 != 0) { graficarCarta(puntoX2, 18, cartaj2_7, simboloj2_7);  puntoX2 += 12; }
                if (cartaj2_8 != 0) { graficarCarta(puntoX2, 18, cartaj2_8, simboloj2_8);  puntoX2 += 12; }
    


                while (1) {
                    color(hConsole, 160);
                    Console::SetCursorPosition(80, 16); cout << "                        ";
                    Console::SetCursorPosition(4, 16); cout <<j2 <<", indique el valor de la carta que desea eliminar (1-13) o presione '0' para pasar: ";
                    a = readInt();
                    if (a == 0)
                    {
                        break;
                    }
                    if (a == cartaRandom && a == cartaj2_1)
                    {
                        cartaj2_1 = 0;
                        contScoreP2++;
                        break;
                    }
                    else
                    {
                        if (a == cartaRandom && a == cartaj2_2)
                        {
                            cartaj2_2 = 0;
                            contScoreP2++;
                            break;
                        }
                        else
                        {
                            if (a == cartaRandom && a == cartaj2_3)
                            {
                                cartaj2_3 = 0;
                                contScoreP2++;
                                break;
                            }
                            else
                            {
                                if (a == cartaRandom && a == cartaj2_4)
                                {
                                    cartaj2_4 = 0;
                                    contScoreP2++;
                                    break;
                                }
                                else
                                {
                                    if (a == cartaRandom && a == cartaj2_5)
                                    {
                                        cartaj2_5 = 0;
                                        contScoreP2++;
                                        break;
                                    }
                                    else
                                    {
                                        if (a == cartaRandom && a == cartaj2_6)
                                        {
                                            cartaj2_6 = 0;
                                            contScoreP2++;
                                            break;
                                        }
                                        else
                                        {
                                            if (a == cartaRandom && a == cartaj2_7)
                                            {
                                                cartaj2_7 = 0;
                                                contScoreP2++;
                                                break;
                                            }
                                            else
                                            {
                                                if (a == cartaRandom && a == cartaj2_8)
                                                {
                                                    cartaj2_8 = 0;
                                                    contScoreP2++;
                                                    break;
                                                }

                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }




            }

            borrartablero();
            color(hConsole, 160);
            gotoxy(46, 10); cout << "¡JUEGO TERMINADO!";
            gotoxy(48, 12); cout << "Puntos finales:" << endl;
            gotoxy(50, 13); cout << j1<<": " << contScoreP1 << endl;
            gotoxy(50, 14); cout << j2 <<": " << contScoreP2 << endl;

            if (contScoreP1 > contScoreP2) {
                gotoxy(44, 16); cout << j1 <<" es el ganador!" << endl;
            }
            else if (contScoreP2 > contScoreP1) {
                gotoxy(44, 16); cout<< j2 << " es el ganador!" << endl;
            }
            else {
                gotoxy(44, 16); cout << "¡Empate!" << endl;
            }

            system("pause>0");
            break;
        case 'I':
        case 'i':
            mostrar_instrucciones();

            break;
        case 'C':
        case 'c':
            mostrar_creditos();
            break;
        case 'S':
        case 's':
            mostrar_salida();
            return;
        default:
            cout << "Opción invalida. Intente de nuevo." << endl;
            break;
        }
    } while (isTrue == true);
}

int main()
{

    srand(time(NULL));
    //Se declaran las 8 cartas de cada jugador y se les asigna una variable
    int cartaj1_1 = generarNumAleatorio(13, 1), cartaj1_2 = generarNumAleatorio(13, 1), cartaj1_3 = generarNumAleatorio(13, 1), cartaj1_4 = generarNumAleatorio(13, 1), cartaj1_5 = generarNumAleatorio(13, 1), cartaj1_6 = generarNumAleatorio(13, 1), cartaj1_7 = generarNumAleatorio(13, 1), cartaj1_8 = generarNumAleatorio(13, 1), cartaj2_1 = generarNumAleatorio(13, 1), cartaj2_2 = generarNumAleatorio(13, 1), cartaj2_3 = generarNumAleatorio(13, 1), cartaj2_4 = generarNumAleatorio(13, 1), cartaj2_5 = generarNumAleatorio(13, 1), cartaj2_6 = generarNumAleatorio(13, 1), cartaj2_7 = generarNumAleatorio(13, 1), cartaj2_8 = generarNumAleatorio(13, 1);
    //Simbolos de las 8 cartas de cada jugador;
    int simboloj1_1 = generarNumAleatorio(4, 1), simboloj1_2 = generarNumAleatorio(4, 1), simboloj1_3 = generarNumAleatorio(4, 1), simboloj1_4 = generarNumAleatorio(4, 1), simboloj1_5 = generarNumAleatorio(4, 1), simboloj1_6 = generarNumAleatorio(4, 1), simboloj1_7 = generarNumAleatorio(4, 1), simboloj1_8 = generarNumAleatorio(4, 1), simboloj2_1 = generarNumAleatorio(4, 1), simboloj2_2 = generarNumAleatorio(4, 1), simboloj2_3 = generarNumAleatorio(4, 1), simboloj2_4 = generarNumAleatorio(4, 1), simboloj2_5 = generarNumAleatorio(4, 1), simboloj2_6 = generarNumAleatorio(4, 1), simboloj2_7 = generarNumAleatorio(4, 1), simboloj2_8 = generarNumAleatorio(4, 1);
    int N, cantCartasj1, cantCartasj2;
    int puntoX2 = 5;
    int puntoX = 5;
    int a;
    int contScoreP1 = 0, contScoreP2 = 0;

    configurar_ventana();
    mostrar_ventanaInicio();
    mostrar_menuprincipal(cartaj1_1 = generarNumAleatorio(13, 1), cartaj1_2 = generarNumAleatorio(13, 1), cartaj1_3 = generarNumAleatorio(13, 1), cartaj1_4 = generarNumAleatorio(13, 1), cartaj1_5 = generarNumAleatorio(13, 1), cartaj1_6 = generarNumAleatorio(13, 1), cartaj1_7 = generarNumAleatorio(13, 1), cartaj1_8 = generarNumAleatorio(13, 1), cartaj2_1 = generarNumAleatorio(13, 1), cartaj2_2 = generarNumAleatorio(13, 1), cartaj2_3 = generarNumAleatorio(13, 1), cartaj2_4 = generarNumAleatorio(13, 1), cartaj2_5 = generarNumAleatorio(13, 1), cartaj2_6 = generarNumAleatorio(13, 1), cartaj2_7 = generarNumAleatorio(13, 1), cartaj2_8 = generarNumAleatorio(13, 1), simboloj1_1 = generarNumAleatorio(4, 1), simboloj1_2 = generarNumAleatorio(4, 1), simboloj1_3 = generarNumAleatorio(4, 1), simboloj1_4 = generarNumAleatorio(4, 1), simboloj1_5 = generarNumAleatorio(4, 1), simboloj1_6 = generarNumAleatorio(4, 1), simboloj1_7 = generarNumAleatorio(4, 1), simboloj1_8 = generarNumAleatorio(4, 1), simboloj2_1 = generarNumAleatorio(4, 1), simboloj2_2 = generarNumAleatorio(4, 1), simboloj2_3 = generarNumAleatorio(4, 1), simboloj2_4 = generarNumAleatorio(4, 1), simboloj2_5 = generarNumAleatorio(4, 1), simboloj2_6 = generarNumAleatorio(4, 1), simboloj2_7 = generarNumAleatorio(4, 1), simboloj2_8 = generarNumAleatorio(4, 1), N = 0, cantCartasj1 = 0, cantCartasj2 = 0, a = 0, contScoreP1 = 0, contScoreP2 = 0, puntoX2 = 5, puntoX = 5);

    return 0;
}
