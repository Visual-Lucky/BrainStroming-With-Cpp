// Created by Admin on 12-07-2025.
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
/*
Creates  Fn that rease content from file &
create a file named basket.dat
that conains only BASKET game
*/
struct Game {
    char gameName[20];
    string participantName;
};

int main() {
    Game game;
    fstream f;
    f.open("game.dat", ios::out | ios::binary);


    return 0;
}