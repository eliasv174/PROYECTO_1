#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void opcion14() {
    const int screenWidth = 80;
    const int screenHeight = 24;

    int x = screenWidth / 2;
    int y = screenHeight / 2;

    while (true) {
        system("cls");
        gotoxy(x, y);
        cout << "*";

        if (GetAsyncKeyState(VK_UP) & 0x8000 && y > 0) {
            y--;
        }
        if (GetAsyncKeyState(VK_DOWN) & 0x8000 && y < screenHeight - 1) {
            y++;
        }
        if (GetAsyncKeyState(VK_LEFT) & 0x8000 && x > 0) {
            x--;
        }
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000 && x < screenWidth - 1) {
            x++;
        }

        Sleep(50);
    }
}

void iniciarPrograma() {
    opcion14();
}

void Iniciarprogrma() {
    iniciarPrograma();
}
