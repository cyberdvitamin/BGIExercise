#include <stdio.h>
#include "graphics.h";
#include <math.h>

#pragma comment(lib,"graphics.lib")

using namespace std;

int main() {


    initwindow(800, 600, "Figura Examen ", 200, 200);
    setbkcolor(0);


    int xa, ya, xb, yb, xc, yc;
    xa = 155; ya = 290;
    xb = 105; yb = 50;
    xc = 270; yc = 290;

    char A1[3] = "A1";
    char A2[3] = "A2";
    char A3[3] = "A3";
    char B1[3] = "B1";
    char B2[3] = "B2";
    char B3[3] = "B3";
    char O1[3] = "O1";
    char O2[3] = "O2";
    char O3[3] = "O3";

    // desenam triunghiul A1B1O3

    setcolor(5);

    outtextxy(xa, ya + 2, A1); // aici o sa fie A1
    outtextxy(xc, yc + 2, B1); // aici o sa fie B1
    outtextxy(xb - 20, yb - 15, O3); // aici o sa fie O3

    line(xc, yc, xb, yb); //latura B1O3
    line(xa, ya, xc, yc); //latura A1B1

    setlinestyle(3, 3, 1);
    line(xa, ya, xb, yb); //latura A1O3
    setlinestyle(0, 3, 1);

    // desenam triunghiul A2B2O1

    setcolor(11);

    line(xb + 31, yb + 150, xb + 103, yb + 150); //linia A2B2

    setlinestyle(3, 3, 1);
    line(xb + 31, yb + 150, xb, ya + 40); //linia A201
    line(xb + 103, yb + 150, xb, ya + 40); //linia B2O1
    setlinestyle(0, 3, 1);

    outtextxy(xb + 10, yb + 145, A2);
    outtextxy(xb + 112, yb + 145, B2);
    outtextxy(xb, ya + 45, O1);

    // desenam linia O3O1

    setcolor(4);

    line(xb, yb, xb, ya + 40); // linia O3O1

    //triunghiul A1B1O2

    setcolor(GREEN);

    setlinestyle(3, 3, 1);
    line(xb, yb + 170, xc, yc); // linia B1O2
    line(xb, yb + 170, xa, ya); // linia A1O2
    setlinestyle(0, 3, 1);

    outtextxy(xb - 23, yb + 165, O2);

    // desenam linia B3A3

    setcolor(YELLOW);

    line(xc - 100, yc - 42, xb + 20, yc - 42); // linia B3A3

    outtextxy(xb, yc - 49, A3);
    outtextxy(xc - 89, yc - 55, B3);

    getch();
    closegraph();
    return 0;
}