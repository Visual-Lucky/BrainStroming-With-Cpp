#include<iostream>
using namespace std;

void timer(){
    Sleep(10000);//10 Seconds
}

void clearscreen(){
    system("cls");
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    //gotoxy(10, 5);
}