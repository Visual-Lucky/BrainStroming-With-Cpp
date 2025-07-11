#include <iostream>
using namespace std;

//Main Operands
int binarytoDecimalRAW(int n);
int decimaltoBinaryRAW(int n);
int decimaltoOctalRAW(int n);
int octaltoDecimalRAW(int n);
int decimaltoHexalRAW(int n);
int hexaltoDecimalRAW(int n);

//Inputs to all
string binaryInput();
int octalInput();
int decimalInput();
string hexaInput();

//binary to all
void binarytoOctal();
void binarytoDecimal();
void binarytoHexal();

//Octal to all
void octaltoBinary();
void octaltoDecimal();
void octaltoHexal();

//decimal to all
void decimaltoBinary();
void decimaltoOctal();
void decimaltoHexal();

//Hexa-Decimal to all
void hexaltoBinary();
void hexaltoOctal();
void hexaltoDecimal();



void space() {
    int space=10;
    for(int i=0;i<space;i++) {
        cout<<endl;
    }
}

//Input for all
string binaryInput() {
    int binary;
    cout << "Enter Binary Number:";
    cin >> binary;
    return binary;
}
int octalInput() {
    int octal;
    cout << "Enter Octal Number:";
    cin >> octal;
    return octal;
}
int decimalInput() {
    int decimal;
    cout << "Enter Decimal Number:";
    cin >> decimal;
    return decimal;
}
string hexalInput() {
    int hexal;
    cout << "Enter Hexal Number:";
    cin >> hexal;

}

//Main Operands
int binarytoDecimalRAW(int n) {
    //here n is binary number
    int decimal[20];
    int length = -1;
    for (int i=0; n>=0; n/=10) {
        decimal[i] = n%10;
        length++;
        i++;
    }

}
int decimaltoBinaryRAW(int n){}
int decimaltoOctalRAW(int n){}
int octaltoDecimalRAW(int n){}
int decimaltoHexalRAW(int n){}
int hexaltoDecimalRAW(int n){}

//binary to all
void binarytoOctal() {
    int binary = binaryInput();
    int decimal = binarytoDecimalRAW(binary);
    int octal = decimaltoOctalRAW(decimal);
    cout<<"Octal Number is :"<<octal;
}
void binarytoDecimal() {
    int binary = binaryInput();
    int decimal = binarytoDecimalRAW(binary);
    cout<<"Decimal Number is :"<<decimal;
}
void binarytoHexal() {
    int binary = binaryInput();
    int decimal = binarytoDecimalRAW(binary);
    int hexal = decimaltoHexalRAW(decimal);
    cout<<"Hexal Number is :"<<hexal;
}

//Octal to all
void octaltoBinary() {
    int octal = octalInput();
    int decimal = octaltoDecimalRAW(octal);
    int Binary = decimaltoBinaryRAW(decimal);
    cout<<"Binary Number is :"<<Binary;
}
void octaltoDecimal() {
    int octal = octalInput();
    int decimal = octaltoDecimalRAW(octal);
    cout<<"Decimal Number is :"<<decimal;
}
void octaltoHexal() {
    int octal = octalInput();
    int decimal = octaltoDecimalRAW(octal);
    int Hexal = decimaltoHexalRAW(decimal);
    cout<<"Hexal Number is :"<<Hexal;
}

//decimal to all
void decimaltoBinary() {
    int decimal = decimalInput();
    int Binary = decimaltoBinaryRAW(decimal);
    cout<<"Binary Number is :"<<Binary;
}
void decimaltoOctal() {
    int decimal = decimalInput();
    int octal = decimaltoOctalRAW(decimal);
    cout<<"Octal Number is :"<<octal;
}
void decimaltoHexal() {
    int decimal = decimalInput();
    int hexal = decimaltoHexalRAW(decimal);
    cout<<"Hexal Number is :"<<hexal;
}

//Hexa-Decimal to all
void hexaltoBinary() {
    int hexal = hexalInput();
    int decimal = hexaltoDecimalRAW(hexal);
    int binary = decimaltoBinaryRAW(decimal);
    cout<<"Binary Number is :"<<binary;
}

void hexaltoOctal() {
    int hexal = hexalInput();
    int decimal = hexaltoDecimalRAW(hexal);
    int octal = decimaltoOctalRAW(decimal);
    cout<<"Octal Number is :"<<octal;
}

void hexaltoDecimal() {
    int hexal = hexalInput();
    int decimal = hexaltoDecimalRAW(hexal);
    cout<<"Decimal Number is :"<<decimal;
}