#include<iostream>
#include<windows.h>

using namespace std;

void clearscreen(){
    system("cls");
}

void timer(){
    Sleep(10000);  //10 Seconds
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
    cout<<"Hi i am here";
    gotoxy(40,5);
    cout<<"Now I am here:";
    return 0;
}