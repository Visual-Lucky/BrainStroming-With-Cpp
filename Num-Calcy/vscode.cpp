#include <iostream>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    gotoxy(10, 5); // Move cursor to column 10, row 5
    std::cout << "Hello from (10,5)!";
    return 0;
}