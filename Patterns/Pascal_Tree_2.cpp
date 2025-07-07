#include<iostream>
using namespace std;

int main() {
    int size = 5;

    for (int i = 0; i < size; i++) {  // i = row number (0-based)

        // 1️⃣ Print leading spaces for triangle alignment
        for (int space = 0; space < size - i - 1; space++) {
            cout << " ";
        }

        // 2️⃣ Now print values in the row using val
        int val = 1;
        for (int j = 0; j <= i; j++) {

            cout << val << " ";

            val = val * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}
