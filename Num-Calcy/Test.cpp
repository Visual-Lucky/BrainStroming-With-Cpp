#include<iostream>
#include <string>

using namespace std;

int decimalinput() {
    int decimal;
    cout << "Enter Decimal Number:";
    cin >> decimal;
    return decimal;
}

string decimal_binary(int decimal) {
    string binary;
    for (int i=0; decimal>0; decimal/=2) {
        binary[i] = decimal%2;
        i++;
    }
    return binary;
}

string decimal_octal(int decimal) {
    string octal;
    for (int i=0; decimal>0; decimal/=8) {
        octal[i] = decimal%8;
        i++;
    }
    return octal;
}

string decimal_hexal(int decimal) {
    string hexal;
    string HexaDecimal = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    for (int i=0; decimal>0; decimal/=16) {
        hexal[i] = HexaDecimal[decimal%16];
        i++;
    }
    return hexal;
}


int main() {
    int decimal = decimalinput();
    string binary = decimal_binary(decimal);
    cout<<"Binary Number is :"<<binary;
    return 0;
}