#include<iostream>
using namespace std;

void decre_counter() {
    int counter = 10;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= (5-i); j++) {
            cout << counter--<< " ";
        }
        cout << endl;
    }
    cout << endl;
}

void rev_incre_counter() {
    int counter = 15;
    for (int i = 5; i > 0; i--) {
        for (int j = i; j > 0; j--, counter--) {
            cout << counter << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void incre_counter() {
    int counter = 01;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= (6-i); j++) {
            cout << counter++ << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void star_decre() {
    for (int i = 5; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void star_incre() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void decre_pattern() {
    for (int i = 4; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void incre_pattern() {
    for(int i = 4; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}



int main() {
    incre_pattern();
    decre_pattern();
    star_incre();
    star_decre();
    incre_counter();
    rev_incre_counter();
    decre_counter();

    return 0;
}