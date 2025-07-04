#include<iostream>
using namespace std;



void diagonal_1_and_all_0() {
    for (int i = 1; i <= 4; i++) {
        for (int j =1; j <= 4; j++){
            if (i == j) {
                cout << "1";
            }else {
                cout << "0";
            }
        }
        cout << endl;
    }
}

void alternate_0_and_1() {
    int evenx= 0, oddx = 1, x;
    for (int i = 1; i <= 4; i++) {
        if (i%2 == 0) x = evenx;
        else x = oddx;

        for (int j = 1; j <= i; j++) {
            cout << x;
            x = 1 - x;
        }
        cout << endl;
    }

}

void hollow_square_stars() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            if ((i==2 || i ==3) && (j==2 || j==3)) {
                cout<<" ";
            }
            else {
                cout<<"*";
            }
        }
        cout << endl;
    }
}

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

void nrml_inc_with_cntr() {
    int counter = 1;
    for (int i = 1; i <= 3; i++) {
        for (int j =1; j <= 4; j++) {
            cout << counter++ << " ";
        }
        cout << endl;
    }
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
    //cout << "1" << endl;
    incre_pattern();
    decre_pattern();
    star_incre();
    star_decre();
    incre_counter();
    rev_incre_counter();
    decre_counter();
    nrml_inc_with_cntr();
    hollow_square_stars();
    alternate_0_and_1();
    diagonal_1_and_all_0();
    return 0;
}