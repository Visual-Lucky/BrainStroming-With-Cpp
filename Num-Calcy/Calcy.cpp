#include<iostream>
#include<windows.h>

using namespace std;

//Inputs:
string binaryinput();
string octalinput();
int decimalinput();
string hexalinput();

//Main Operations:
int binary_decimal(string binary);
int octal_decimal(string octal);
int hexal_decimal(string hexal);
string decimal_binary(int decimal);
string decimal_octal(int decimal);
string decimal_hexal(int decimal);

//Calculations:
    //B-ODH
void binary_to_octal();
void binary_to_decimal();
void binary_to_hexal();

    //O-DHB
void octal_to_binary();
void octal_to_decimal();
void octal_to_hexal();

    //D-BDH
void decimal_to_binary();
void decimal_to_octal();
void decimal_to_hexal();

    //H-BOD
void hexal_to_binary();
void hexal_to_octal();
void hexal_to_decimal();

int mainmenu();
void space();

int main() {
    int choice = mainmenu();
    switch(choice) {

        case 1: binary_to_octal();
             space();
            return main();

        case 2: binary_to_decimal();
             space();
            return main();

        case 3: binary_to_hexal();
             space();
            return main();


        case 4: octal_to_binary();
             space();
            return main();

        case 5: octal_to_decimal();
             space();
            return main();

        case 6: octal_to_hexal();
             space();
            return main();


        case 7: decimal_to_binary();
             space();
            return main();
        case
            8: decimal_to_octal();
             space();
            return main();

        case 9: decimal_to_hexal();
             space();
            return main();

        case 10: hexal_to_binary();
             space();
            return main();

        case 11: hexal_to_octal();
             space();
            return main();

        case 12: hexal_to_decimal();
             space();
            return main();


        case 13: cout<<"Thank You for Using the Converter!!"<<endl;
            break;

        default: cout<<"Correct Choice Must Be Chosen!!"<<endl;
            main();
    }
    return 0;
}

int mainmenu() {
    cout <<"dbdbdbdbdbdbdbdbdbdbdbdbddbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbddbdbdbdbdbdbdbdbdbdbdbdb"<<endl<<endl;
    cout<<"\t\t\tWELCOME TO THE NUMBER CONVERTER \n\t\t\t\t\t\t\tdesigned by @Lucky"<<endl;
    cout <<endl<<"*Binary Conv.[0-1]\t\t\t\t*Decimal Conv.[0-9]"<<endl;
    cout<<"[1] Binary to Octal.\t\t\t\t[7] Decimal to Binary."<<endl;
    cout<<"[2] Binary to Decimal.\t\t\t\t[8] Decimal to Octal."<<endl;
    cout<<"[3] Binary to Hexal.\t\t\t\t[9] Decimal to Hexal."<<endl<<endl;
    cout<<"*Octal Conv.[0-7]\t\t\t\t*Hexal Conv.[0-9,a-f(10-15)]"<<endl;
    cout<<"[4] Octal to Binary.\t\t\t\t[10] Hexal to Binary."<<endl;
    cout<<"[5] Octal to Decimal.\t\t\t\t[11] Hexal to Octal."<<endl;
    cout<<"[6] Octal to Hexal.\t\t\t\t[12] Hexal to Decimal"<<endl<<endl;
    cout<<"[13] No More Conversion!!"<<endl;
    int choice;
    cout<<endl<<"Your Choice :";
    cin>>choice;
    cout<<endl;
    cout <<"******************************************************"<<endl;
    return choice;
}

void space() {
    Sleep(3000);
    cout<<"\n\n\n\n";
}

    //inputs:
string binaryinput() {
    string binary;
    cout << "Enter Binary Number:";
    cin >> binary;
    return binary;
}

string octalinput() {
    string octal;
    cout << "Enter Octal Number:";
    cin >> octal;
    return octal;
}

int decimalinput() {
    int decimal;
    cout << "Enter Decimal Number:";
    cin >> decimal;
    return decimal;
}

string hexalinput() {
    string hexal;
    cout << "Enter Hexal Number:";
    cin >> hexal;
    return hexal;
}

//Main Operations:
int binary_decimal(string binary) {
    int decimal = 0;
    int base = 1;
    for (int i=binary.length()-1; i>=0; i--) {
        decimal = decimal + (binary[i] * base);
        base = base * 2;
    }
    return decimal;
}

int octal_decimal(string octal) {
    int decimal = 0;
    int base = 1;
    for (int i=octal.length()-1; i>=0; i--) {
        decimal = decimal + (octal[i] * base);
        base = base * 8;
    }
    return decimal;
}

int hexal_decimal(string hexal) {
    int decimal = 0;
    int base = 1;
    for (int i=hexal.length()-1; i>=0; i--) {
        if (hexal[i] >= '0' && hexal[i] <= '9') {
            decimal = decimal + (hexal[i] * base);
            base = base * 16;
        }
        else {
            decimal = decimal + (int(hexal[i] - 55) * base);
            base = base * 16;
        }
            // else if (hexal[i] >= 'A' && hexal[i] <= 'F') {
            //     decimal = decimal + (hexal[i] * base);
            // }
    }
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
    //string hexadecimal = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    string HexaDecimal = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    for (int i=0; decimal>0; decimal/=16) {
        hexal[i] = HexaDecimal[decimal%16];
        i++;
    }
    return hexal;
}

        //Calculations:
            //B-ODH
void binary_to_octal() {
    string binary = binaryinput();
    int decimal = binary_decimal(binary);
    string octal = decimal_octal(decimal);
    cout << "Octal Number is : " << octal;
}

void binary_to_decimal() {
    string binary = binaryinput();
    int decimal = binary_decimal(binary);
    cout << "Decimal Number is : " << decimal;
}

void binary_to_hexal() {
    string binary = binaryinput();
    int decimal = binary_decimal(binary);
    string hexal = decimal_hexal(decimal);
    cout << "Hexal Number is : " << hexal;
}

    //O-DHB
void octal_to_binary() {
    string octal = octalinput();
    int decimal = octal_decimal(octal);
    string binary = decimal_binary(decimal);
    cout << "Binary Number is : " << binary;
}

void octal_to_decimal() {
    string octal = octalinput();
    int decimal = octal_decimal(octal);
    cout << "Decimal Number is : " << decimal;
}

void octal_to_hexal() {
    string octal = octalinput();
    int decimal = octal_decimal(octal);
    string hexal = decimal_hexal(decimal);
    cout << "Hexal Number is : " << hexal;
}

    //D-BDH
void decimal_to_binary() {
    int decimal = decimalinput();
    string binary = decimal_binary(decimal);
    cout << "Binary Number is : " << binary;
}

void decimal_to_octal() {
    int decimal = decimalinput();
    string octal = decimal_octal(decimal);
    cout << "Octal Number is : " << octal;
}

void decimal_to_hexal() {
    int decimal = decimalinput();
    string hexal = decimal_hexal(decimal);
    cout << "Hexal Number is : " << hexal;
}

    //H-BOD
void hexal_to_binary() {
    string hexal = hexalinput();
    int decimal = hexal_decimal(hexal);
    string binary = decimal_binary(decimal);
    cout << "Binary Number is : " << binary;
}

void hexal_to_octal() {
    string hexal = hexalinput();
    int decimal = hexal_decimal(hexal);
    string octal = decimal_octal(decimal);
    cout << "Octal Number is : " << octal;
}

void hexal_to_decimal() {
    string hexal = hexalinput();
    int decimal = hexal_decimal(hexal);
    cout << "Decimal Number is : " << decimal;
}