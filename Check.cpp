#include<iostream>
using namespace std;
int main() {
    int height = 5, length=(height*2)-1;
    for (int i = 1; i <= height; i++) {
        if (i == height) {
            for (int j = 1; j <= length; j++) {
                cout << "*";
            }
        }
        else {
            // 1st Star
            for (int j = 1; j <= i; j++) {
                cout  << "*";
            }
            // Middle Spaces
            for (int j = 1; j<= ((height*2)-1)-2*i; j++) {
                cout << " ";
            }
            // Last Star
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
        }
        cout << endl;
    }
}



