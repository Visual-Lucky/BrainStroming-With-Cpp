#include <iostream>
using namespace std;

void decimaltoBinary() {
    int numdec;
    cout<<"Enter Decimal Number:";
    cin>>numdec;
    int dcnbn[100];
    int length = -1;
    for (int i=0; numdec>0; numdec /= 2) {
        dcnbn[i] = numdec%2;
        i++;
        length++;
    }
    cout<<"Binary Number is:";
    for (int i=length; i>=0; i--) {
        cout<<dcnbn[i];
    }
    cout<<endl<<endl;

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
    cout <<""<<endl;

    return choice;
}

int main() {
    while (true) {
        int choice = mainmenu();
        switch(choice) {
            // case 1: binarytoOctal(); break;
            // case 2: binarytoDecimal(); break;
            // case 3: binarytoHexal(); break;
            // case 4: octaltoBinary(); break;
            // case 5: octaltoDecimal(); break;
            // case 6: octaltoHexal(); break;
            case 7: decimaltoBinary(); break;
            // case 8: decimaltoOctal(); break;
            // case 9: decimaltoHexal(); break;
            // case 10: hexaltoBinary(); break;
            // case 11: hexaltoOctal(); break;
            // case 12: hexaltoDecimal(); break;
            // case 13:
            //     cout << "Thank you for using the converter!\n";
            //     return 0; // exit
            default:
                cout << "Correct Choice Must Be Chosen!!" << endl;
        }
    }

    return 0;
}
