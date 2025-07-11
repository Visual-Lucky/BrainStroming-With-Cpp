#include<iostream>
#include<windows.h>
#include "calcyHeader.h"

using namespace std;

void header(){
for(int i=0; i<58; i++){    cout <<"db";    }
cout<<endl<<endl;    
cout<<"\t\t\t\t\tWELCOME TO THE NUMBER CONVERTER \n\t\t\t\t\t\t\t\t\t\t\t\tdesigned by @Lucky"<<endl;
for(int i=0; i<58; i++){    cout <<"db";    }
cout<<endl<<endl;    
}

void mainmenu() {
    cout<<endl<<"Your Choice :"<<endl;
    cout <<endl<<"*Binary Conv.[0-1]\t\t\t\t\t\t\t\t\t*Decimal Conv.[0-9]"<<endl;
    cout<<"[1] Binary to Octal.\t\t\t\t\t\t\t\t\t[7] Decimal to Binary."<<endl;
    cout<<"[2] Binary to Decimal.\t\t\t\t\t\t\t\t\t[8] Decimal to Octal."<<endl;
    cout<<"[3] Binary to Hexal.\t\t\t\t\t\t\t\t\t[9] Decimal to Hexal."<<endl<<endl;
    cout<<"*Octal Conv.[0-7]\t\t\t\t\t\t\t\t\t*Hexal Conv.[0-9,a-f(10-15)]"<<endl;
    cout<<"[4] Octal to Binary.\t\t\t\t\t\t\t\t\t[10] Hexal to Binary."<<endl;
    cout<<"[5] Octal to Decimal.\t\t\t\t\t\t\t\t\t[11] Hexal to Octal."<<endl;
    cout<<"[6] Octal to Hexal.\t\t\t\t\t\t\t\t\t[12] Hexal to Decimal"<<endl<<endl;
    cout<<"[13] No More Conversion!!"<<endl;
}

int choose(){
    int choice;
    cin>>choice;
    return choice;
}

int main(){
    clearscreen();
    header();
    mainmenu();
    gotoxy(13,7);
    int choice = choose();
    clearscreen();
    header();
    cout << "answer is "<<choice;

    return 0;
}