//1234
//123
//12
//1
#include<iostream>
using namespace std;

void forward_printing() {
    int i = 4;
    do {
        int j = 1;
        do {
            cout << j;
            j++;
        }while(j <= i);
        cout << endl;
        i--;
    }while(i > 0);
}

void backward_printing() {
    int j = 1;
do {
    int i = 4;
    do{
        cout << i;
        i--;
    }while (i >= j);
    cout << endl;
    j++;
}while (j <= 4);
}


int main() {
    forward_printing();
    cout << endl;
    backward_printing();
    return 0;
}
