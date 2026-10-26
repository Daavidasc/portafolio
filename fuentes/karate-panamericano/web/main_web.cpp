#include "compat.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void gotoxy(int x, int y) {
    Console::SetCursorPosition(x, y);
}


int danoPatada = 7;
int danoGolpe = 1;
int empujePatada = 10;
int empujeGolpe = 4;
int recuperacionGolpe = 2;
int recuperacionDefensa = 4;

//fondo, texto
void colorear(int fondo, int texto) {
    printf("\033[38;5;%im", texto);
    printf("\033[48;5;%im", fondo);
}

void imprimirJuez1(int x, int y, int piel, int pelo, int ojos) {

    gotoxy(x + 4, y - 12);

    colorear(26, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(26, 26);
    cout << char(220);
    colorear(26, 0);
    cout << char(220);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223);
    colorear(26, 0);
    cout << char(220);

    gotoxy(x + 2, y - 11);

    colorear(26, 0);
    cout << char(220);
    colorear(0, pelo);
    cout << char(220);
    colorear(pelo, pelo);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, pelo);
    cout << char(220);
    colorear(pelo, pelo);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);








    gotoxy(x + 2, y - 10);
    colorear(0, 0);
    cout << char(219);
    colorear(pelo, pelo);
    cout << char(219);
    colorear(pelo, pelo);
    cout << char(219);
    colorear(pelo, pelo);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(220);
    colorear(pelo, pelo);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(pelo, piel);
    cout << char(220);
    colorear(pelo, 255);
    cout << char(220);
    colorear(piel, 255);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    colorear(pelo, 255);
    cout << char(220);
    colorear(pelo, piel);
    cout << char(220);
    colorear(pelo, pelo);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);



    gotoxy(x + 2, y - 9);
    colorear(0, 0);
    cout << char(219);
    colorear(pelo, pelo);
    cout << char(219);
    colorear(pelo, pelo);
    cout << char(219);
    colorear(pelo, pelo);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219);
    colorear(pelo, piel);
    cout << char(220);
    colorear(pelo, pelo);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    colorear(255, 255);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(220);
    colorear(0, 26);
    cout << char(220);


    gotoxy(x + 3, y - 8);
    colorear(26, 0);
    cout << char(223);
    colorear(0, pelo);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 26);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 255);
    cout << char(223);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, 255);
    cout << char(223);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 3, y - 7);
    colorear(26, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219) << char(219);
    colorear(0, 255);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(0, 255);
    cout << char(220);
    colorear(26, 0);
    cout << char(220);

    gotoxy(x + 2, y - 6);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(0, 255);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, 255);
    cout << char(223);
    cout << char(223);
    colorear(255, 255);
    cout << char(223);
    colorear(1, 1);
    cout << char(223);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(223);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 2, y - 5);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 255);
    cout << char(223) << char(223) << char(223);
    colorear(0, 0);
    cout << char(219) << char(219);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(0, 255);
    cout << char(219);
    cout << char(219);
    colorear(255, 1);
    cout << char(223);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(0, 0);
    cout << char(219) << char(219);
    colorear(piel, 255);
    cout << char(223) << char(223) << char(223);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 2, y - 4);
    colorear(26, 0);
    cout << char(223);
    colorear(0, piel);
    cout << char(223) << char(223) << char(223);
    colorear(26, 0);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(53, 0);
    cout << char(223) << char(223);
    colorear(0, 53);
    cout << char(220);
    colorear(53, 0);
    cout << char(223);
    colorear(0, 53);
    cout << char(220);
    colorear(53, 0);
    cout << char(223) << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(26, 0);
    cout << char(223);
    colorear(0, piel);
    cout << char(223) << char(223) << char(223);
    colorear(26, 0);
    cout << char(223);

    gotoxy(x + 5, y - 3);
    colorear(26, 0);
    cout << char(220);
    colorear(0, 53);
    cout << char(220);
    colorear(53, 53);
    cout << char(220) << char(220) << char(220);
    colorear(53, 53);
    cout << char(220);
    colorear(53, 0);
    cout << char(220);
    colorear(53, 53);
    cout << char(220);
    colorear(53, 53);
    cout << char(220) << char(220) << char(220);
    colorear(0, 53);
    cout << char(220);
    colorear(26, 0);
    cout << char(220);

    gotoxy(x + 2, y - 2);
    colorear(26, 0);
    cout << char(220) << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(53, 0);
    cout << char(220);
    colorear(0, 53);
    cout << char(219) << char(219) << char(219);
    colorear(53, 0);
    cout << char(220);
    colorear(0, 26);
    cout << char(220);
    colorear(0, 26);
    cout << char(219);
    colorear(0, 26);
    cout << char(220);
    colorear(53, 0);
    cout << char(220);
    colorear(0, 53);
    cout << char(219) << char(219) << char(219);
    colorear(53, 0);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(26, 0);
    cout << char(220) << char(220);

    gotoxy(x + 1, y - 1);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 26);
    cout << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
}

void imprimirJuez2(int x, int y, int piel, int pelo, int ojos) {

    gotoxy(x + 5, y - 12);

    colorear(26, 0);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223);

    colorear(26, 0);
    cout << char(220);
    cout << char(220);

    colorear(26, 26);
    cout << char(220);

    colorear(26, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);


    gotoxy(x + 4, y - 11);

    colorear(0, 0);
    cout << char(220);

    colorear(pelo, pelo);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);

    colorear(0, pelo);
    cout << char(220);
    colorear(pelo, pelo);
    cout << char(220);
    cout << char(220);
    cout << char(220);

    colorear(0, pelo);
    cout << char(220);


    colorear(26, 0);
    cout << char(220);



    gotoxy(x + 4, y - 10);

    colorear(0, 0);
    cout << char(220);
    colorear(pelo, pelo);
    cout << char(220);
    colorear(pelo, piel);
    cout << char(220);
    colorear(pelo, 255);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    colorear(piel, 255);
    cout << char(220);
    colorear(pelo, 255);
    cout << char(220);
    colorear(pelo, piel);
    cout << char(220);
    colorear(pelo, pelo);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(220);
    colorear(pelo, pelo);
    cout << char(220);
    colorear(pelo, pelo);
    cout << char(219);
    colorear(pelo, pelo);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);



    gotoxy(x + 4, y - 9);
    
    colorear(0, 26);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    colorear(0, ojos);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(pelo, pelo);
    cout << char(223);
    colorear(pelo, piel);
    cout << char(220);
    colorear(0, pelo);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(pelo, pelo);
    cout << char(219);
    colorear(pelo, pelo);
    cout << char(219);
    colorear(pelo, pelo);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);



    gotoxy(x + 5, y - 8);
   
    colorear(0, 0);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(piel, 255);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(0, 255);
    cout << char(223);
    cout << char(223);
    colorear(0, piel);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 26);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(223);
    colorear(26, 0);
    cout << char(223);



    gotoxy(x + 3, y - 7);
  
    colorear(26, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(0, 255);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219) << char(219);
    colorear(0, 255);
    cout << char(220);
    colorear(26, 0);
    cout << char(220);




    gotoxy(x + 2, y - 6);
   
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(0, 255);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(1, 1);
    cout << char(223);
    colorear(255, 255);
    cout << char(223);
    colorear(0, 255);
    cout << char(223);
    cout << char(223);
    colorear(0, 255);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(223);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
     colorear(0, 0);
    cout << char(219);



    gotoxy(x + 2, y - 5);

    colorear(0, 0);
    cout << char(219);
    colorear(piel, 255);
    cout << char(223) << char(223) << char(223);
    colorear(0, 0);
    cout << char(219) << char(219);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(255, 1);
    cout << char(223);
    colorear(0, 255);
    cout << char(219);
    cout << char(219);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(0, 0);
    cout << char(219) << char(219);
    colorear(piel, 255);
    cout << char(223) << char(223) << char(223);
    colorear(0, 0);
    cout << char(219);



    gotoxy(x + 2, y - 4);
   
    colorear(26, 0);
    cout << char(223);
    colorear(0, piel);
    cout << char(223) << char(223) << char(223);
    colorear(26, 0);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(53, 0);
    cout << char(223) << char(223);
    colorear(0, 53);
    cout << char(220);
    colorear(53, 0);
    cout << char(223);
    colorear(0, 53);
    cout << char(220);
    colorear(53, 0);
    cout << char(223) << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(26, 0);
    cout << char(223);
    colorear(0, piel);
    cout << char(223) << char(223) << char(223);
    colorear(26, 0);
    cout << char(223);




    gotoxy(x + 5, y - 3);
    colorear(26, 0);
    cout << char(220);
    colorear(0, 53);
    cout << char(220);
    colorear(53, 53);
    cout << char(220) << char(220) << char(220);
    colorear(53, 53);
    cout << char(220);
    colorear(53, 0);
    cout << char(220);
    colorear(53, 53);
    cout << char(220);
    colorear(53, 53);
    cout << char(220) << char(220) << char(220);
    colorear(0, 53);
    cout << char(220);
    colorear(26, 0);
    cout << char(220);


    gotoxy(x + 2, y - 2);
   
    colorear(26, 0);
    cout << char(220) << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(53, 0);
    cout << char(220);
    colorear(0, 53);
    cout << char(219) << char(219) << char(219);
    colorear(53, 0);
    cout << char(220);
    colorear(0, 26);
    cout << char(220);
    colorear(0, 26);
    cout << char(219);
    colorear(0, 26);
    cout << char(220);
    colorear(53, 0);
    cout << char(220);
    colorear(0, 53);
    cout << char(219) << char(219) << char(219);
    colorear(53, 0);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(26, 0);
    cout << char(220) << char(220);


    gotoxy(x + 1, y - 1);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 26);
    cout << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
}

void imprimirRivalPoseArriba(int x, int y, int piel, int pelo, int ojos, int cinta) {

    gotoxy(x + 8, y - 12);
    //toma 1
    colorear(26, 0);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223);
    colorear(26, 0);
    cout << char(220);

    gotoxy(x + 7, y - 11);
    //toma 2
    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 7, y - 10);
    //toma 3
    colorear(26, 26);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, cinta);
    cout << char(223);
    colorear(255, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(255, cinta);
    cout << char(223);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(223);
    colorear(0, cinta);
    cout << char(223);
    cout << char(220);
    colorear(26, 0);
    cout << char(220);

    gotoxy(x + 8, y - 9);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, pelo);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, cinta);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(18, 18);
    cout << char(219);


    //aqui
    gotoxy(x + 8, y - 8);
    colorear(0, 0);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(piel, 255);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(0, 255);
    cout << char(223);
    cout << char(223);
    colorear(0, piel);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(cinta, 0);
    cout << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(18, 17);
    cout << char(220);
    cout << char(220);
    cout << char(220);

    //aqui
    gotoxy(x + 1, y - 7);

    colorear(0, 0);
    cout << char(219);
    colorear(0, piel);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 255);
    cout << char(220) << char(219);
    colorear(0, 255);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219) << char(219);
    colorear(0, 255);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);

    //aqui
    gotoxy(x + 1, y - 6);
    colorear(0, 18);
    cout << char(220);
    colorear(0, piel);
    cout << char(223);
    colorear(0, piel);
    cout << char(219) << char(219) << char(219);
    colorear(255, 0);
    cout << char(223);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(0, 255);
    cout << char(223);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(255, 250);
    cout << char(223);
    colorear(250, piel);
    cout << char(223);
    colorear(0, 250);
    cout << char(223);
    colorear(0, piel);
    cout << char(220) << char(220);
    colorear(0, 255);
    cout << char(223);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);

    //aqui
    gotoxy(x + 3, y - 5);

    colorear(0, 18);
    cout << char(220);
    colorear(0, piel);
    cout << char(223) << char(223);
    colorear(0, 255);
    cout << char(223) << char(223) << char(223);
    colorear(0, 18);
    cout << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219) << char(219);
    colorear(250, 0);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(0, piel);
    cout << char(219) << char(219);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(0, 255);
    cout << char(223);
    colorear(0, 18);
    cout << char(220);

    //aqui
    gotoxy(x + 10, y - 4);

    colorear(0, 0);
    cout << char(219);
    colorear(255, 0);
    cout << char(223) << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(255, 0);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(255, 0);
    cout << char(223);
    colorear(0, piel);
    cout << char(223) << char(223);
    colorear(0, 255);
    cout << char(223);
    colorear(17, 0);
    cout << char(223);


    //aqui
    gotoxy(x + 5, y - 3);

    colorear(17, 17);
    cout << char(220);
    colorear(17, 17);
    cout << char(220);
    colorear(17, 17);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(255, 250);
    cout << char(220) << char(220) << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(250, 0);
    cout << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(255, 250);
    cout << char(220) << char(220) << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);
    colorear(17, 17);
    cout << char(220);
    colorear(17, 17);
    cout << char(220);

    //aqui
    gotoxy(x + 5, y - 2);

    colorear(17, 0);
    cout << char(220) << char(220);

    colorear(0, piel);
    cout << char(220);

    colorear(255, piel);
    cout << char(220);

    colorear(0, 255);
    cout << char(219) << char(219) << char(219);

    colorear(255, 0);
    cout << char(220);

    colorear(0, 17);
    cout << char(220);

    colorear(0, 17);
    cout << char(219);

    colorear(0, 17);
    cout << char(220);

    colorear(255, 0);
    cout << char(220);

    colorear(0, 255);
    cout << char(219) << char(219) << char(219);

    colorear(255, piel);
    cout << char(220);

    colorear(0, piel);
    cout << char(220);

    colorear(17, 0);
    cout << char(220) << char(220);

    gotoxy(x + 4, y - 1);

    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 17);
    cout << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
}

void imprimirRivalPoseAbajo(int x, int y, int piel, int pelo, int ojos, int cinta) {
    //1
    gotoxy(x + 8, y - 12);
    colorear(26, 26);
    cout << char(219);
    colorear(26, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(26, 26);
    cout << char(219);

    //2
    gotoxy(x + 7, y - 11);

    colorear(26, 0);
    cout << char(220);
    colorear(0, pelo);
    cout << char(220);
    colorear(0, pelo);
    cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    colorear(0, pelo);
    cout << char(220);
    colorear(26, 0);
    cout << char(220);

    //3
    gotoxy(x + 7, y - 10);
    colorear(0, 26);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(220);
    colorear(pelo, cinta);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(cinta, 0);
    cout << char(223);
    colorear(26, 0);
    cout << char(220);


    //4
    gotoxy(x + 8, y - 9);

    colorear(0, 0);
    cout << char(219);
    colorear(piel, 255);
    cout << char(220);
    colorear(255, ojos);
    cout << char(220);
    colorear(0, piel);
    cout << char(219);
    colorear(255, ojos);
    cout << char(220);
    cout << char(220);
    colorear(piel, 255);
    cout << char(220);
    colorear(0, piel);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(cinta, cinta);
    cout << char(219);
    colorear(0, cinta);
    cout << char(220);
    colorear(18, 0);
    cout << char(220);

    //5
    gotoxy(x + 8, y - 8);

    colorear(0, 0);
    cout << char(223);
    colorear(piel, 255);
    cout << char(223);
    colorear(255, ojos);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(255, ojos);
    cout << char(223);
    cout << char(223);
    colorear(piel, 255);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    cout << char(219);
    cout << char(219);
    colorear(0, pelo);
    cout << char(223);
    colorear(0, 17);
    cout << char(220);
    cout << char(220);
    colorear(cinta, 0);
    cout << char(220);
    colorear(cinta, cinta);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);

    //6
    gotoxy(x + 1, y - 7);

    colorear(17, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(17, 18);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    colorear(0, piel);
    cout << char(220) << char(220) << char(220);
    colorear(piel, piel);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);
    colorear(0, 18);
    cout << char(220);


    //7
    gotoxy(x + 1, y - 6);

    colorear(0, 0);
    cout << char(223);
    colorear(0, piel);
    cout << char(219) << char(219) << char(219);
    colorear(piel, 0);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(255, 0);
    cout << char(223);
    colorear(255, 255);
    cout << char(223) << char(223) << char(223);
    colorear(255, 0);
    cout << char(223) << char(223);
    colorear(250, 0);
    cout << char(223);
    colorear(piel, 0);
    cout << char(223);
    colorear(250, 0);
    cout << char(223);
    colorear(255, 0);
    cout << char(220) << char(220);
    colorear(255, 255);
    cout << char(223);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);


    //8 holaa

    gotoxy(x + 2, y - 5);

    colorear(0, 18);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    colorear(0, piel);
    cout << char(219) << char(219);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, 250);
    cout << char(223);
    colorear(0, 0);
    cout << char(223);
    colorear(0, piel);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, 0);
    cout << char(223);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(255, 255);
    cout << char(223);
    colorear(0, 0);
    cout << char(220);

    //9 holaa
    gotoxy(x + 4, y - 4);

    colorear(17, 0);
    cout << char(223) << char(223) << char(223) << char(223) << char(223);
    colorear(17, 17);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(223) << char(223) << char(223) << char(223);
    colorear(0, 250);
    cout << char(223);
    colorear(0, 0);
    cout << char(223);
    colorear(0, piel);
    cout << char(219) << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, 255);
    cout << char(223);
    colorear(17, 0);
    cout << char(223);

    //10
    gotoxy(x + 5, y - 3);

    colorear(17, 17);
    cout << char(220);
    colorear(17, 17);
    cout << char(220);
    colorear(0, 0);
    cout << " ";
    colorear(0, 255);
    cout << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(255, 250);
    cout << char(220) << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(255, 250);
    cout << char(220);
    colorear(0, 250);
    cout << char(220) << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);
    colorear(17, 17);
    cout << char(220);
    colorear(17, 17);
    cout << char(220);



    //11 okay

    gotoxy(x + 5, y - 2);
    colorear(17, 0);
    cout << char(220) << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(255, piel);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    colorear(0, 17);
    cout << char(219);
    colorear(0, 17);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, piel);
    cout << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(17, 0);
    cout << char(220) << char(220);


    //12
    gotoxy(x + 4, y - 1);

    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 17);
    cout << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);

}

void imprimirRivalGolpe(int x, int y, int piel, int pelo, int ojos, int cinta) {

    gotoxy(x + 8, y - 12);

    colorear(26, 0);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223);
    colorear(26, 0);
    cout << char(220);

    gotoxy(x + 7, y - 11);

    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 7, y - 10);

    colorear(26, 26);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, cinta);
    cout << char(223);
    colorear(255, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(255, cinta);
    cout << char(223);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(223);
    colorear(0, cinta);
    cout << char(223);
    cout << char(220);
    colorear(26, 0);
    cout << char(220);

    gotoxy(x + 8, y - 9);

    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, pelo);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, cinta);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(18, 18);
    cout << char(219);

    //holaa
    gotoxy(x + 1, y - 8);
    colorear(0, 18);
    cout << char(223);
    colorear(piel, 0);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(0, 18);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(piel, 255);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(0, 255);
    cout << char(223);
    cout << char(223);
    colorear(0, piel);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 17);
    cout << char(220);
    colorear(18, 17);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    colorear(18, 17);
    cout << char(220);
    cout << char(220);
    cout << char(220);

    //holfsr
    gotoxy(x, y - 7);
    colorear(0, 0);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(17, 18);
    cout << char(220) << char(220) << char(220) << char(220);



    gotoxy(x, y - 6);

    colorear(0, 18);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(250, 255);
    cout << char(220);
    colorear(piel, 250);
    cout << char(220);
    colorear(250, 255);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(0, piel);
    cout << char(220);
    cout << char(220);
    colorear(18, 0);
    cout << char(220);
    colorear(18, 18);
    cout << char(219);


    gotoxy(x + 2, y - 5);

    colorear(0, 18);
    cout << char(220);
    cout << char(220);
    colorear(18, 18);
    cout << char(219);
    cout << char(219);
    cout << char(219);
    cout << char(219);
    cout << char(219);
    cout << char(219);
    colorear(0, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(250, 250);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(18, 18);
    cout << char(219);


    gotoxy(x + 10, y - 4);

    colorear(0, 0);
    cout << char(219);
    colorear(255, 0);
    cout << char(223) << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(255, 0);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(255, 0);
    cout << char(223);
    colorear(255, 0);
    cout << char(223);
    colorear(0, 0);
    cout << char(223);
    colorear(17, 0);
    cout << char(223);
    cout << char(223);


    gotoxy(x + 8, y - 3);
    colorear(17, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(255, 250);
    cout << char(220) << char(220) << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(250, 0);
    cout << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(255, 250);
    cout << char(220) << char(220) << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);

    gotoxy(x + 5, y - 2);
    colorear(17, 0);
    cout << char(220) << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(255, piel);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    colorear(0, 17);
    cout << char(219);
    colorear(0, 17);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, piel);
    cout << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(17, 0);
    cout << char(220) << char(220);


    gotoxy(x + 4, y - 1);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 17);
    cout << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);


}

void imprimirRivalPatada(int x, int y, int piel, int pelo, int ojos, int cinta) {

    gotoxy(x + 7, y - 13);
    colorear(26, 0);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223);
    colorear(26, 0);
    cout << char(220);

    gotoxy(x + 1, y - 12);
    colorear(26, 0);
    cout << char(220) << char(220);
    colorear(26, 26);
    cout << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 1, y - 11);
    colorear(0, 0);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(26, 26);
    cout << char(220) << char(220);
    colorear(26, 26);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, cinta);
    cout << char(223);
    colorear(255, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(255, cinta);
    cout << char(223);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(223);
    colorear(0, cinta);
    cout << char(223);
    cout << char(220);
    colorear(26, 0);
    cout << char(220);



    gotoxy(x + 1, y - 10);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, piel);
    cout << char(220) << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(26, 0);
    cout << char(220);
    colorear(26, 26);
    cout << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, pelo);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, cinta);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(26, 26);
    cout << char(219);


    gotoxy(x + 1, y - 9);
    colorear(0, 0);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(piel, 255);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(0, 255);
    cout << char(223);
    cout << char(223);
    colorear(0, piel);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(cinta, 0);
    cout << char(220);
    colorear(0, 18);
    cout << char(220);
    colorear(18, 18);
    cout << char(220);
    cout << char(220);
    cout << char(220);


    gotoxy(x + 2, y - 8);

    colorear(0, 17);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(0, 255);
    cout << char(220);
    colorear(18, 0);
    cout << char(220);
    colorear(18, 17);
    cout << char(220);

    gotoxy(x + 4, y - 7);
    colorear(18, 0);
    cout << char(223);
    colorear(0, 255);
    cout << char(223);
    colorear(255, 255);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(255, 0);
    cout << char(223);
    colorear(0, 250);
    cout << char(223);
    colorear(0, piel);
    cout << char(223);
    colorear(piel, 0);
    cout << char(223);
    cout << char(223);
    colorear(255, 0);
    cout << char(223);
    colorear(255, 255);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(0, 0);
    cout << char(223);

    gotoxy(x + 6, y - 6);
    colorear(0, 18);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(0, 0);
    cout << char(223);
    colorear(piel, piel);
    cout << char(223);
    cout << char(223);
    colorear(255, 255);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 18);
    cout << char(220);
    colorear(18, 18);
    cout << char(223);
    cout << char(223);
    //9
    gotoxy(x + 7, y - 5);
    colorear(18, 0);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(0, 18);
    cout << char(220);
    colorear(18, 18);
    cout << char(223);
    cout << char(223);




    gotoxy(x + 5, y - 4);
    colorear(17, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    colorear(250, 255);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    colorear(17, 17);
    cout << char(223);
    cout << char(223);
    cout << char(223);

    gotoxy(x + 4, y - 3);
    colorear(0, 17);
    cout << char(223);
    colorear(0, piel);
    cout << char(220);
    colorear(255, piel);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(17, 17);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);

    gotoxy(x + 4, y - 2);
    colorear(0, 17);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    colorear(17, 17);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);


}

void imprimirRivalDefensa(int x, int y, int piel, int pelo, int ojos, int cinta) {

    gotoxy(x + 7, y - 12);

    colorear(26, 0);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223);
    colorear(26, 0);
    cout << char(220);

    gotoxy(x + 6, y - 11);

    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 7, y - 10);
    //444
    colorear(0, 0);
    cout << char(219);
    colorear(piel, cinta);
    cout << char(223);
    colorear(255, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(255, cinta);
    cout << char(223);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(223);
    colorear(0, cinta);
    cout << char(223);
    cout << char(220);
    colorear(26, 0);
    cout << char(220);


    gotoxy(x + 7, y - 9);
    //holaa
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, pelo);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);

    colorear(0, cinta);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 3, y - 8);

    colorear(0, 18);
    cout << char(223);
    colorear(piel, 0);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(piel, 255);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(0, 255);
    cout << char(223);
    cout << char(223);
    colorear(0, piel);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(cinta, 0);
    cout << char(220);
    colorear(0, 0);
    cout << char(219);


    gotoxy(x + 3, y - 7);

    colorear(0, 0);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    colorear(0, 0);
    cout << char(223);
    cout << char(223);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219) << char(219);
    colorear(0, 255);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);




    //holasss
    gotoxy(x + 3, y - 6);
    colorear(0, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    colorear(255, 250);
    cout << char(223);
    colorear(250, piel);
    cout << char(223);
    colorear(0, 250);
    cout << char(223);
    colorear(255, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);


    //holaaaaa

    gotoxy(x + 4, y - 5);
    colorear(18, 0);
    cout << char(223);
    colorear(0, 255);
    cout << char(223);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 18);
    cout << char(220);

    //holass
    gotoxy(x + 6, y - 4);
    colorear(0, 17);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    colorear(17, 17);
    cout << char(220);


    gotoxy(x + 5, y - 3);
    colorear(17, 17);
    cout << char(220);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(255, 250);
    cout << char(220) << char(220) << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(255, 250);
    cout << char(220) << char(220) << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);
    colorear(17, 17);
    cout << char(220);
    cout << char(220);
    cout << char(220);


    gotoxy(x + 5, y - 2);

    colorear(17, 0);
    cout << char(220) << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(255, piel);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    colorear(0, 17);
    cout << char(219);
    colorear(0, 17);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, piel);
    cout << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(17, 0);
    cout << char(220) << char(220);


    gotoxy(x + 4, y - 1);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 17);
    cout << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);


}

void imprimirKaratecaDefensa(int x, int y, int piel, int pelo, int ojos, int cinta) {

    gotoxy(x + 8, y - 12);

    colorear(26, 0);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223);
    colorear(26, 0);
    cout << char(220);

    gotoxy(x + 7, y - 11);

    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 5, y - 10);
    colorear(26, 0);
    cout << char(220);
    colorear(0, cinta);
    cout << char(220);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    cout << char(223);
    colorear(255, cinta);
    cout << char(223);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(255, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 5, y - 9);
    cout << char(219);
    colorear(0, cinta);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, pelo);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 6, y - 8);
    cout << char(219);
    colorear(cinta, 0);
    cout << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 255);
    cout << char(223);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, 255);
    cout << char(223);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(0, 18);
    cout << char(223);



    gotoxy(x + 4, y - 7);
    colorear(17, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219) << char(219);
    colorear(0, 255);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(223);
    cout << char(223);
    colorear(piel, 0);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);


    //holasss
    gotoxy(x + 3, y - 6);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(0, 255);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 250);
    cout << char(223);
    colorear(250, piel);
    cout << char(223);
    colorear(255, 250);
    cout << char(223);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);


    //holaaaaa

    gotoxy(x + 4, y - 5);
    colorear(0, 18);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 255);
    cout << char(223);
    colorear(18, 0);
    cout << char(223);

    //holass
    gotoxy(x + 5, y - 4);

    colorear(17, 17);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    cout << char(220);
    cout << char(220);



    gotoxy(x + 3, y - 3);
    colorear(17, 17);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(255, 250);
    cout << char(220) << char(220) << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(255, 250);
    cout << char(220) << char(220) << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);
    colorear(17, 17);
    cout << char(220);
    cout << char(220);

    gotoxy(x + 2, y - 2);
    colorear(17, 0);
    cout << char(220) << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(255, piel);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    colorear(0, 17);
    cout << char(219);
    colorear(0, 17);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, piel);
    cout << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(17, 0);
    cout << char(220) << char(220);

    gotoxy(x + 1, y - 1);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 17);
    cout << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
}

void imprimirKaratecaPatada(int x, int y, int piel, int pelo, int ojos, int cinta) {

    gotoxy(x + 7, y - 13);
    colorear(26, 0);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223);
    colorear(26, 0);
    cout << char(220);

    gotoxy(x + 6, y - 12);
    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(26, 26);
    cout << char(220) << char(220) << char(220);
    colorear(26, 0);
    cout << char(220) << char(220);



    gotoxy(x + 4, y - 11);
    colorear(26, 0);
    cout << char(220);
    colorear(0, cinta);
    cout << char(220);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    cout << char(223);
    colorear(255, cinta);
    cout << char(223);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(255, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(26, 26);
    cout << char(219);
    colorear(26, 26);
    cout << char(220) << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);


    gotoxy(x + 3, y - 10);
    colorear(26, 26);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, cinta);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, pelo);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(26, 26);
    cout << char(220);
    colorear(26, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 2, y - 9);
    colorear(18, 18);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 18);
    cout << char(220);
    colorear(cinta, 0);
    cout << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 255);
    cout << char(223);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, 255);
    cout << char(223);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);

    //
    gotoxy(x + 3, y - 8);
    colorear(18, 17);
    cout << char(220);
    colorear(18, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);

    gotoxy(x + 4, y - 7);
    colorear(0, 0);
    cout << char(223);
    colorear(255, 255);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(255, 0);
    cout << char(223);
    colorear(piel, 0);
    cout << char(223);
    cout << char(223);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 250);
    cout << char(223);
    colorear(255, 0);
    cout << char(223);
    colorear(255, 255);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(0, 255);
    cout << char(223);
    colorear(18, 0);
    cout << char(223);

    gotoxy(x + 3, y - 6);
    colorear(18, 18);
    cout << char(223);
    cout << char(223);
    colorear(0, 18);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(piel, piel);
    cout << char(223);
    cout << char(223);
    colorear(0, 0);
    cout << char(223);
    colorear(255, 255);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 18);
    cout << char(220);


    gotoxy(x + 5, y - 5);
    colorear(18, 18);
    cout << char(223);
    cout << char(223);
    colorear(0, 18);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    cout << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(18, 0);
    cout << char(220);

    gotoxy(x + 5, y - 4);
    colorear(17, 17);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(0, 17);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(250, 255);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);


    gotoxy(x + 2, y - 3);
    colorear(17, 17);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(0, 17);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(255, piel);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(0, 17);
    cout << char(223);

    gotoxy(x + 1, y - 2);
    colorear(17, 17);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(0, 17);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);



}

void imprimirKaratecaGolpe(int x, int y, int piel, int pelo, int ojos, int cinta) {

    gotoxy(x + 7, y - 12);

    colorear(26, 0);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223);
    colorear(26, 0);
    cout << char(220);

    gotoxy(x + 6, y - 11);

    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 4, y - 10);

    colorear(26, 0);
    cout << char(220);
    colorear(0, cinta);
    cout << char(220);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    cout << char(223);
    colorear(255, cinta);
    cout << char(223);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(255, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(26, 26);
    cout << char(219);


    gotoxy(x + 3, y - 9);
    colorear(18, 18);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, cinta);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, pelo);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 2, y - 8);
    colorear(18, 17);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    colorear(18, 17);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    colorear(0, piel);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 255);
    cout << char(223);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, 255);
    cout << char(223);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 18);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(piel, 0);
    cout << char(223);
    cout << char(223);
    cout << char(223);
    colorear(0, 18);
    cout << char(223);

    gotoxy(x + 3, y - 7);
    colorear(17, 18);
    cout << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);


    gotoxy(x + 3, y - 6);

    colorear(18, 18);
    cout << char(219);
    colorear(18, 0);
    cout << char(220);
    colorear(0, piel);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    colorear(250, 255);
    cout << char(220);
    colorear(piel, 250);
    cout << char(220);
    colorear(250, 255);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    colorear(0, 18);
    cout << char(220);


    gotoxy(x + 3, y - 5);
    colorear(18, 18);
    cout << char(219);
    colorear(0, 0);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    colorear(250, 250);
    cout << char(220);
    colorear(255, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(18, 18);
    cout << char(219);
    cout << char(219);
    cout << char(219);
    cout << char(219);
    cout << char(219);
    cout << char(219);
    colorear(0, 18);
    cout << char(220);
    cout << char(220);




    gotoxy(x + 5, y - 4);
    colorear(17, 0);
    cout << char(223);
    cout << char(223);
    colorear(0, 0);
    cout << char(223);
    colorear(255, 0);
    cout << char(223);
    colorear(255, 0);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(255, 0);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(255, 0);
    cout << char(223) << char(223);
    colorear(0, 0);
    cout << char(219);



    gotoxy(x + 5, y - 3);
    colorear(17, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(255, 250);
    cout << char(220) << char(220) << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(250, 0);
    cout << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(255, 250);
    cout << char(220) << char(220) << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);

    gotoxy(x + 2, y - 2);
    colorear(17, 0);
    cout << char(220) << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(255, piel);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    colorear(0, 17);
    cout << char(219);
    colorear(0, 17);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, piel);
    cout << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(17, 0);
    cout << char(220) << char(220);

    gotoxy(x + 1, y - 1);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 17);
    cout << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
}

void imprimirKaratecaPoseAbajo(int x, int y, int piel, int pelo, int ojos, int cinta) {

    gotoxy(x + 7, y - 12);
    colorear(26, 26);
    cout << char(219);
    colorear(26, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(26, 26);
    cout << char(219);

    //hola
    gotoxy(x + 6, y - 11);

    colorear(26, 0);
    cout << char(220);
    colorear(0, pelo);
    cout << char(220);
    colorear(0, pelo);
    cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    colorear(0, pelo);
    cout << char(220);
    colorear(26, 0);
    cout << char(220);


    gotoxy(x + 5, y - 10);
    colorear(26, 0);
    cout << char(220);
    colorear(cinta, 0);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(220);
    colorear(0, 26);
    cout << char(220);

    gotoxy(x + 3, y - 9);
    colorear(18, 0);
    cout << char(220);
    colorear(0, cinta);
    cout << char(220);
    colorear(cinta, cinta);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, 255);
    cout << char(220);
    colorear(255, ojos);
    cout << char(220);
    cout << char(220);
    colorear(0, piel);
    cout << char(219);
    colorear(255, ojos);
    cout << char(220);
    colorear(piel, 255);
    cout << char(220);
    colorear(0, 0);
    cout << char(219);


    //
    gotoxy(x + 2, y - 8);
    colorear(0, 0);
    cout << char(219);
    colorear(cinta, cinta);
    cout << char(219);
    colorear(cinta, 0);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    cout << char(220);
    colorear(0, pelo);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    cout << char(219);
    cout << char(219);
    colorear(piel, 255);
    cout << char(223);
    colorear(255, ojos);
    cout << char(223);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(255, ojos);
    cout << char(223);
    colorear(piel, 255);
    cout << char(223);
    colorear(0, 0);
    cout << char(223);

    //
    gotoxy(x + 3, y - 7);
    colorear(0, 18);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    colorear(piel, piel);
    cout << char(220);
    colorear(0, piel);
    cout << char(220) << char(220) << char(220);
    colorear(piel, piel);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 0);
    cout << char(220);
    colorear(17, 18);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    cout << char(220);

    gotoxy(x + 3, y - 6);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(255, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(223);
    colorear(255, 0);
    cout << char(220) << char(220);
    colorear(250, 0);
    cout << char(223);
    colorear(piel, 0);
    cout << char(223);
    colorear(250, 0);
    cout << char(223);
    colorear(255, 0);
    cout << char(223) << char(223);
    colorear(255, 255);
    cout << char(223) << char(223) << char(223);
    colorear(255, 0);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(223);
    colorear(0, piel);
    cout << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(223);

    gotoxy(x + 3, y - 5);
    colorear(0, 0);
    cout << char(220);
    colorear(255, 255);
    cout << char(223);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(piel, 0);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 0);
    cout << char(223);
    colorear(255, 250);
    cout << char(223);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(0, piel);
    cout << char(219) << char(219);
    colorear(piel, 0);
    cout << char(220);
    colorear(0, 18);
    cout << char(220);

    //
    gotoxy(x + 4, y - 4);
    colorear(17, 0);
    cout << char(223);

    colorear(0, 255);
    cout << char(223);
    colorear(0, 255);
    cout << char(219);
    colorear(0, piel);
    cout << char(219) << char(219);
    colorear(0, 0);
    cout << char(223);
    colorear(0, 250);
    cout << char(223);
    colorear(0, 255);
    cout << char(223) << char(223) << char(223) << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(17, 17);
    cout << char(219);
    colorear(17, 0);
    cout << char(223) << char(223) << char(223) << char(223) << char(223);

    gotoxy(x + 4, y - 3);
    colorear(17, 17);
    cout << char(220);
    colorear(17, 17);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 250);
    cout << char(220) << char(220);
    colorear(255, 250);
    cout << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(255, 250);
    cout << char(220) << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 0);
    cout << " ";
    colorear(17, 17);
    cout << char(220);
    colorear(17, 17);
    cout << char(220);

    gotoxy(x + 2, y - 2);
    colorear(17, 0);
    cout << char(220) << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(255, piel);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    colorear(0, 17);
    cout << char(219);
    colorear(0, 17);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, piel);
    cout << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(17, 0);
    cout << char(220) << char(220);

    gotoxy(x + 1, y - 1);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 17);
    cout << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
}

void imprimirKaratecaPoseArriba(int x, int y, int piel, int pelo, int ojos, int cinta) {

    gotoxy(x + 7, y - 12);
    //toma 1
    colorear(26, 0);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223);
    colorear(26, 0);
    cout << char(220);

    gotoxy(x + 6, y - 11);
    //toma 2
    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 4, y - 10);
    //toma 3
    colorear(26, 0);
    cout << char(220);
    colorear(0, cinta);
    cout << char(220);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(pelo, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    cout << char(223);
    colorear(255, cinta);
    cout << char(223);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(255, cinta);
    cout << char(223);
    colorear(piel, cinta);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(26, 26);
    cout << char(219);


    gotoxy(x + 3, y - 9);
    colorear(18, 18);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, cinta);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, pelo);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 2, y - 8);
    colorear(18, 17);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(cinta, 0);
    cout << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 255);
    cout << char(223);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, 255);
    cout << char(223);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);


    gotoxy(x + 3, y - 7);
    colorear(17, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219) << char(219);
    colorear(0, 255);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(220);

    colorear(17, 0);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, piel);
    cout << char(220);
    cout << char(220);
    cout << char(220);
    colorear(0, 0);
    cout << char(219);


    gotoxy(x + 3, y - 6);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 255);
    cout << char(223);
    colorear(0, piel);
    cout << char(220) << char(220);
    colorear(0, 250);
    cout << char(223);
    colorear(250, piel);
    cout << char(223);
    colorear(255, 250);
    cout << char(223);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(0, 255);
    cout << char(223);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, 0);
    cout << char(223);
    colorear(0, piel);
    cout << char(219) << char(219) << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 18);
    cout << char(220);

    gotoxy(x + 3, y - 5);
    colorear(0, 18);
    cout << char(220);
    colorear(0, 255);
    cout << char(223);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(0, piel);
    cout << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(250, 0);
    cout << char(223);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 18);
    cout << char(220);
    colorear(0, 255);
    cout << char(223) << char(223) << char(223);
    colorear(0, piel);
    cout << char(223) << char(223);
    colorear(0, 18);
    cout << char(220);
    //
    gotoxy(x + 5, y - 4);
    colorear(17, 0);
    cout << char(223);
    colorear(0, 255);
    cout << char(223);
    colorear(0, piel);
    cout << char(223) << char(223);
    colorear(255, 0);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(255, 0);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(255, 0);
    cout << char(223) << char(223);
    colorear(0, 0);
    cout << char(219);



    gotoxy(x + 3, y - 3);
    colorear(17, 17);
    cout << char(220);
    colorear(17, 17);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(255, 250);
    cout << char(220) << char(220) << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(250, 0);
    cout << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(255, 250);
    cout << char(220) << char(220) << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(17, 0);
    cout << char(220);
    colorear(17, 17);
    cout << char(220);
    colorear(17, 17);
    cout << char(220);
    colorear(17, 17);
    cout << char(220);

    gotoxy(x + 2, y - 2);
    colorear(17, 0);
    cout << char(220) << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(255, piel);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    colorear(0, 17);
    cout << char(219);
    colorear(0, 17);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, piel);
    cout << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(17, 0);
    cout << char(220) << char(220);

    gotoxy(x + 1, y - 1);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 17);
    cout << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
}

void imprimirKarateca1(int x, int y, int piel, int pelo, int ojos) {

    gotoxy(x + 7, y - 12);

    colorear(80, 0);
    cout << char(220);
    colorear(pelo, 0);
    cout << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223) << char(223);
    colorear(80, 0);
    cout << char(220);

    gotoxy(x + 6, y - 11);

    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 4, y - 10);
    colorear(80, 0);
    cout << char(220);
    colorear(0, 17);
    cout << char(220);
    cout << char(223);
    colorear(pelo, 17);
    cout << char(223);
    colorear(piel, 17);
    cout << char(223);
    colorear(pelo, 17);
    cout << char(223);
    colorear(piel, 17);
    cout << char(223);
    cout << char(223);
    colorear(255, 17);
    cout << char(223);
    cout << char(223);
    colorear(piel, 17);
    cout << char(223);
    colorear(255, 17);
    cout << char(223);
    colorear(piel, 17);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 4, y - 9);
    cout << char(219);
    colorear(0, 17);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, pelo);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, pelo);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(219);
    colorear(0, ojos);
    cout << char(219);
    colorear(0, 255);
    cout << char(219);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 5, y - 8);
    cout << char(219);
    colorear(17, 0);
    cout << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    cout << char(219);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 255);
    cout << char(223);
    cout << char(223);
    colorear(0, piel);
    cout << char(219);
    colorear(piel, 255);
    cout << char(223);
    colorear(0, piel);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 3, y - 7);
    colorear(80, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219) << char(219);
    colorear(0, 255);
    cout << char(220);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(0, 255);
    cout << char(220);
    colorear(80, 0);
    cout << char(220);

    gotoxy(x + 2, y - 6);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(0, 255);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(255, 250);
    cout << char(223);
    colorear(250, piel);
    cout << char(223);
    colorear(255, 250);
    cout << char(223);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 255);
    cout << char(223);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 2, y - 5);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 255);
    cout << char(223) << char(223) << char(223);
    colorear(0, 0);
    cout << char(219) << char(219);
    colorear(0, 255);
    cout << char(219) << char(219);
    colorear(0, 250);
    cout << char(219);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219) << char(219);
    colorear(piel, 255);
    cout << char(223) << char(223) << char(223);
    colorear(0, 0);
    cout << char(219);

    gotoxy(x + 2, y - 4);
    colorear(80, 0);
    cout << char(223);
    colorear(0, piel);
    cout << char(223) << char(223) << char(223);
    colorear(80, 0);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(255, 0);
    cout << char(223) << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(255, 0);
    cout << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(255, 0);
    cout << char(223) << char(223);
    colorear(0, 0);
    cout << char(219);
    colorear(80, 0);
    cout << char(223);
    colorear(0, piel);
    cout << char(223) << char(223) << char(223);
    colorear(80, 0);
    cout << char(223);

    gotoxy(x + 5, y - 3);
    colorear(80, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(255, 250);
    cout << char(220) << char(220) << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(250, 0);
    cout << char(220);
    colorear(0, 250);
    cout << char(220);
    colorear(255, 250);
    cout << char(220) << char(220) << char(220);
    colorear(0, 255);
    cout << char(220);
    colorear(80, 0);
    cout << char(220);

    gotoxy(x + 2, y - 2);
    colorear(80, 0);
    cout << char(220) << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(255, piel);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 80);
    cout << char(220);
    colorear(0, 80);
    cout << char(219);
    colorear(0, 80);
    cout << char(220);
    colorear(255, 0);
    cout << char(220);
    colorear(0, 255);
    cout << char(219) << char(219) << char(219);
    colorear(255, piel);
    cout << char(220);
    colorear(0, piel);
    cout << char(220);
    colorear(80, 0);
    cout << char(220) << char(220);

    gotoxy(x + 1, y - 1);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
    colorear(0, 80);
    cout << char(219) << char(219) << char(219);
    colorear(0, 0);
    cout << char(219);
    colorear(piel, 0);
    cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
    colorear(0, 0);
    cout << char(219);
}


void presentacionx(int x, int y)
{
    colorear(17, 1);
    string santiago[11] = {
     "   000000000                                0000                                   ",
     " 0000000000                         0000   000                                     ",
     " 0000                              0000000 0000                                    ",
     " 0000         000000000 000000000  0000000 0000   000000000   000000000   0000000  ",
     " 000000000  00000000000 00000000000 0000   0000  0000000000 00000000000  0000000000",
     "   00000000 0000   0000 0000   0000 0000   0000 0000   0000 0000   0000 0000   0000",
     "       000000000   0000 0000   0000 0000   0000 0000   0000 0000   0000 0000   0000",
     "00000000000 00000000000 0000   0000 000000 0000  0000000000 00000000000 0000000000 ",
     "  00000000    00000 000 0000   0000  00000 0000   00000 000      000000   0000000  ",
     "                                                            0000000000             ",
     "                                                            000000000              " };

    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < santiago[i].length(); j++) {

            if (santiago[i][j] == '0') {
                if (j < 60) {
                    colorear(45, 17);
                }
                else {
                    colorear(9, 17);
                }
                gotoxy(x + j, y + i);
                cout << char(177);
            }

        }
    }

    string anio2023[11] = {
     "   00000000000000      000000000000000       00000000000000     0000000000000000           ",
     " 00000000000000000    00000000000000000    00000000000000000    00000000000000000          ",
     "0000000      000000  0000000     0000000  000000      0000000             0000000          ",
     "000000       000000  000000       000000  00000       0000000             000000           ",
     "              00000  000000       000000                00000          0000000             ",
     "          00000000   000000       000000           000000000           000000000           ",
     "  0000000000000      000000       000000   0000000000000                  000000           ",
     " 000000              000000       000000  000000                           000000          ",
     "000000               0000000     0000000 000000                000000     0000000          ",
     "00000000000000000000  00000000000000000  00000000000000000000  00000000000000000           ",
     " 0000000000000000000       0000000        0000000000000000000      000000000               " };


    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < anio2023[i].length(); j++) {

            if (anio2023[i][j] == '0') {
                if (j < 21) {
                    colorear(45, 17);
                }

                else if (j < 41) {
                    colorear(226, 17);
                }
                else if (j < 63) {
                    colorear(197, 17);
                }
                else {
                    colorear(43, 17);
                }
                gotoxy(x + j + 90, y + i);
                cout << char(177);
            }

        }
    }

}

void imprimirEscenario(int Nronda) {

    int escenario[45][190] = {
        //                 10                  20                  30                  40                  50                  60                  70                  80                  90                 100                 110                 120                 130                 140                 150                 160                 170                 180                 189
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,0,0,0,},
       {0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,},
       {0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,},
       {0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,},
       {0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,},
       {0,0,0,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,1,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,1,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,} };


    for (int i = 0; i < 45; i++)
    {
        for (int j = 0; j < 190; j++) {
            switch (escenario[i][j]) {
            case 0:

                colorear(26, 0);
                gotoxy(j, i); cout << " ";
                break;
            case 1:
                colorear(141, 196);
                gotoxy(j, i); cout << char(219);
                break;
            case 2:
                colorear(141, 196);
                gotoxy(j, i); cout << char(223);
                break;
            case 3:
                colorear(196, 141);
                gotoxy(j, i); cout << char(219);
                break;
            case 4:
                colorear(26, 196);
                gotoxy(j, i); cout << char(220);
                break;
            case 5:
                colorear(26, 196);
                gotoxy(j, i); cout << char(223);
                break;
            case 6:
                colorear(18, 0);
                gotoxy(j, i); cout << " ";
                break;
            case 7:
                colorear(1, 1);
                gotoxy(j, i); cout << " ";;

                break;
            case 8:
                colorear(18, 1);
                gotoxy(j, i); cout << char(220);
                break;
            case 9:
                colorear(18, 1);
                gotoxy(j, i); cout << char(223);
                break;
            case 11:
                colorear(26, 18);
                gotoxy(j, i); cout << char(223);
                break;
            case 12:
                colorear(141, 196);
                gotoxy(j, i); cout << char(220);
                break;

            }
        }
    }


    //gotoxy(6, 3); cout << "Cuadro estadisticas 1";

    //gotoxy(158, 3); cout << "Cuadro estadisticas 2";

    //gotoxy(90, 10); cout << "Juez";

    //gotoxy(60, 22); cout << "Karateka 1";

   // gotoxy(120, 22); cout << "Karateka 2";

   // gotoxy(140, 38); cout << "Cuadro de opciones";

    colorear(26, 220);
    switch (Nronda)
    {
    case 1:
        gotoxy(87, 1); cout << "Cuartos de final" << endl;
        break;

    case 2:
        gotoxy(90, 1); cout << "Semifinal" << endl;  //7
        break;

    case 3:
        gotoxy(90, 1); cout << "Gran final" << endl;
        break;
    }
}

void presentacion(int x, int y)
{
    gotoxy(x - 30, y);     cout << "       00000000                                 0000                                            ";
    gotoxy(x - 30, y + 1); cout << "     0000000000                         0000   000                                             ";
    gotoxy(x - 30, y + 2); cout << "     0000  000    000000000 000000000  0000000 0000  000000000   000000000   0000000           ";
    gotoxy(x - 30, y + 3); cout << "     0000  000    000000000 000000000  0000000 0000  000000000   000000000   0000000           ";
    gotoxy(x - 30, y + 4); cout << "     000000000  00000000000 000000000000000000 000000000000000 00000000000  0000000000         ";
    gotoxy(x - 30, y + 5); cout << "       00000000 0000   0000 0000   0000 0000   00000000   0000 0000   0000 0000   0000         ";
    gotoxy(x - 30, y + 6); cout << "     000   000000000   0000 0000   0000 0000   00000000   0000 0000   0000 0000   0000         ";
    gotoxy(x - 30, y + 7); cout << "    00000000000 00000000000 0000   0000 000000 000000000000000 00000000000 0000000000          ";
    gotoxy(x - 30, y + 8); cout << "      00000000    000000000 0000   0000  00000 0000  000000000   000000000   0000000           ";
    gotoxy(x - 30, y + 9); cout << "                                                                0000000000                     ";
    gotoxy(x - 30, y + 10); cout << "                                                                000000000                      ";
    gotoxy(x - 30, y + 11); cout << " ";
    gotoxy(x - 30, y + 12); cout << " ";
    gotoxy(x - 30, y + 13); cout << "          0000000000           0000000000          0000000000      0000000000000000000         ";
    gotoxy(x - 30, y + 14); cout << "        00000000000000      000000000000000      000000000000000   0000000000000000000         ";
    gotoxy(x - 30, y + 15); cout << "      00000000000000000    00000000000000000    00000000000000000  0000000000000000000         ";
    gotoxy(x - 30, y + 16); cout << "     0000000 0000 000000  0000000     0000000  000000 0000 0000000            0000000          ";
    gotoxy(x - 30, y + 17); cout << "     00000000000000000000 000000       000000  00000 0000000000000           0000000           ";
    gotoxy(x - 30, y + 18); cout << "                   0000000000000 000 00000000        0000000 00000         0000000             ";
    gotoxy(x - 30, y + 18); cout << "                  0000000 0 00000000000000000        000000 000000        000000000            ";
    gotoxy(x - 30, y + 19); cout << "               000000000   0000000000 000 000           000000000       000000000000           ";
    gotoxy(x - 30, y + 20); cout << "         00000000000000  00000000000 000 000      00000000000000              0000000          ";
    gotoxy(x - 30, y + 21); cout << "       00000000000000    00 000 000 000 00000   00000000000000                  000000         ";
    gotoxy(x - 30, y + 22); cout << "      0000000000          00000000 000 000000  00000000000        000000        000000         ";
    gotoxy(x - 30, y + 23); cout << "     000000               000000       000000  000000             000000        000000         ";
    gotoxy(x - 30, y + 24); cout << "     000000               0000000     0000000 000000               0000000    0000000          ";
    gotoxy(x - 30, y + 25); cout << "     00000000000000000000  00000000000000000  00000000000000000000  0000000000000000           ";
    gotoxy(x - 30, y + 26); cout << "     00000000000000000000    0000000000000    00000000000000000000   00000000000000            ";
    gotoxy(x - 30, y + 27); cout << "     00000000000000000000       0000000        0000000000000000000      00000000               ";
    gotoxy(x - 30, y + 28); cout << "";
}

void borrarKarateka(int x, int y) {



    int escenario[45][190] = {
        //                 10                  20                  30                  40                  50                  60                  70                  80                  90                 100                 110                 120                 130                 140                 150                 160                 170                 180                 189
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,0,0,0,},
       {0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,},
       {0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,},
       {0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,},
       {0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,},
       {0,0,0,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,1,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,1,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,} };

    for (int i = 0; i < 45; i++)
    {
        for (int j = 0; j < 190; j++) {
            if (j >= x && j < x + 26 && i > y - 14 && i < y) {
                switch (escenario[i][j]) {
                case 0:

                    colorear(26, 0);
                    gotoxy(j, i); cout << " ";
                    break;
                case 1:
                    colorear(141, 196);
                    gotoxy(j, i); cout << char(219);
                    break;
                case 2:
                    colorear(141, 196);
                    gotoxy(j, i); cout << char(223);
                    break;
                case 3:
                    colorear(196, 141);
                    gotoxy(j, i); cout << char(219);
                    break;
                case 4:
                    colorear(26, 196);
                    gotoxy(j, i); cout << char(220);
                    break;
                case 5:
                    colorear(26, 196);
                    gotoxy(j, i); cout << char(223);
                    break;
                case 6:
                    colorear(18, 0);
                    gotoxy(j, i); cout << " ";
                    break;
                case 7:
                    colorear(1, 1);
                    gotoxy(j, i); cout << " ";;

                    break;
                case 8:
                    colorear(18, 1);
                    gotoxy(j, i); cout << char(220);
                    break;
                case 9:
                    colorear(18, 1);
                    gotoxy(j, i); cout << char(223);
                    break;
                case 11:
                    colorear(26, 18);
                    gotoxy(j, i); cout << char(223);
                    break;
                case 12:
                    colorear(141, 196);
                    gotoxy(j, i); cout << char(220);
                    break;

                }
            }
        }
    }

}

void borrarEstado() {


    int escenario[45][190] = {
        //                 10                  20                  30                  40                  50                  60                  70                  80                  90                 100                 110                 120                 130                 140                 150                 160                 170                 180                 189
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,0,0,0,},
       {0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,},
       {0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,},
       {0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,},
       {0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,},
       {0,0,0,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,1,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,1,0,0,},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,} };

    for (int i = 0; i < 45; i++) {
        for (int j = 0; j < 190; j++) {
            if (j > 100 && i > 30 && escenario[i][j] == 3) {
                colorear(196, 141);
                gotoxy(j, i); cout << char(219);
            }
        }
    }

}

// faltan detalles, validaciones y todas las animaciones pero es un rough estimate
struct Pais {
    string nombre;
    int piel;
    int pelo;
    int ojo;
    int cinta;
    int resistencia;
};

struct Pelea {
    Pais* jugador;
    Pais* rival;
    int posicionJugador;
    int posicionRival;
    int penalidadesJugador;
    int penalidadesRival;
    int puntuacionJugador;
    int puntuacionRival;
};

int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Función para determinar si un ataque falla (10% de probabilidad)
bool ataqueFalla() {
    return rand() % 10 == 0;
}

Pais elegirPais() {
    gotoxy(88,13); cout << "Elige tu país:" << endl;
     gotoxy(80,15); cout << "1. USA" << endl;
     gotoxy(80,16); cout << "2. CHILE" << endl;
     gotoxy(80,17); cout << "3. BRAZIL" << endl;
     gotoxy(80,18); cout << "4. COLOMBIA" << endl;
     gotoxy(80,19); cout << "5. MEXICO" << endl;
     gotoxy(80,20); cout << "6. PERU" << endl;
     gotoxy(80,21); cout << "7. CANADA" << endl;
     gotoxy(80,22); cout << "8. ARGENTINA" << endl;
     gotoxy(80,23); cout << "9. BOLIVIA" << endl;
     gotoxy(80,24); cout << "10. REPUBLICA DOMINICANA" << endl;

    int opcion;
    gotoxy(80, 26); cout << "Ingresa el número de tu elección: ";
 opcion = readInt();

    switch (opcion) {
    case 1: return { "USA", 229, 227, 6, 1, 20 };
    case 2: return { "CHILE", 229, 0, 107, 1, 20 };
    case 3: return { "BRAZIL", 94, 0, 107, 106, 20 };
    case 4: return { "COLOMBIA", 52, 0, 0, 226, 20 };
    case 5: return { "MEXICO", 94, 52, 0, 28, 20 };
    case 6: return { "PERU", 229, 52, 0, 1, 20 };
    case 7: return { "CANADA", 229, 3, 6, 1, 20 };
    case 8: return { "ARGENTINA",229, 52, 107, 45, 20 };
    case 9: return { "BOLIVIA", 94, 0, 0, 34, 20 };
    case 10: return { "REPUBLICA DOM.", 52, 0, 6, 53, 20 };
    default: return { "USA", 229, 227, 6, 1, 20 };
    }
}

void mostrarEstado(const Pelea* pelea) {
    colorear(141, 0);
    //gotoxy(90, 20); cout << "-------------------" << endl;
    gotoxy(5, 2); cout << "Posición del jugador: " << pelea->posicionJugador - 50; cout << "  ";
    gotoxy(5, 3); cout << " Penalidades acumuladas: " << pelea->penalidadesJugador ; cout << "  ";
    gotoxy(5, 4); cout << " Resistencia del jugador: " << pelea->jugador->resistencia; cout << "  ";
    gotoxy(5, 5); cout << " Pais del jugador: " << pelea->jugador->nombre; cout << "  ";
    gotoxy(150, 2); cout << "Posición del rival: " << -1 * (pelea->posicionRival - 115); cout << "  ";
    gotoxy(150, 3); cout << " Penalidades acumuladas: " << pelea->penalidadesRival; cout << "  ";
    gotoxy(150, 4); cout << " Resistencia del rival: " << pelea->rival->resistencia; cout << "  ";
    gotoxy(150, 5); cout << " Pais del rival: " << pelea->rival->nombre; cout << "  ";
  
    // gotoxy(90, 12); cout << "Diseño del jugador: " << pelea->jugador->diseño << endl;
    // gotoxy(90, 24); cout << "Diseño del enemigo: " << pelea->enemigo->diseño << endl;
    // gotoxy(90, 25); cout << "-------------------" << endl;
}

void mostrarPuntuacion(const Pelea* pelea) {
    cout << "-------------------" << endl;
    cout << "Puntuación del jugador: " << pelea->puntuacionJugador << endl;
    cout << "Puntuación del enemigo: " << pelea->puntuacionRival << endl;
    cout << "-------------------" << endl;
}

int turnoJugador(Pelea* pelea, int posiJugador, int posiRival) {
    int decisionJugador = 0;
    colorear(0, 196);
    int a = 0;
    while (true) {
        char tecla;
        if (a % 16 == 0) {
            imprimirKaratecaPoseAbajo(posiJugador, 25, pelea->jugador->piel, pelea->jugador->pelo, pelea->jugador->ojo, pelea->jugador->cinta);
            imprimirRivalPoseAbajo(posiRival, 25, pelea->rival->piel, pelea->rival->pelo, pelea->rival->ojo, pelea->rival->cinta);
            a = a + 4;
        }
        else if (a % 8 == 0) {

            imprimirKaratecaPoseArriba(posiJugador, 25, pelea->jugador->piel, pelea->jugador->pelo, pelea->jugador->ojo, pelea->jugador->cinta);
            imprimirRivalPoseArriba(posiRival, 25, pelea->rival->piel, pelea->rival->pelo, pelea->rival->ojo, pelea->rival->cinta);
        }

        colorear(141, 0);
        gotoxy(130 - 18, 35); cout << " Qué decides hacer? (1: Atacar, 2: Defenderse): ";

        if (kbhit()) {
            tecla = getch();

            gotoxy(177 - 18, 35); cout << "  ";
            gotoxy(175 - 18, 36); cout << "  ";
            gotoxy(130 - 18, 35); cout << " Qué decides hacer? (1: Atacar, 2: Defenderse): ";
            gotoxy(177 - 18, 35); cout << tecla;
            if (tecla == '1') {
                decisionJugador = 1;
            }
            if (tecla == '2') {
                decisionJugador = 2;
            }
            if (decisionJugador == 1) {

                if (ataqueFalla()) {
                    gotoxy(130 - 18, 36);   cout << " Tu ataque falló!" << endl;
                    return 4;
                }
                else {
                    while (1) {
                        if (a % 16 == 0) {
                            imprimirKaratecaPoseAbajo(posiJugador, 25, pelea->jugador->piel, pelea->jugador->pelo, pelea->jugador->ojo, pelea->jugador->cinta);
                            imprimirRivalPoseAbajo(posiRival, 25, pelea->rival->piel, pelea->rival->pelo, pelea->rival->ojo, pelea->rival->cinta);

                            a = a + 4;
                        }
                        else if (a % 8 == 0) {

                            imprimirKaratecaPoseArriba(posiJugador, 25, pelea->jugador->piel, pelea->jugador->pelo, pelea->jugador->ojo, pelea->jugador->cinta);
                            imprimirRivalPoseArriba(posiRival, 25, pelea->rival->piel, pelea->rival->pelo, pelea->rival->ojo, pelea->rival->cinta);
                        }
                        colorear(141, 0);
                        gotoxy(175 - 18, 36); cout << "  ";
                        gotoxy(130 - 18, 36);   cout << " Qué tipo de ataque? (1: Puñete, 2: Patada): ";

                        if (kbhit()) {
                            int ataqueJugador = 0;
                            tecla = getch();

                            colorear(141, 0);
                            gotoxy(175 - 18, 36); cout << "  ";
                            gotoxy(130 - 18, 36);   cout << " Qué tipo de ataque? (1: Puñete, 2: Patada): ";
                            cout << tecla;

                            if (tecla == '1') {
                                ataqueJugador = 1;
                            }
                            if (tecla == '2') {
                                ataqueJugador = 2;
                            }

                            if (ataqueJugador == 1) {
                                pelea->posicionJugador = pelea->posicionJugador + recuperacionGolpe;
                                pelea->posicionRival = pelea->posicionRival + empujeGolpe;
                                pelea->rival->resistencia = pelea->rival->resistencia - danoGolpe;
                                gotoxy(130 - 18, 38);   cout << "Usaste Puñetaso!! -" << danoGolpe << " resistencia rival  +" << recuperacionGolpe << " posicion  -" << empujeGolpe << " posicion rival";
                                borrarKarateka(posiJugador, 25);
                                borrarKarateka(posiRival, 25);
                                return 1;
                            }

                            if (ataqueJugador == 2) {

                                pelea->posicionRival = pelea->posicionRival + empujePatada;
                                pelea->rival->resistencia = pelea->rival->resistencia - danoPatada;
                                gotoxy(130 - 18, 38);   cout << "Usaste patada!! -" << danoPatada << " resistencia rival  -" << empujePatada << " posicion rival";
                                borrarKarateka(posiJugador, 25);
                                borrarKarateka(posiRival, 25);
                                return 2;
                            }
                        }
                        a++;
                        _sleep(40);
                    }
                }
            }
            if (decisionJugador == 2) {

                pelea->jugador->resistencia = pelea->jugador->resistencia + 1;

                borrarKarateka(posiJugador, 25);
                borrarKarateka(posiRival, 25);
                colorear(141, 0);
                gotoxy(130 - 18, 37);   cout << "Te has defendido!!  +1 resistencia" << endl;
                return 3;
            }
        }

        a++;
        _sleep(40);
    }


}

int turnoRival(Pelea* pelea, int posiJugador, int posiRival) {
   int decisionEnemigo = generateRandomNumber(1, 3);
   colorear(141, 0);
    int f;
    if (decisionEnemigo !=2) {
        if (ataqueFalla()) {
  
            gotoxy(130 - 18, 40);
            cout << " El ataque enemigo falló!" << endl;
            borrarKarateka(posiJugador, 25);
            borrarKarateka(posiRival, 25);
            return 4;
        }
        else {
     int ataqueEnemigo = generateRandomNumber(1, 2);
     
            if (ataqueEnemigo == 1) {
                pelea->posicionRival = pelea->posicionRival - recuperacionGolpe;
                pelea->posicionJugador = pelea->posicionJugador - empujeGolpe;
                pelea->jugador->resistencia = pelea->jugador->resistencia - danoGolpe;
                gotoxy(130 - 18, 40);   cout << "El rival uso Puñetazo!!  -" << danoGolpe << " resistencia  +" << recuperacionGolpe << " posicion rival  -" << empujeGolpe << " posicion ";

                borrarKarateka(posiJugador, 25);
                borrarKarateka(posiRival, 25);

                return 1;
            }

            if (ataqueEnemigo == 2) {
                pelea->posicionJugador = pelea->posicionJugador - empujePatada;
                pelea->jugador->resistencia = pelea->jugador->resistencia - danoPatada;
                gotoxy(130 - 18, 40);   cout << "El rival uso Patada!!  -" << danoPatada << " resistencia  -" << empujePatada << " posicion";

                borrarKarateka(posiJugador, 25);
                borrarKarateka(posiRival, 25);
                return 2;

            }
        }
    }

    if (decisionEnemigo == 2) {
        gotoxy(130 - 18, 40);   cout << "El rival se defendio!!  +1 resistencia rival";
        pelea->rival->resistencia = pelea->rival->resistencia + 1;

        borrarKarateka(posiJugador, 25);
        borrarKarateka(posiRival, 25);
        return 3;
    }

}

// Función para el menú inicial, el setfill es para q este centrado, luego lo cambiamos
int mostrarMenu() {
    cout << setfill('-') << setw(40) << "" << endl;
    cout << "|           SANTIAGO 2024           |" << endl;
    cout << setfill('-') << setw(40) << "" << endl;
    cout << "1. Jugar" << endl;
    cout << "2. Instrucciones" << endl;
    cout << "3. Créditos" << endl;
    cout << "4. Salir" << endl;

    int opcion;
    cout << "Ingresa el número de tu elección: ";
    opcion = readInt();
    return opcion;
}


void podio(int p1, int p2, int p3) {

    gotoxy(0, 0);
    colorear(17, 17);
    for (int i = 0; i < 45; i++)
    {
        for (int j = 0; j < 190; j++) {
            cout << " ";
        }
    }

    presentacionx(9, 30);

    int escenario[45][190] = {
        //                 10                  20                  30                  40                  50                  60                  70                  80                  90                 100                 110                 120                 130                 140                 150                 160                 170                 180                 189
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,8,8,8,8,8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,8,8,1,1,1,1,1,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,9,9,9,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,7,7,7,9,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,9,9,9,9,7,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,8,8,8,8,8,8,8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };
    for (int i = 0; i < 45; i++)
    {
        for (int j = 0; j < 190; j++) {
            if (escenario[i][j] == 1) {
                gotoxy(j, i);
                colorear(14, 14);
                cout << char(219);
            }
            if (escenario[i][j] == 2 || escenario[i][j] == 8) {
                gotoxy(j, i);
                colorear(1, 1);
                cout << char(219);
            }
            if (escenario[i][j] == 9) {
                gotoxy(j, i);
                colorear(14, 1);
                cout << char(220);
            }
            if (escenario[i][j] == 7) {
                gotoxy(j, i);
                colorear(14, 1);
                cout << char(223);
            }
        }
    }
    colorear(14, 1);
    switch (p1)
    {
    case 1:
        imprimirKaratecaPoseArriba(78, 14, 229, 227, 6, 1);
       
        colorear(14, 1); 
        gotoxy(85, 14);
        cout << "USA";
        break;
    case 2:
        imprimirKaratecaPoseArriba(78, 14, 229, 0, 107, 1);
        gotoxy(83, 14);
        colorear(14, 1);
        cout << "CHILE";
        break;
    case 3:
        imprimirKaratecaPoseArriba(78, 14, 94, 0, 107, 106);
        gotoxy(83, 14);
        colorear(14, 1);
        cout << "BRAZIL";
        break;
    case 4:
        imprimirKaratecaPoseArriba(78, 14, 52, 0, 0, 226);
        gotoxy(83, 14);
        colorear(14, 1);
        cout << "COLOMBIA";
        break;
    case 5:
        imprimirKaratecaPoseArriba(78, 14, 94, 52, 0, 28);
        gotoxy(83, 14);
        colorear(14, 1);
        cout << "MEXICO";
        break;
    case 6:
        imprimirKaratecaPoseArriba(78, 14, 229, 52, 0, 1);
        gotoxy(83, 14);
        colorear(14, 1);
        cout << "PERU";
        break;
    case 7:
        imprimirKaratecaPoseArriba(78, 14, 229, 3, 6, 1);
        gotoxy(83, 14);
        colorear(14, 1);
        cout << "CANADA";
        break;
    case 8:
        imprimirKaratecaPoseArriba(78, 14, 229, 52, 107, 45);
        gotoxy(83, 14);
        colorear(14, 1);
        cout << "ARGENTINA";
        break;
    case 9:
        imprimirKaratecaPoseArriba(78, 14, 94, 0, 0, 34);
        gotoxy(83, 14);
        colorear(14, 1);
        cout << "BOLIVIA";
        break;
    case 10:
        imprimirKaratecaPoseArriba(78, 14, 52, 0, 6, 53);
        gotoxy(79, 14);
        colorear(14, 1);
        cout << "REPUBLICA DOM.";
        break;
    }

    
    switch (p2)
    {
    case 1:
        imprimirKaratecaDefensa(49, 17, 229, 227, 6, 1);
        gotoxy(60, 17);
        colorear(14, 1);
        cout << "USA";
        break;
    case 2:
        imprimirKaratecaDefensa(49, 17, 229, 0, 107, 1);
        gotoxy(56, 17);
        colorear(14, 1);
        cout << "CHILE";
        break;
    case 3:
        imprimirKaratecaDefensa(49, 17, 94, 0, 107, 106);
        gotoxy(56, 17);
        colorear(14, 1);
        cout << "BRAZIL";
        break;
    case 4:
        imprimirKaratecaDefensa(49, 17, 52, 0, 0, 226);
        gotoxy(56, 17);
        colorear(14, 1);
        cout << "COLOMBIA";
        break;
    case 5:
        imprimirKaratecaDefensa(49, 17, 94, 52, 0, 28);
        gotoxy(56, 17);
        colorear(14, 1);
        cout << "MEXICO";
        break;
    case 6:
        imprimirKaratecaDefensa(49, 17, 229, 52, 0, 1);
        gotoxy(56, 17);
        colorear(14, 1);
        cout << "PERU";
        break;
    case 7:
        imprimirKaratecaDefensa(49, 17, 229, 3, 6, 1);
        gotoxy(56, 17);
        colorear(14, 1);
        cout << "CANADA";
        break;
    case 8:
        imprimirKaratecaDefensa(49, 17, 229, 52, 107, 45);
        gotoxy(56, 17);
        colorear(14, 1);
        cout << "ARGENTINA";
        break;
    case 9:
        imprimirKaratecaDefensa(49, 17, 94, 0, 0, 34);
        gotoxy(56, 17);
        colorear(14, 1);
        cout << "BOLIVIA";
        break;
    case 10:
        imprimirKaratecaDefensa(49, 17, 52, 0, 6, 53);
        gotoxy(52, 17);
        colorear(14, 1);
        cout << "REPUBLICA DOM.";
        break;
    }


    switch (p3)
    {
    case 1:
        imprimirRivalDefensa(106, 19, 229, 227, 6, 1);
        gotoxy(118, 19);
        colorear(14, 1);
        cout << "USA";
        break;
    case 2:
        imprimirRivalDefensa(106, 19, 229, 0, 107, 1);
        gotoxy(114, 19);
        colorear(14, 1);
        cout << "CHILE";
        break;
    case 3:
        imprimirRivalDefensa(106, 19, 94, 0, 107, 106);
        gotoxy(114, 19);
        colorear(14, 1);
        cout << "BRAZIL";
        break;
    case 4:
        imprimirRivalDefensa(106, 19, 52, 0, 0, 226);
        gotoxy(114, 19);
        colorear(14, 1);
        cout << "COLOMBIA";
        break;
    case 5:
        imprimirRivalDefensa(106, 19, 94, 52, 0, 28);
        gotoxy(114, 19);
        colorear(14, 1);
        cout << "MEXICO";
        break;
    case 6:
        imprimirRivalDefensa(106, 19, 229, 52, 0, 1);
        gotoxy(114, 19);
        colorear(14, 1);
        cout << "PERU";
        break;
    case 7:
        imprimirRivalDefensa(106, 19, 229, 3, 6, 1);
        gotoxy(114, 19);
        colorear(14, 1);
        cout << "CANADA";
        break;
    case 8:
        imprimirRivalDefensa(106, 19, 229, 52, 107, 45);
        gotoxy(114, 19);
        colorear(14, 1);
        cout << "ARGENTINA";
        break;
    case 9:
        imprimirRivalDefensa(106, 19, 94, 0, 0, 34);
        gotoxy(114, 19);
        colorear(14, 1);
        cout << "BOLIVIA";
        break;
    case 10:
        imprimirRivalDefensa(106, 19, 52, 0, 6, 53);
        gotoxy(110, 19);
        colorear(14, 1);
        cout << "REPUBLICA DOM.";
        break;
    }

    
    return;
}

void msj(const string& mensaje) {

    for (int i = 0; i < mensaje.length(); i++) {
        cout << mensaje[i];
        cout.flush();
        _sleep(300);
    }
}

void intro() {
    colorear(0, 18);
    gotoxy(50, 2); cout << "           ********                                 ****            \n";
    gotoxy(50, 3); cout << "          **********                         ****   ***              \n";
    gotoxy(50, 4); cout << "          ****  ***    ********* *********  ******* ****  *********   +++++++++   +++++++   \n";
    gotoxy(50, 5); cout << "          *********  *********** ****************** *************** +++++++++++ ++++++++++  \n";
    gotoxy(50, 6); cout << "            ******** ****   **** ****   **** ****   ********   **** ++++   ++++ ++++   ++++ \n";
    gotoxy(50, 7); cout << "          ***   *********   **** ****   **** ****   ********   **** ++++   ++++ ++++   ++++ \n";
    gotoxy(50, 8); cout << "         *********** *********** ****   **** ****** *************** +++++++++++ ++++++++++  \n";
    gotoxy(50, 9); cout << "           ********    ********* ****   ****  ***** ****  *********   +++++++++   +++++++   \n";
    gotoxy(50, 10); cout << "                                                                     ++++++++++             \n";
    gotoxy(50, 11); cout << "                                                                     +++++++++              \n";
    gotoxy(50, 12); cout << "                                                                                                \n";
    colorear(0, 14);
    gotoxy(50, 13); cout << "               **********           =========+          ++++++++++      ******************* \n";
    gotoxy(50, 14); cout << "             **************      ==============+      +++++++++++++++   ******************* \n";
    gotoxy(50, 15); cout << "           *****************    +================    +++++++++++++++++  ******************* \n";
    gotoxy(50, 16); cout << "          ******* ++++ ******  =======     +======  ++++++ **** +++++++            +++++++  \n";
    gotoxy(50, 17); cout << "          ******++++++++****** =====+       ======  +++++ *******++++++           +++++++   \n";
    gotoxy(50, 18); cout << "                        ------::-=-:: ::: :::--:--        ******* +++++         +++++++     \n";
    colorear(0, 226);
    gotoxy(50, 19); cout << "                       ::::::: : :::::::::::::::::        ****** ++--++        +++======    \n";
    gotoxy(50, 20); cout << "                    -::::::::   :::::::::: ::: :::           ++++=:-++       +++++=======   \n";
    gotoxy(50, 21); cout << "              *****+::::::::  ::::::::::: ::: :::      +=====++-:-=++              =======  \n";
    gotoxy(50, 22); cout << "            **+-:-++::::::    :: ::: ::: ::: :::::   +=======++++++                  ====== \n";
    colorear(0, 202);
    gotoxy(50, 23); cout << "           **--+****-          +===+::: ::: -==+==  +========++        ======        ====== \n";
    gotoxy(50, 24); cout << "          **=:**               ++++++       ++++++  ======             +=--==        ====== \n";
    gotoxy(50, 25); cout << "          ******               +++++++     +++++++ =====+               ==-:===    =======  \n";
    gotoxy(50, 26); cout << "          ====================  +++++++++++++++++  ********************  ==-:-===========   \n";
    gotoxy(50, 27); cout << "          ====================    +++++++++++++    ********************   ==============    \n";
    gotoxy(50, 28); cout << "          ====================       +++++++        *******************      +=======       \n";
    gotoxy(50, 29); cout << "                                                                                                \n";
    gotoxy(50, 30); cout << "                                                                                                \n";
    gotoxy(50, 31); cout << "                                                                                                \n";
    colorear(0, 18);
    gotoxy(50, 32); cout << "                                *                    ++  **                                    \n";
    gotoxy(50, 33); cout << "           *** *************** ** ******** ********* ++  * ********************* *** *****       \n";
    gotoxy(50, 34); cout << "          ******************** **  ***************** ++  *  ****** ******************* * *       \n";
    gotoxy(50, 35); cout << "                    ***                              ++               **                      \n";

    gotoxy(90, 38); msj("<<Juegos Panamericanos>>");
}

int main() {
    srand(time(0));
    Console::SetWindowSize(190, 45);
    Console::CursorVisible = false;
    int p1, p2, p3;
    int tecla7, tecla8;


    Console::SetWindowSize(190, 45);
    intro();



    int opcionMenu;

    do
    {
        system("cls");

        int centroX = Console::WindowWidth / 2;
        int centroY = Console::WindowHeight / 2;

        // Imprimir el menú
        Console::Clear();
        colorear(0, 18);
        gotoxy(50, 2); cout << "           ********                                 ****            \n";
        gotoxy(50, 3); cout << "          **********                         ****   ***              \n";
        gotoxy(50, 4); cout << "          ****  ***    ********* *********  ******* ****  *********   +++++++++   +++++++   \n";
        gotoxy(50, 5); cout << "          *********  *********** ****************** *************** +++++++++++ ++++++++++  \n";
        gotoxy(50, 6); cout << "            ******** ****   **** ****   **** ****   ********   **** ++++   ++++ ++++   ++++ \n";
        gotoxy(50, 7); cout << "          ***   *********   **** ****   **** ****   ********   **** ++++   ++++ ++++   ++++ \n";
        gotoxy(50, 8); cout << "         *********** *********** ****   **** ****** *************** +++++++++++ ++++++++++  \n";
        gotoxy(50, 9); cout << "           ********    ********* ****   ****  ***** ****  *********   +++++++++   +++++++   \n";
        gotoxy(50, 10); cout << "                                                                     ++++++++++             \n";
        gotoxy(50, 11); cout << "                                                                     +++++++++              \n";

        Console::SetCursorPosition(centroX - 8, centroY - 3);
        cout << ("MENU PRINCIPAL") << endl;
        Console::SetCursorPosition(centroX - 8, centroY - 1);
        cout << ("1. Jugar") << endl;
        Console::SetCursorPosition(centroX - 8, centroY + 0);
        cout << ("2. Instrucciones") << endl;
        Console::SetCursorPosition(centroX - 8, centroY + 1);
        cout << ("3. Creditos") << endl;
        Console::SetCursorPosition(centroX - 8, centroY + 2);
        cout << ("0. Salir") << endl;
        Console::SetCursorPosition(centroX - 8, centroY + 3);
        // Leer la opcion ingresada por el usuario
        opcionMenu = readInt();

        system("cls");

    switch (opcionMenu) {
    case 1: {
        // El jugador elige su pa s
        Pais jugador = elegirPais();
        int numejugador;
        if (jugador.nombre == "USA")
            numejugador = 1;
        if (jugador.nombre == "CHILE")
            numejugador = 2;
        if (jugador.nombre == "BRAZIL")
            numejugador = 3;
        if (jugador.nombre == "COLOMBIA")
            numejugador = 4;
        if (jugador.nombre == "MEXICO")
            numejugador = 5;
        if (jugador.nombre == "PERU")
            numejugador = 6;
        if (jugador.nombre == "CANADA")
            numejugador = 7;
        if (jugador.nombre == "ARGENTINA")
            numejugador = 8;
        if (jugador.nombre == "BOLIVIA")
            numejugador = 9;
        if (jugador.nombre == "REPUBLICA DOM.")
            numejugador = 10;
        


        // El enemigo se elige al azar, luego lo cambiamos

        Pais rival{ "", 0, 0, 0, 0, 0 };

        int nume = generateRandomNumber(1, 10);

        switch (nume) {
        case 1:   rival = { "USA", 229, 227, 6, 1, 20 }; break;
        case 2:   rival = { "CHILE", 229, 0, 107, 1, 20 }; break;
        case 3:   rival = { "BRAZIL", 94, 0, 107, 106, 20 }; break;
        case 4:   rival = { "COLOMBIA", 52, 0, 0, 226, 20 }; break;
        case 5:   rival = { "MEXICO", 94, 52, 0, 28, 20 }; break;
        case 6:   rival = { "PERU", 229, 52, 0, 1, 20 }; break;
        case 7:   rival = { "CANADA", 229, 3, 6, 1, 20 }; break;
        case 8:   rival = { "ARGENTINA",229, 52, 107, 45, 20 }; break;
        case 9:   rival = { "BOLIVIA", 94, 0, 0, 34, 20 }; break;
        case 10:  rival = { "REPUBLICA DOM.", 52, 0, 6, 53, 20 }; break;
        }


        Pelea pelea = { &jugador, &rival, 66, 99, 0, 0, 0, 0 };

      

        int Nronda = 1;
        int f;



        gotoxy(0, 0);
        colorear(17, 17);
        for (int i = 0; i < 45; i++)
        {
            for (int j = 0; j < 190; j++) {
                cout << " ";
            }
        }

        gotoxy(55, 20);
        colorear(17, 1);

        string ganador;

        bool ganaCuartos = false;
        bool pierdeCuartos = false; 

        bool ganaSemi = false;
        bool pierdeSemi = false;

        bool ganaFinal = false;
        bool pierdeFinal = false;

        cout << "Cuartos de final";
      
        gotoxy(55, 22);
        cout << "<<PULSA CUALQUIER TECLA PARA CONTINUAR>>" << endl;

        int tecla2 = getch();
        while (1) {
            if (kbhit)
            {
                break;
            }
        }

        imprimirEscenario(Nronda);
        int a =0;

        int juez1 = generateRandomNumber(1, 3);
        int juez2 = generateRandomNumber(1, 3);
       

        // el juego, basicallly

        while (true) {
         
            int movimientoJugador = 0;
            int movimientoRival = 0;


            int posiJugador = pelea.posicionJugador;
            int posiRival = pelea.posicionRival;


            switch (juez1)
            {
            case 1:
                imprimirJuez1(25, 28, 52, 0, 0);
                break;
            case 2:
                imprimirJuez1(25, 28, 229, 227, 6);
                break;
            case 3:
                imprimirJuez1(25, 28, 94, 0, 107);
                break;
            }

            switch (juez2)
            {
            case 1:
                imprimirJuez2(143, 28, 52, 0, 0);
                break;
            case 2:
                imprimirJuez2(143, 28, 229, 227, 6);
                break;
            case 3:
                imprimirJuez2(143, 28, 94, 0, 107);
                break;
            }

            if (a % 16 == 0) {
                imprimirKaratecaPoseAbajo(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                imprimirRivalPoseAbajo(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                a = a + 4;
            }

            else if (a % 8 == 0) {

                imprimirKaratecaPoseArriba(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                imprimirRivalPoseArriba(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
            }

            mostrarEstado(&pelea);

            movimientoJugador = turnoJugador(&pelea, posiJugador, posiRival);

            movimientoRival = turnoRival(&pelea, posiJugador, posiRival);

            int MaxposiJugador = pelea.posicionJugador + 25;
            int MaxposiRival = pelea.posicionRival;
            int distanciaMin = 0;

            if (MaxposiJugador >= MaxposiRival) {
                if (movimientoJugador == movimientoRival) {
                    if (movimientoJugador == 1) {
                        pelea.posicionJugador = pelea.posicionJugador - recuperacionGolpe;
                        posiJugador = pelea.posicionJugador;
                        pelea.posicionRival = pelea.posicionRival + recuperacionGolpe;
                        posiRival = pelea.posicionRival;
                        distanciaMin = (posiRival - (posiJugador + 25)) / 2;
                        posiJugador = posiJugador + distanciaMin;
                        posiRival = posiRival - distanciaMin;
                    }
                    if (movimientoJugador == 3) {
                        pelea.posicionJugador = pelea.posicionJugador - recuperacionDefensa;
                        posiJugador = pelea.posicionJugador;
                        pelea.posicionRival = pelea.posicionRival + recuperacionDefensa;
                        posiRival = pelea.posicionRival;
                        distanciaMin = (posiRival - (posiJugador + 25)) / 2;
                        posiJugador = posiJugador + distanciaMin;
                        posiRival = posiRival - distanciaMin;
                        pelea.posicionRival = posiRival;
                        pelea.posicionJugador = posiJugador;
                        gotoxy(80, 9); cout << "Colision";
                    }
                }
            }
            while (movimientoJugador != 0 || movimientoRival != 0) {
                switch (movimientoJugador)
                {
                case 1:
                    imprimirKaratecaGolpe(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);

                    break;
                case 2:
                    imprimirKaratecaPatada(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);

                    break;

                case 3:
                    imprimirKaratecaDefensa(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                    if (movimientoRival == 1) {
                        pelea.jugador->resistencia = pelea.jugador->resistencia + danoGolpe;
                        pelea.posicionJugador = pelea.posicionJugador + (empujeGolpe + 2);
                    }
                    if (movimientoRival == 2) {
                        pelea.jugador->resistencia = pelea.jugador->resistencia + danoPatada;
                        pelea.posicionJugador = pelea.posicionJugador + (empujePatada + 2);

                    }
                    if (movimientoRival == 3) {
                        pelea.posicionJugador = pelea.posicionJugador + recuperacionDefensa;
                    }

                    break;

                case 4:
                    imprimirKaratecaPoseArriba(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                    break;
                }

                switch (movimientoRival)
                {
                case 1:
                    imprimirRivalGolpe(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                    break;
                case 2:
                    imprimirRivalPatada(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                    break;
                case 3:
                    imprimirRivalDefensa(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                    if (movimientoJugador == 1) {
                        pelea.rival->resistencia = pelea.rival->resistencia + danoGolpe;
                        pelea.posicionRival = pelea.posicionRival - (empujeGolpe + 2);
                    }
                    if (movimientoJugador == 2) {
                        pelea.rival->resistencia = pelea.rival->resistencia + danoPatada;
                        pelea.posicionRival = pelea.posicionRival - (empujePatada + 2);

                    }
                    if (movimientoJugador == 3) {
                        pelea.posicionRival = pelea.posicionRival - recuperacionDefensa;

                    }

                    break;
                case 4:
                    imprimirRivalPoseArriba(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);

                    break;
                }
                gotoxy(110 + 4, 42);

                colorear(141, 0);
                cout << "Continuemos con la pelea...  PULSA CUALQUIER TECLA PARA CONTINUAR" << endl;

                int tecla = getch();
                while (1) {
                    if (kbhit)
                    {
                        break;
                    }
                }

                borrarKarateka(posiJugador, 25);
                borrarKarateka(posiRival, 25);
                borrarEstado();
                posiRival = pelea.posicionRival;
                posiJugador = pelea.posicionJugador;
                break;

            }




            if (pelea.posicionJugador <= 49 && pelea.posicionRival + 25 >= 142) {

                imprimirKaratecaPoseArriba(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                imprimirRivalPoseArriba(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                colorear(141, 0);
                gotoxy(125, 36);
                cout << "Ambos luchadores estan fuera de los limites";
                gotoxy(131, 38);
                cout << "Ambos obtienen una penalizacion!";
                gotoxy(137, 39);
                cout << "- 2 Resistencia";
                gotoxy(110 + 4, 41);
                cout << "Continuemos con la pelea...  PULSA CUALQUIER TECLA PARA CONTINUAR" << endl;
                int tecla = getch();
                while (1) {
                    if (kbhit)
                    {
                        break;
                    }
                }
                pelea.rival->resistencia = pelea.rival->resistencia -2;
                pelea.jugador->resistencia = pelea.jugador->resistencia - 2;
                borrarKarateka(posiJugador, 25);
                borrarKarateka(posiRival, 25);
                pelea.posicionJugador = 66;
                pelea.posicionRival = 99;
                pelea.penalidadesJugador = pelea.penalidadesJugador + 1;
                pelea.penalidadesRival = pelea.penalidadesRival + 1;
                borrarEstado();
            }
            else
            {
                if (pelea.posicionJugador <= 49) {
                    imprimirKaratecaPoseArriba(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                    imprimirRivalPoseArriba(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                    colorear(141, 0);
                    gotoxy(130, 36);
                    cout << "Jugador 1 esta fuera de los limites";
                    gotoxy(135, 38);
                    cout << "Obtiene una penalizacion!";
                    gotoxy(137, 39);
                    cout << "- 2 Resistencia";
                    gotoxy(110 + 4, 41);
                    cout << "Continuemos con la pelea...  PULSA CUALQUIER TECLA PARA CONTINUAR" << endl;
                    int tecla = getch();
                    while (1) {
                        if (kbhit)
                        {
                            break;
                        }
                    }
                    pelea.jugador->resistencia = pelea.jugador->resistencia - 2;
                    borrarKarateka(posiJugador, 25);
                    borrarKarateka(posiRival, 25);
                    pelea.posicionJugador = 66;
                    pelea.posicionRival = 99;
                    pelea.penalidadesJugador = pelea.penalidadesJugador + 1;
                    borrarEstado();
                }
                if (pelea.posicionRival + 25 >= 142) {
                    imprimirKaratecaPoseArriba(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                    imprimirRivalPoseArriba(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                    colorear(141, 0);
                    gotoxy(130, 36);
                    cout << "Jugador 2 esta fuera de los limites"; 
                    gotoxy(135, 38);
                    cout << "Obtiene una penalizacion!";
                    
                    gotoxy(137, 39);
                    cout << "- 2 Resistencia";
                    gotoxy(110 + 4, 41);
                    cout << "Continuemos con la pelea...  PULSA CUALQUIER TECLA PARA CONTINUAR" << endl;
                    int tecla = getch();
                    while (1) {
                        if (kbhit)
                        {
                            break;
                        }
                    }
                    pelea.rival->resistencia = pelea.rival->resistencia - 2;
                    borrarKarateka(posiJugador, 25);
                    borrarKarateka(posiRival, 25);
                    pelea.posicionJugador = 66;
                    pelea.posicionRival = 99;

                    pelea.penalidadesRival = pelea.penalidadesRival + 1;
                    borrarEstado();
                }

            }

            a++;

            if (pelea.jugador->resistencia <= 0 || pelea.penalidadesJugador >= 3) {        
                pierdeCuartos = true;
            }
            if (pierdeCuartos) {
                break;
            }

            if (pelea.rival->resistencia <= 0 ||pelea.penalidadesRival >= 3) {
                ganaCuartos = true;
            }


            _sleep(40);

            if (ganaCuartos) {
                break;
            }
        }
        //afuera


        if (ganaCuartos) {
            gotoxy(0, 0);
            colorear(55, 17);
            for (int i = 0; i < 45; i++)
            {
                for (int j = 0; j < 190; j++) {
                    cout << " ";
                }
            }
            gotoxy(55, 20);
            colorear(55, 1);

            cout << "Ganaste";


            gotoxy(55, 22);
            cout << "<<PULSA CUALQUIER TECLA PARA CONTINUAR>>" << endl;

            int tecla2 = getch();
            while (1) {
                if (kbhit)
                {
                    break;
                }
            }



            gotoxy(0, 0);
            colorear(48, 48);
            for (int i = 0; i < 45; i++)
            {
                for (int j = 0; j < 190; j++) {
                    cout << " ";
                }
            }

            gotoxy(55, 20);
            colorear(48, 1);

            cout << "Semifinal";

            gotoxy(55, 22);
            cout << "<<PULSA CUALQUIER TECLA PARA CONTINUAR>>" << endl;

            int tecla3 = getch();
            while (1) {
                if (kbhit)
                {
                    break;
                }
            }
            Nronda++;
            imprimirEscenario(Nronda);


            nume = generateRandomNumber(1, 10);

            switch (nume) {
            case 1:   rival = { "USA", 229, 227, 6, 1, 20 }; break;
            case 2:   rival = { "CHILE", 229, 0, 107, 1, 20 }; break;
            case 3:   rival = { "BRAZIL", 94, 0, 107, 106, 20 }; break;
            case 4:   rival = { "COLOMBIA", 52, 0, 0, 226, 20 }; break;
            case 5:   rival = { "MEXICO", 94, 52, 0, 28, 20 }; break;
            case 6:   rival = { "PERU", 229, 52, 0, 1, 20 }; break;
            case 7:   rival = { "CANADA", 229, 3, 6, 1, 20 }; break;
            case 8:   rival = { "ARGENTINA",229, 52, 107, 45, 20 }; break;
            case 9:   rival = { "BOLIVIA", 94, 0, 0, 34, 20 }; break;
            case 10:  rival = { "REPUBLICA DOM.", 52, 0, 6, 53, 20 }; break;
            }

            pelea.jugador->resistencia = 20;

            pelea = { &jugador, &rival, 66, 99, 0, 0, 0, 0 };

            a = 0;

           juez1 = generateRandomNumber(1, 3);
           juez2 = generateRandomNumber(1, 3);




           while (true) {

               int movimientoJugador = 0;
               int movimientoRival = 0;


               int posiJugador = pelea.posicionJugador;
               int posiRival = pelea.posicionRival;


               switch (juez1)
               {
               case 1:
                   imprimirJuez1(25, 28, 52, 0, 0);
                   break;
               case 2:
                   imprimirJuez1(25, 28, 229, 227, 6);
                   break;
               case 3:
                   imprimirJuez1(25, 28, 94, 0, 107);
                   break;
               }

               switch (juez2)
               {
               case 1:
                   imprimirJuez2(143, 28, 52, 0, 0);
                   break;
               case 2:
                   imprimirJuez2(143, 28, 229, 227, 6);
                   break;
               case 3:
                   imprimirJuez2(143, 28, 94, 0, 107);
                   break;
               }

               if (a % 16 == 0) {
                   imprimirKaratecaPoseAbajo(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                   imprimirRivalPoseAbajo(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                   a = a + 4;
               }

               else if (a % 8 == 0) {

                   imprimirKaratecaPoseArriba(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                   imprimirRivalPoseArriba(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
               }

               mostrarEstado(&pelea);

               movimientoJugador = turnoJugador(&pelea, posiJugador, posiRival);

               movimientoRival = turnoRival(&pelea, posiJugador, posiRival);

               int MaxposiJugador = pelea.posicionJugador + 25;
               int MaxposiRival = pelea.posicionRival;
               int distanciaMin = 0;

               if (MaxposiJugador >= MaxposiRival) {
                   if (movimientoJugador == movimientoRival) {
                       if (movimientoJugador == 1) {
                           pelea.posicionJugador = pelea.posicionJugador - recuperacionGolpe;
                           posiJugador = pelea.posicionJugador;
                           pelea.posicionRival = pelea.posicionRival + recuperacionGolpe;
                           posiRival = pelea.posicionRival;
                           distanciaMin = (posiRival - (posiJugador + 25)) / 2;
                           posiJugador = posiJugador + distanciaMin;
                           posiRival = posiRival - distanciaMin;
                       }
                       if (movimientoJugador == 3) {
                           pelea.posicionJugador = pelea.posicionJugador - recuperacionDefensa;
                           posiJugador = pelea.posicionJugador;
                           pelea.posicionRival = pelea.posicionRival + recuperacionDefensa;
                           posiRival = pelea.posicionRival;
                           distanciaMin = (posiRival - (posiJugador + 25)) / 2;
                           posiJugador = posiJugador + distanciaMin;
                           posiRival = posiRival - distanciaMin;
                           pelea.posicionRival = posiRival;
                           pelea.posicionJugador = posiJugador;
                           gotoxy(80, 9); cout << "Colision";
                       }
                   }
               }
               while (movimientoJugador != 0 || movimientoRival != 0) {
                   switch (movimientoJugador)
                   {
                   case 1:
                       imprimirKaratecaGolpe(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);

                       break;
                   case 2:
                       imprimirKaratecaPatada(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);

                       break;

                   case 3:
                       imprimirKaratecaDefensa(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                       if (movimientoRival == 1) {
                           pelea.jugador->resistencia = pelea.jugador->resistencia + danoGolpe;
                           pelea.posicionJugador = pelea.posicionJugador + (empujeGolpe + 2);
                       }
                       if (movimientoRival == 2) {
                           pelea.jugador->resistencia = pelea.jugador->resistencia + danoPatada;
                           pelea.posicionJugador = pelea.posicionJugador + (empujePatada + 2);

                       }
                       if (movimientoRival == 3) {
                           pelea.posicionJugador = pelea.posicionJugador + recuperacionDefensa;
                       }

                       break;

                   case 4:
                       imprimirKaratecaPoseArriba(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                       break;
                   }

                   switch (movimientoRival)
                   {
                   case 1:
                       imprimirRivalGolpe(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                       break;
                   case 2:
                       imprimirRivalPatada(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                       break;
                   case 3:
                       imprimirRivalDefensa(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                       if (movimientoJugador == 1) {
                           pelea.rival->resistencia = pelea.rival->resistencia + danoGolpe;
                           pelea.posicionRival = pelea.posicionRival - (empujeGolpe + 2);
                       }
                       if (movimientoJugador == 2) {
                           pelea.rival->resistencia = pelea.rival->resistencia + danoPatada;
                           pelea.posicionRival = pelea.posicionRival - (empujePatada + 2);

                       }
                       if (movimientoJugador == 3) {
                           pelea.posicionRival = pelea.posicionRival - recuperacionDefensa;

                       }

                       break;
                   case 4:
                       imprimirRivalPoseArriba(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);

                       break;
                   }
                   gotoxy(110 + 4, 42);

                   colorear(141, 0);
                   cout << "Continuemos con la pelea...  PULSA CUALQUIER TECLA PARA CONTINUAR" << endl;

                   int tecla = getch();
                   while (1) {
                       if (kbhit)
                       {
                           break;
                       }
                   }

                   borrarKarateka(posiJugador, 25);
                   borrarKarateka(posiRival, 25);
                   borrarEstado();
                   posiRival = pelea.posicionRival;
                   posiJugador = pelea.posicionJugador;
                   break;

               }




               if (pelea.posicionJugador <= 49 && pelea.posicionRival + 25 >= 142) {

                   imprimirKaratecaPoseArriba(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                   imprimirRivalPoseArriba(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                   colorear(141, 0);
                   gotoxy(125, 36);
                   cout << "Ambos luchadores estan fuera de los limites";
                   gotoxy(131, 38);
                   cout << "Ambos obtienen una penalizacion!";
                   gotoxy(137, 39);
                   cout << "- 2 Resistencia";
                   gotoxy(110 + 4, 41);
                   cout << "Continuemos con la pelea...  PULSA CUALQUIER TECLA PARA CONTINUAR" << endl;
                   int tecla = getch();
                   while (1) {
                       if (kbhit)
                       {
                           break;
                       }
                   }
                   pelea.rival->resistencia = pelea.rival->resistencia - 2;
                   pelea.jugador->resistencia = pelea.jugador->resistencia - 2;
                   borrarKarateka(posiJugador, 25);
                   borrarKarateka(posiRival, 25);
                   pelea.posicionJugador = 66;
                   pelea.posicionRival = 99;
                   pelea.penalidadesJugador = pelea.penalidadesJugador + 1;
                   pelea.penalidadesRival = pelea.penalidadesRival + 1;
                   borrarEstado();
               }
               else
               {
                   if (pelea.posicionJugador <= 49) {
                       imprimirKaratecaPoseArriba(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                       imprimirRivalPoseArriba(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                       colorear(141, 0);
                       gotoxy(130, 36);
                       cout << "Jugador 1 esta fuera de los limites";
                       gotoxy(135, 38);
                       cout << "Obtiene una penalizacion!";
                       gotoxy(137, 39);
                       cout << "- 2 Resistencia";
                       gotoxy(110 + 4, 41);
                       cout << "Continuemos con la pelea...  PULSA CUALQUIER TECLA PARA CONTINUAR" << endl;
                       int tecla = getch();
                       while (1) {
                           if (kbhit)
                           {
                               break;
                           }
                       }
                       pelea.jugador->resistencia = pelea.jugador->resistencia - 2;
                       borrarKarateka(posiJugador, 25);
                       borrarKarateka(posiRival, 25);
                       pelea.posicionJugador = 66;
                       pelea.posicionRival = 99;
                       pelea.penalidadesJugador = pelea.penalidadesJugador + 1;
                       borrarEstado();
                   }
                   if (pelea.posicionRival + 25 >= 142) {
                       imprimirKaratecaPoseArriba(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                       imprimirRivalPoseArriba(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                       colorear(141, 0);
                       gotoxy(130, 36);
                       cout << "Jugador 2 esta fuera de los limites";
                       gotoxy(135, 38);
                       cout << "Obtiene una penalizacion!";

                       gotoxy(137, 39);
                       cout << "- 2 Resistencia";
                       gotoxy(110 + 4, 41);
                       cout << "Continuemos con la pelea...  PULSA CUALQUIER TECLA PARA CONTINUAR" << endl;
                       int tecla = getch();
                       while (1) {
                           if (kbhit)
                           {
                               break;
                           }
                       }
                       pelea.rival->resistencia = pelea.rival->resistencia - 2;
                       borrarKarateka(posiJugador, 25);
                       borrarKarateka(posiRival, 25);
                       pelea.posicionJugador = 66;
                       pelea.posicionRival = 99;

                       pelea.penalidadesRival = pelea.penalidadesRival + 1;
                       borrarEstado();
                   }

               }

               a++;

               if (pelea.jugador->resistencia <= 0 || pelea.penalidadesJugador >= 3) {
                   pierdeSemi = true;
               }
               if (pierdeSemi) {
                   break;
               }

               if (pelea.rival->resistencia <= 0 || pelea.penalidadesRival >= 3) {
                   ganaSemi = true;
               }


               _sleep(40);

               if (ganaSemi) {
                   break;
               }
           }


           if (ganaSemi) {
               gotoxy(0, 0);
               colorear(55, 17);
               for (int i = 0; i < 45; i++)
               {
                   for (int j = 0; j < 190; j++) {
                       cout << " ";
                   }
               }
               gotoxy(55, 20);
               colorear(55, 1);

               cout << "Ganaste";


               gotoxy(55, 22);
               cout << "<<PULSA CUALQUIER TECLA PARA CONTINUAR>>" << endl;

               int tecla5 = getch();
               while (1) {
                   if (kbhit)
                   {
                       break;
                   }
               }




               gotoxy(0, 0);
               colorear(127, 127);
               for (int i = 0; i < 45; i++)
               {
                   for (int j = 0; j < 190; j++) {
                       cout << " ";
                   }
               }

               gotoxy(55, 20);
               colorear(127, 53);

               colorear(127, 8);
               gotoxy(30 +10+ 15, 1+3); cout << (" _____                                                              _____ ") << endl;
               gotoxy(30 +10+ 15, 12+3); cout << ("( ___ )------------------------------------------------------------( ___ )") << endl;
               gotoxy(30 +10+ 15, 13+3); cout << (" |   |                                                              |   | ") << endl;
               colorear(127, 14);
               gotoxy(30+10 + 15, 14+3); cout << (" |   |   ____ ____      _    _   _   _____ ___ _   _    _    _      |   | ") << endl;
               gotoxy(30+10 + 15, 15+3); cout << (" |   |  / ___|  _ \\    / \\  | \\ | | |  ___|_ _| \\ | |  / \\  | |     |   | ") << endl;
              colorear(127, 3);
               gotoxy(30+10 + 15, 16+3);  cout << (" |   | | |  _| |_) |  / _ \\ |  \\| | | |_   | ||  \\| | / _ \\ | |     |   | ") << endl;
               gotoxy(30+10 + 15, 17+3);  cout << (" |   | | |_| |  _ <  / ___ \\| |\\  | |  _|  | || |\\  |/ ___ \\| |___  |   | ") << endl;
             colorear(127, 202);
               gotoxy(30+10 + 15, 18+3);  cout << (" |   |  \\____|_| \\_\\/_/   \\_\\_| \\_| |_|   |___|_| \\_/_/   \\_\\_____| |   | ") << endl;
               colorear(127, 8);
               gotoxy(30+10 + 15, 19+3);   cout << (" |___|                                                              |___| ") << endl;
               gotoxy(30+10 + 15, 20+3);   cout << ("(_____)------------------------------------------------------------(_____)") << endl;
               gotoxy(30+10 + 22, 22+4);
               colorear(127, 1);
               cout << "<<PULSA CUALQUIER TECLA PARA CONTINUAR>>" << endl;

               int tecla6 = getch();
               while (1) {
                   if (kbhit)
                   {
                       break;
                   }
               }

               Nronda++;
               imprimirEscenario(Nronda);


               nume = generateRandomNumber(1, 10);

               switch (nume) {
               case 1:   rival = { "USA", 229, 227, 6, 1, 20 }; break;
               case 2:   rival = { "CHILE", 229, 0, 107, 1, 20 }; break;
               case 3:   rival = { "BRAZIL", 94, 0, 107, 106, 20 }; break;
               case 4:   rival = { "COLOMBIA", 52, 0, 0, 226, 20 }; break;
               case 5:   rival = { "MEXICO", 94, 52, 0, 28, 20 }; break;
               case 6:   rival = { "PERU", 229, 52, 0, 1, 20 }; break;
               case 7:   rival = { "CANADA", 229, 3, 6, 1, 20 }; break;
               case 8:   rival = { "ARGENTINA",229, 52, 107, 45, 20 }; break;
               case 9:   rival = { "BOLIVIA", 94, 0, 0, 34, 20 }; break;
               case 10:  rival = { "REPUBLICA DOM.", 52, 0, 6, 53, 20 }; break;
               }

               pelea.jugador->resistencia = 20;

               pelea = { &jugador, &rival, 66, 99, 0, 0, 0, 0 };

               a = 0;

               juez1 = generateRandomNumber(1, 3);
               juez2 = generateRandomNumber(1, 3);


               while (true) {

                   int movimientoJugador = 0;
                   int movimientoRival = 0;


                   int posiJugador = pelea.posicionJugador;
                   int posiRival = pelea.posicionRival;


                   switch (juez1)
                   {
                   case 1:
                       imprimirJuez1(25, 28, 52, 0, 0);
                       break;
                   case 2:
                       imprimirJuez1(25, 28, 229, 227, 6);
                       break;
                   case 3:
                       imprimirJuez1(25, 28, 94, 0, 107);
                       break;
                   }

                   switch (juez2)
                   {
                   case 1:
                       imprimirJuez2(143, 28, 52, 0, 0);
                       break;
                   case 2:
                       imprimirJuez2(143, 28, 229, 227, 6);
                       break;
                   case 3:
                       imprimirJuez2(143, 28, 94, 0, 107);
                       break;
                   }

                   if (a % 16 == 0) {
                       imprimirKaratecaPoseAbajo(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                       imprimirRivalPoseAbajo(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                       a = a + 4;
                   }

                   else if (a % 8 == 0) {

                       imprimirKaratecaPoseArriba(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                       imprimirRivalPoseArriba(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                   }

                   mostrarEstado(&pelea);

                   movimientoJugador = turnoJugador(&pelea, posiJugador, posiRival);

                   movimientoRival = turnoRival(&pelea, posiJugador, posiRival);

                   int MaxposiJugador = pelea.posicionJugador + 25;
                   int MaxposiRival = pelea.posicionRival;
                   int distanciaMin = 0;

                   if (MaxposiJugador >= MaxposiRival) {
                       if (movimientoJugador == movimientoRival) {
                           if (movimientoJugador == 1) {
                               pelea.posicionJugador = pelea.posicionJugador - recuperacionGolpe;
                               posiJugador = pelea.posicionJugador;
                               pelea.posicionRival = pelea.posicionRival + recuperacionGolpe;
                               posiRival = pelea.posicionRival;
                               distanciaMin = (posiRival - (posiJugador + 25)) / 2;
                               posiJugador = posiJugador + distanciaMin;
                               posiRival = posiRival - distanciaMin;
                           }
                           if (movimientoJugador == 3) {
                               pelea.posicionJugador = pelea.posicionJugador - recuperacionDefensa;
                               posiJugador = pelea.posicionJugador;
                               pelea.posicionRival = pelea.posicionRival + recuperacionDefensa;
                               posiRival = pelea.posicionRival;
                               distanciaMin = (posiRival - (posiJugador + 25)) / 2;
                               posiJugador = posiJugador + distanciaMin;
                               posiRival = posiRival - distanciaMin;
                               pelea.posicionRival = posiRival;
                               pelea.posicionJugador = posiJugador;
                               gotoxy(80, 9); cout << "Colision";
                           }
                       }
                   }
                   while (movimientoJugador != 0 || movimientoRival != 0) {
                       switch (movimientoJugador)
                       {
                       case 1:
                           imprimirKaratecaGolpe(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);

                           break;
                       case 2:
                           imprimirKaratecaPatada(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);

                           break;

                       case 3:
                           imprimirKaratecaDefensa(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                           if (movimientoRival == 1) {
                               pelea.jugador->resistencia = pelea.jugador->resistencia + danoGolpe;
                               pelea.posicionJugador = pelea.posicionJugador + (empujeGolpe + 2);
                           }
                           if (movimientoRival == 2) {
                               pelea.jugador->resistencia = pelea.jugador->resistencia + danoPatada;
                               pelea.posicionJugador = pelea.posicionJugador + (empujePatada + 2);

                           }
                           if (movimientoRival == 3) {
                               pelea.posicionJugador = pelea.posicionJugador + recuperacionDefensa;
                           }

                           break;

                       case 4:
                           imprimirKaratecaPoseArriba(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                           break;
                       }

                       switch (movimientoRival)
                       {
                       case 1:
                           imprimirRivalGolpe(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                           break;
                       case 2:
                           imprimirRivalPatada(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                           break;
                       case 3:
                           imprimirRivalDefensa(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                           if (movimientoJugador == 1) {
                               pelea.rival->resistencia = pelea.rival->resistencia + danoGolpe;
                               pelea.posicionRival = pelea.posicionRival - (empujeGolpe + 2);
                           }
                           if (movimientoJugador == 2) {
                               pelea.rival->resistencia = pelea.rival->resistencia + danoPatada;
                               pelea.posicionRival = pelea.posicionRival - (empujePatada + 2);

                           }
                           if (movimientoJugador == 3) {
                               pelea.posicionRival = pelea.posicionRival - recuperacionDefensa;

                           }

                           break;
                       case 4:
                           imprimirRivalPoseArriba(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);

                           break;
                       }
                       gotoxy(110 + 4, 42);

                       colorear(141, 0);
                       cout << "Continuemos con la pelea...  PULSA CUALQUIER TECLA PARA CONTINUAR" << endl;

                       int tecla = getch();
                       while (1) {
                           if (kbhit)
                           {
                               break;
                           }
                       }

                       borrarKarateka(posiJugador, 25);
                       borrarKarateka(posiRival, 25);
                       borrarEstado();
                       posiRival = pelea.posicionRival;
                       posiJugador = pelea.posicionJugador;
                       break;

                   }




                   if (pelea.posicionJugador <= 49 && pelea.posicionRival + 25 >= 142) {

                       imprimirKaratecaPoseArriba(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                       imprimirRivalPoseArriba(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                       colorear(141, 0);
                       gotoxy(125, 36);
                       cout << "Ambos luchadores estan fuera de los limites";
                       gotoxy(131, 38);
                       cout << "Ambos obtienen una penalizacion!";
                       gotoxy(137, 39);
                       cout << "- 2 Resistencia";
                       gotoxy(110 + 4, 41);
                       cout << "Continuemos con la pelea...  PULSA CUALQUIER TECLA PARA CONTINUAR" << endl;
                       int tecla = getch();
                       while (1) {
                           if (kbhit)
                           {
                               break;
                           }
                       }
                       pelea.rival->resistencia = pelea.rival->resistencia - 2;
                       pelea.jugador->resistencia = pelea.jugador->resistencia - 2;
                       borrarKarateka(posiJugador, 25);
                       borrarKarateka(posiRival, 25);
                       pelea.posicionJugador = 66;
                       pelea.posicionRival = 99;
                       pelea.penalidadesJugador = pelea.penalidadesJugador + 1;
                       pelea.penalidadesRival = pelea.penalidadesRival + 1;
                       borrarEstado();
                   }
                   else
                   {
                       if (pelea.posicionJugador <= 49) {
                           imprimirKaratecaPoseArriba(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                           imprimirRivalPoseArriba(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                           colorear(141, 0);
                           gotoxy(130, 36);
                           cout << "Jugador 1 esta fuera de los limites";
                           gotoxy(135, 38);
                           cout << "Obtiene una penalizacion!";
                           gotoxy(137, 39);
                           cout << "- 2 Resistencia";
                           gotoxy(110 + 4, 41);
                           cout << "Continuemos con la pelea...  PULSA CUALQUIER TECLA PARA CONTINUAR" << endl;
                           int tecla = getch();
                           while (1) {
                               if (kbhit)
                               {
                                   break;
                               }
                           }
                           pelea.jugador->resistencia = pelea.jugador->resistencia - 2;
                           borrarKarateka(posiJugador, 25);
                           borrarKarateka(posiRival, 25);
                           pelea.posicionJugador = 66;
                           pelea.posicionRival = 99;
                           pelea.penalidadesJugador = pelea.penalidadesJugador + 1;
                           borrarEstado();
                       }
                       if (pelea.posicionRival + 25 >= 142) {
                           imprimirKaratecaPoseArriba(posiJugador, 25, jugador.piel, jugador.pelo, jugador.ojo, jugador.cinta);
                           imprimirRivalPoseArriba(posiRival, 25, rival.piel, rival.pelo, rival.ojo, rival.cinta);
                           colorear(141, 0);
                           gotoxy(130, 36);
                           cout << "Jugador 2 esta fuera de los limites";
                           gotoxy(135, 38);
                           cout << "Obtiene una penalizacion!";

                           gotoxy(137, 39);
                           cout << "- 2 Resistencia";
                           gotoxy(110 + 4, 41);
                           cout << "Continuemos con la pelea...  PULSA CUALQUIER TECLA PARA CONTINUAR" << endl;
                           int tecla = getch();
                           while (1) {
                               if (kbhit)
                               {
                                   break;
                               }
                           }
                           pelea.rival->resistencia = pelea.rival->resistencia - 2;
                           borrarKarateka(posiJugador, 25);
                           borrarKarateka(posiRival, 25);
                           pelea.posicionJugador = 66;
                           pelea.posicionRival = 99;

                           pelea.penalidadesRival = pelea.penalidadesRival + 1;
                           borrarEstado();
                       }

                   }

                   a++;

                   if (pelea.jugador->resistencia <= 0 || pelea.penalidadesJugador >= 3) {
                       pierdeFinal = true;
                   }
                   if (pierdeFinal) {
                       break;
                   }

                   if (pelea.rival->resistencia <= 0 || pelea.penalidadesRival >= 3) {
                       ganaFinal = true;
                   }

                   _sleep(40);

                   if (ganaFinal) {
                       break;
                   }
               }

               if (ganaFinal) {

                   gotoxy(0, 0);
                   colorear(55, 17);
                   for (int i = 0; i < 45; i++)
                   {
                       for (int j = 0; j < 190; j++) {
                           cout << " ";
                       }
                   }
                   gotoxy(55, 20);
                   colorear(17, 1);

                  




                   colorear(55, 8);
                   gotoxy(30+15, 3);cout << (" _____                                                                                            _____ ") << endl;
                   gotoxy(30+15, 4);cout << ("( ___ )------------------------------------------------------------------------------------------( ___ )") << endl;
                   gotoxy(30+15, 5);cout << (" |   |                                                                                            |   | ") << endl;
                   gotoxy(30+15, 6);cout << (" |   |                                                                                            |   | ") << endl;
                   gotoxy(30+15, 7);cout << (" |   |                                                                                            |   | ") << endl;
                   colorear(55, 226);
                   gotoxy(30+15, 8);cout << (" |   |       _____ ____  _____ ____    _____ _        ____ ____      _    _   _                   |   | ") << endl;
                   gotoxy(30+15, 9);cout << (" |   |      | ____|  _ \\| ____/ ___|  | ____| |      / ___|  _ \\    / \\  | \\ | |                  |   | ") << endl;
                   gotoxy(30+15, 10);cout << (" |   |      |  _| | |_) |  _| \\___ \\  |  _| | |     | |  _| |_) |  / _ \\ |  \\| |                  |   | ") << endl;
                   gotoxy(30+15, 11);cout << (" |   |      | |___|  _ <| |___ ___) | | |___| |___  | |_| |  _ <  / ___ \\| |\\  |                  |   | ") << endl;
                   gotoxy(30+15, 12);cout << (" |   |      |_____|_| \\_\\_____|____/  |_____|_____|  \\____|_| \\_\\/_/   \\_\\_| \\_|                  |   | ") << endl;
                   gotoxy(30+15, 13);cout << (" |   |                                                                                            |   | ") << endl;
                   gotoxy(30+15, 14);cout << (" |   |       / ___|  / \\  | \\ | |  / \\  |  _ \\ / _ \\|  _ \\                                        |   | ") << endl;
                   gotoxy(30+15, 15);cout << (" |   |      | |  _  / _ \\ |  \\| | / _ \\ | | | | | | | |_) |                                       |   | ") << endl;
                   gotoxy(30+15, 16);cout << (" |   |      | |_| |/ ___ \\| |\\  |/ ___ \\| |_| | |_| |  _ <                                        |   | ") << endl;
                   gotoxy(30+15, 17);cout << (" |   |       \\____/_/   \\_\\_| \\_/_/   \\_\\____/ \\___/|_| \\_\\                                       |   | ") << endl;
                   gotoxy(30+15, 18);cout << (" |   |                                                                                            |   | ") << endl;
                   gotoxy(30+15, 19);cout << (" |   |      |  _ \\| ____| | |   / _ \\/ ___|      | | | | | ____/ ___|/ _ \\/ ___|                  |   | ") << endl;
                   gotoxy(30+15, 20);cout << (" |   |      | | | |  _|   | |  | | | \\___ \\     _| | | | |  _|| |  _| | | \\___ \\                  |   | ") << endl;
                   gotoxy(30+15, 21);cout << (" |   |      | |_| | |___  | |__| |_| |___) |   | | | |_| | |__| |_| | |_| |___) |                 |   | ") << endl;
                   gotoxy(30+15, 22);cout << (" |   |      |____/|_____|_|______\\___/|____/   \\___/ \\___/|____\\____|\\___/|____/                  |   | ") << endl;
                   gotoxy(30+15, 23);cout << (" |   |                                                                                            |   | ") << endl;
                   gotoxy(30+15, 24);cout << (" |   |      |  _ \\ / \\  | \\ | |  / \\  |  \\/  | ____|  _ \\|_ _/ ___|  / \\  | \\ | |/ _ \\/ ___|      |   | ") << endl;
                   gotoxy(30+15, 25);cout << (" |   |      | |_) / _ \\ |  \\| | / _ \\ | |\\/| |  _| | |_) || | |     / _ \\ |  \\| | | | \\___ \\      |   | ") << endl;
                   gotoxy(30+15, 26);cout << (" |   |      |  __/ ___ \\| |\\  |/ ___ \\| |  | | |___|  _ < | | |___ / ___ \\| |\\  | |_| |___) |     |   | ") << endl;
                   gotoxy(30+15, 27);cout << (" |   |      |_|_/_/ __\\_\\_|_\\_/_/__ \\_\\_|  |_|_____|_| \\_\\___\\____/_/   \\_\\_| \\_|\___/|____/       |   | ") << endl;
                   gotoxy(30+15, 28);cout << (" |   |                                                                                            |   | ") << endl;
                   gotoxy(30+15, 29);cout << (" |   |      |___ \\ / _ \\___ \\|___ /                                                               |   | ") << endl;
                   gotoxy(30+15, 30);cout << (" |   |        __) | | | |__) | |_ \\                                                               |   | ") << endl;
                   gotoxy(30+15, 31);cout << (" |   |       / __/| |_| / __/ ___) |                                                              |   | ") << endl;
                   gotoxy(30+15, 32);cout << (" |   |      |_____|\___/_____|____/                                                                |   | ") << endl;
                   colorear(55, 8);
                   gotoxy(30+15, 33);cout << (" |   |                                                                                            |   | ") << endl;
                   gotoxy(30+15, 34);cout << (" |   |                                                                                            |   | ") << endl;
                   gotoxy(30+15, 35);cout << (" |   |                                                                                            |   | ") << endl;
                   gotoxy(30+15, 36);cout << (" |___|                                                                                            |___| ") << endl;
                   gotoxy(30+15, 37);cout << ("(_____)------------------------------------------------------------------------------------------(_____)") << endl;


                   colorear(55, 8);
                   gotoxy(65, 39);
                   cout << "<<PULSA CUALQUIER TECLA PARA CONTINUAR>>" << endl;

                   int tecla2 = getch();
                   while (1) {
                       if (kbhit)
                       {
                           break;
                       }
                   }

                   while (1) {
                       p3 = generateRandomNumber(1, 10);

                       if (p3 != nume && p3 != numejugador) {
                           break;
                       }
                   }

                   podio(numejugador, nume, p3);



               }
               else {

                       gotoxy(0, 0);
                       colorear(0, 0);
                       for (int i = 0; i < 45; i++)
                       {
                           for (int j = 0; j < 190; j++) {
                               cout << " ";
                           }
                       }

                       gotoxy(55, 20);
                       colorear(0, 1);

                       cout << "Perdiste la Gran Final. Tu personaje se quedó sin resistencia o acumulaste demasiadas penalidades." << endl;

                       gotoxy(55, 22);
                       cout << "<<PULSA CUALQUIER TECLA PARA CONTINUAR>>" << endl;

                       int tecla2 = getch();
                       while (1) {
                           if (kbhit)
                           {
                               break;
                           }
                       }

                       while (1) {
                           p3 = generateRandomNumber(1, 10);

                           if (p3 != nume && p3 != numejugador) {
                               break;
                           }
                       }
                       podio(nume, numejugador, p3);
               }


               


           }

           else {

           gotoxy(0, 0);
           colorear(0, 0);
           for (int i = 0; i < 45; i++)
           {
               for (int j = 0; j < 190; j++) {
                   cout << " ";
               }
           }

           gotoxy(55, 20);
           colorear(0, 1);

           cout << "Perdiste la Semifinal. Tu personaje se quedó sin resistencia o acumulaste demasiadas penalidades." << endl;

           gotoxy(55, 22);
           cout << "<<PULSA CUALQUIER TECLA PARA CONTINUAR>>" << endl;

           int tecla2 = getch();
           while (1) {
               if (kbhit)
               {
                   break;
               }
           }


           while (1) {
               p2 = generateRandomNumber(1, 10);

               if (p2 != nume && p2 != numejugador) {
                   break;
               }
           }

           podio(nume, p2, numejugador);
        }



        }
        else {

            gotoxy(0, 0);
            colorear(0, 0);
            for (int i = 0; i < 45; i++)
            {
                for (int j = 0; j < 190; j++) {
                    cout << " ";
                }
            }

            gotoxy(55, 20);
            colorear(0, 1);

            cout << "Perdiste los Cuartos de Final. Tu personaje se quedó sin resistencia o acumulaste demasiadas penalidades." << endl;
           
            gotoxy(55, 22);
            cout << "<<PULSA CUALQUIER TECLA PARA CONTINUAR>>" << endl;

            int tecla2 = getch();
            while (1) {
                if (kbhit)
                {
                    break;
                }
            }

            p1= generateRandomNumber(1, 10);

            while (1) {
                p2 = generateRandomNumber(1, 10);

                if (p2 != p1) {
                    break;
                }
            }

            while (1) {
                p3 = generateRandomNumber(1, 10);

                if (p3 != p1 && p3 != p2){
                    break;
                }
            }


            podio(p1, p2, p3);

        }
        int x;
        x = readInt();
        break;
    }
    case 2:
        // Instrucciones  
        Console::SetCursorPosition(centroX - 10, centroY - 7);
        cout << "Instrucciones del juego:" << endl;
        Console::SetCursorPosition(centroX - 60, centroY - 5);
        cout << "En el menu de seleccion, elige tu pais favorito entre los participantes en los Juegos Panamericanos." << endl;
        Console::SetCursorPosition(centroX - 60, centroY - 4);
        cout << " Es hora de luchar! Durante tu turno, tendras dos opciones: Atacar o Defender." << endl;
        Console::SetCursorPosition(centroX - 60, centroY - 3);
        cout << "Si eliges Atacar, intentaras infligir daño a tu oponente basandote en tu estadistica de Ataque." << endl;
        Console::SetCursorPosition(centroX - 60, centroY - 2);
        cout << "El puñete hace gran daño y te hace avanzar un poco, pero hace retroceder muy poco al rival" << endl;
        Console::SetCursorPosition(centroX - 60, centroY - 1);
        cout << "La patada hace daño regular y hace retroceder mucho al rival" << endl;
        Console::SetCursorPosition(centroX - 60, centroY);
        cout << "La defensa repele todo el daño, te hace avanzar y te recupera 1 punto de resistencia" << endl;
        Console::SetCursorPosition(centroX - 60, centroY + 1);
        cout << "Ten en cuenta que si un jugador es desplazado completamente del cuadrilatero recibe una penalizacion y se le restan 2 puntos de resistencia";
        Console::SetCursorPosition(centroX - 60, centroY + 2);
        cout << "El juego termina cuando la vida de uno de los jugadores llega a cero o acumule 3 penalizaciones." << endl;
        Console::SetCursorPosition(centroX - 60, centroY + 3);
        cout << " Diviertete y disfruta de la competencia!" << endl;
        Console::SetCursorPosition(centroX - 20, centroY + 5);
        cout << "<<PULSA CUALQUIER TECLA PARA CONTINUAR>>" << endl;

        tecla7 = getch();
        while (1) {
            if (kbhit)
            {
                break;
            }
        }
        break;
    case 3:
        // Créditos
        Console::SetCursorPosition(centroX - 8, centroY - 3);
        cout << " JUEGOS PANAMERICANOS" << endl;
        Console::SetCursorPosition(centroX - 5, centroY - 2);
        cout << " CREDITOS" << endl;
        Console::SetCursorPosition(centroX - 11, centroY - 1);
        cout << " --------------------" << endl;
        Console::SetCursorPosition(centroX - 6, centroY );
        cout << " David Serrudo" << endl;
        Console::SetCursorPosition(centroX - 6, centroY +1);
        cout << " Francisco Uribe " << endl;
        Console::SetCursorPosition(centroX - 6, centroY + 2);
        cout << " Alissa Zu" << char(164) << "iga " << endl;
        gotoxy(centroX - 15, centroY + 4);
        cout << "<<PULSA CUALQUIER TECLA PARA CONTINUAR>>" << endl;

        tecla8 = getch();
        while (1) {
            if (kbhit)
            {
                break;
            }
        }
        break;
    case 0:
        // Acciones para salir del programa
        Console::SetCursorPosition(centroX - 8, centroY - 3);
        cout << ("Saliendo del programa...") << endl;
        break;

    default:
        // Acciones para una opcion no valida
        Console::SetCursorPosition(centroX - 8, centroY - 3);
        cout << ("Opcion no valida, intente nuevamente") << endl;
        Console::ReadKey();
        break;
    }
     } while (opcionMenu != 0);

    return 0;
}