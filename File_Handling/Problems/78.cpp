// Created by Admin on 12-07-2025.
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

struct Game {
    char gameName[20];
    char participant[];
};

int main() {
    cout << "What's Up Boii" << endl;
    Game game;
    fstream f;
    f.open("game.dat", ios::out | ios::binary);


    return 0;
}
/*
Creates  Fn that rease content from file &
create a file named basket.dat
that conains only BASKET game
*/