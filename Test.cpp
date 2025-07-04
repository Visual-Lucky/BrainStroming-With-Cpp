#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    int reversed = 0;

    // Step 1: Build reversed binary number
    while (n > 0) {
        int bit = n % 2;
        reversed = reversed * 10 + bit; // build number in reverse
        n = n / 2;
    }

    // Step 2: Print reversed to get correct binary
    while (reversed > 0) {
        cout << reversed % 10;
        reversed = reversed / 10;
    }

    return 0;
}


// int main() {
//     int num;
//     cin >> num;
//     while (num > 0) {
//         cout << num % 2;
//         num = num / 2;
//     }
//     return 0;
// }