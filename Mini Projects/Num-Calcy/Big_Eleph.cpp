#include <iostream>
#include <windows.h>
#include <string>
#include <algorithm>

using namespace std;

// Inputs:
string binaryinput();
string octalinput();
int decimalinput();
string hexalinput();

// Main Operations:
int binary_decimal(const string &binary);
int octal_decimal(const string &octal);
int hexal_decimal(const string &hexal);
string decimal_binary(int decimal);
string decimal_octal(int decimal);
string decimal_hexal(int decimal);

// Calculations:
void binary_to_octal();
void binary_to_decimal();
void binary_to_hexal();

void octal_to_binary();
void octal_to_decimal();
void octal_to_hexal();

void decimal_to_binary();
void decimal_to_octal();
void decimal_to_hexal();

void hexal_to_binary();
void hexal_to_octal();
void hexal_to_decimal();

int mainmenu();
void space();

// Main Loop
int main() {
    while (true) {
        int choice = mainmenu();
        switch (choice) {
            case 1: binary_to_octal(); break;
            case 2: binary_to_decimal(); break;
            case 3: binary_to_hexal(); break;
            case 4: octal_to_binary(); break;
            case 5: octal_to_decimal(); break;
            case 6: octal_to_hexal(); break;
            case 7: decimal_to_binary(); break;
            case 8: decimal_to_octal(); break;
            case 9: decimal_to_hexal(); break;
            case 10: hexal_to_binary(); break;
            case 11: hexal_to_octal(); break;
            case 12: hexal_to_decimal(); break;
            case 13:
                cout << "Thank You for Using the Converter!!" << endl;
                return 0;
            default:
                cout << "Correct Choice Must Be Chosen!!" << endl;
        }
        space();
    }
}

int mainmenu() {
    cout <<"======================================================================================"<<endl<<endl;
    cout<<"\t\t\tWELCOME TO THE NUMBER CONVERTER \n\t\t\t\t\t\t\tdesigned by @Lucky"<<endl;
    cout <<endl<<"*Binary Conv.[0-1]\t\t\t\t*Decimal Conv.[0-9]"<<endl;
    cout<<"[1] Binary to Octal.\t\t\t\t[7] Decimal to Binary."<<endl;
    cout<<"[2] Binary to Decimal.\t\t\t\t[8] Decimal to Octal."<<endl;
    cout<<"[3] Binary to Hexal.\t\t\t\t[9] Decimal to Hexal."<<endl<<endl;
    cout<<"*Octal Conv.[0-7]\t\t\t\t*Hexal Conv.[0-9,a-f]"<<endl;
    cout<<"[4] Octal to Binary.\t\t\t\t[10] Hexal to Binary."<<endl;
    cout<<"[5] Octal to Decimal.\t\t\t\t[11] Hexal to Octal."<<endl;
    cout<<"[6] Octal to Hexal.\t\t\t\t[12] Hexal to Decimal"<<endl<<endl;
    cout<<"[13] Exit"<<endl;
    int choice;
    cout << endl << "Your Choice: ";
    cin >> choice;
    cout << "\n--------------------------------------------------------\n";
    return choice;
}

void space() {
    Sleep(3000);
    cout << "\n\n\n\n";
}

// Input functions
string binaryinput() {
    string binary;
    cout << "Enter Binary Number: ";
    cin >> binary;
    return binary;
}

string octalinput() {
    string octal;
    cout << "Enter Octal Number: ";
    cin >> octal;
    return octal;
}

int decimalinput() {
    int decimal;
    cout << "Enter Decimal Number: ";
    cin >> decimal;
    return decimal;
}

string hexalinput() {
    string hexal;
    cout << "Enter Hexal Number: ";
    cin >> hexal;
    return hexal;
}

// Conversion implementations
int binary_decimal(const string &binary) {
    int decimal = 0;
    int base = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        decimal += (binary[i] - '0') * base;
        base *= 2;
    }
    return decimal;
}

int octal_decimal(const string &octal) {
    int decimal = 0;
    int base = 1;
    for (int i = octal.length() - 1; i >= 0; i--) {
        decimal += (octal[i] - '0') * base;
        base *= 8;
    }
    return decimal;
}

int hexal_decimal(const string &hexal) {
    int decimal = 0;
    int base = 1;
    for (int i = hexal.length() - 1; i >= 0; i--) {
        if (hexal[i] >= '0' && hexal[i] <= '9')
            decimal += (hexal[i] - '0') * base;
        else if (hexal[i] >= 'A' && hexal[i] <= 'F')
            decimal += (hexal[i] - 'A' + 10) * base;
        else if (hexal[i] >= 'a' && hexal[i] <= 'f')
            decimal += (hexal[i] - 'a' + 10) * base;
        base *= 16;
    }
    return decimal;
}

string decimal_binary(int decimal) {
    if (decimal == 0) return "0";
    string binary = "";
    while (decimal > 0) {
        binary += (decimal % 2) + '0';
        decimal /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

string decimal_octal(int decimal) {
    if (decimal == 0) return "0";
    string octal = "";
    while (decimal > 0) {
        octal += (decimal % 8) + '0';
        decimal /= 8;
    }
    reverse(octal.begin(), octal.end());
    return octal;
}

string decimal_hexal(int decimal) {
    if (decimal == 0) return "0";
    string hexal = "";
    string hexa_chars = "0123456789ABCDEF";
    while (decimal > 0) {
        hexal += hexa_chars[decimal % 16];
        decimal /= 16;
    }
    reverse(hexal.begin(), hexal.end());
    return hexal;
}

// Calculations:
void binary_to_octal() {
    string binary = binaryinput();
    int decimal = binary_decimal(binary);
    string octal = decimal_octal(decimal);
    cout << "Octal Number is: " << octal << endl;
}

void binary_to_decimal() {
    string binary = binaryinput();
    int decimal = binary_decimal(binary);
    cout << "Decimal Number is: " << decimal << endl;
}

void binary_to_hexal() {
    string binary = binaryinput();
    int decimal = binary_decimal(binary);
    string hexal = decimal_hexal(decimal);
    cout << "Hexal Number is: " << hexal << endl;
}

void octal_to_binary() {
    string octal = octalinput();
    int decimal = octal_decimal(octal);
    string binary = decimal_binary(decimal);
    cout << "Binary Number is: " << binary << endl;
}

void octal_to_decimal() {
    string octal = octalinput();
    int decimal = octal_decimal(octal);
    cout << "Decimal Number is: " << decimal << endl;
}

void octal_to_hexal() {
    string octal = octalinput();
    int decimal = octal_decimal(octal);
    string hexal = decimal_hexal(decimal);
    cout << "Hexal Number is: " << hexal << endl;
}

void decimal_to_binary() {
    int decimal = decimalinput();
    string binary = decimal_binary(decimal);
    cout << "Binary Number is: " << binary << endl;
}

void decimal_to_octal() {
    int decimal = decimalinput();
    string octal = decimal_octal(decimal);
    cout << "Octal Number is: " << octal << endl;
}

void decimal_to_hexal() {
    int decimal = decimalinput();
    string hexal = decimal_hexal(decimal);
    cout << "Hexal Number is: " << hexal << endl;
}

void hexal_to_binary() {
    string hexal = hexalinput();
    int decimal = hexal_decimal(hexal);
    string binary = decimal_binary(decimal);
    cout << "Binary Number is: " << binary << endl;
}

void hexal_to_octal() {
    string hexal = hexalinput();
    int decimal = hexal_decimal(hexal);
    string octal = decimal_octal(decimal);
    cout << "Octal Number is: " << octal << endl;
}

void hexal_to_decimal() {
    string hexal = hexalinput();
    int decimal = hexal_decimal(hexal);
    cout << "Decimal Number is: " << decimal << endl;
}
