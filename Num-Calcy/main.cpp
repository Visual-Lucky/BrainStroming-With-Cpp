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
int binaryInput();
int octalInput();
int decimalInput();
int hexaInput();

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
    cout <<""<<endl;

    return choice;
}

void space();

int main() {
    int choice = mainmenu();

    switch(choice) {
        case 1: binarytoOctal();
            space();
            break;
        case 2: binarytoDecimal();
            space();
            break;
        case 3: binarytoHexal();
            space();
            break;
        case 4: octaltoBinary();
            space();
            break;
        case 5: octaltoDecimal();
            space();
            break;
        case 6: octaltoHexal();
            space();
            break;
        case 7: decimaltoBinary();
            space();
            break;
        case 8: decimaltoOctal();
            space();
            break;
        case 9: decimaltoHexal();
            space();
            break;
        case 10: hexaltoBinary();
            space();
            break;
        case 11: hexaltoOctal();
            space();
            break;
        case 12: hexaltoDecimal();
            space();
            break;
        case 13: cout<<"Tq for Choosing us!";
            break;
        default: cout<<"Correct Choice Must Be Chosen!!"<<endl;
            space();
            main();
    }

    return 0;
}

void space() {
    int space=10;
    for(int i=0;i<space;i++) {
        cout<<endl;
    }
}

//Input for all
int binaryInput() {
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
int hexalInput() {
    int hexal;
    cout << "Enter Hexal Number:";
    cin >> hexal;
    return hexal;
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