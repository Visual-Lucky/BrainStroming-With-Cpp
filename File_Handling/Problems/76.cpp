// Created by Admin on 12-07-2025.
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

class PhoneList {
    char name[20];
    char address[30];
    char areaCode[5];
    char phoneNum[15];
public:
    void registor() {
        cout<<"Drop Name ->";
        cin.getline(name, 20) ;
        cout<<"Address ->";
        cin.getline(address, 30);
        cout<<"Area Code (eg. RAJ,DEL) ->";
        cin.getline(areaCode, 5);
        cout<<"Phone Num ->";
        cin.getline(phoneNum, 15);
        // cin.ignore();
    }
    void show() {
        cout<<"\nName = "<<name<<", Address = "<<address<<" & Phone Num = "<<phoneNum<<".";
    }
    string getAreaCode() {
            string str = string(areaCode);
            transform(str.begin(), str.end(), str.begin(), ::toupper);
            return str;
    }
};

void transfer() {
//Copy those which having Area Code "DEL"
//from phone.dat to phoneDEL.dat

    fstream fa, fb;
    PhoneList dailer;
    fa.open("phone.dat", ios::in | ios::binary);
    fb.open("phoneDEL.dat", ios::out | ios::binary); // can be ios::out
    while (fa.read((char*)&dailer, sizeof(dailer))) {
        if (dailer.getAreaCode() == "DEL") {
            fb.write((char*)&dailer, sizeof(dailer));
        }
    }
    fb.close();
    fa.close();
}

int main() {
    cout << "<<What's Up Boii lets Did Qs no 76>>" << endl;
    fstream f;
    PhoneList pl;

    f.open("phone.dat", ios::out | ios::binary);
    char ch;
    do {
        pl.registor();
        f.write((char*)&pl, sizeof(pl));
        cout<<"Want more Executions?(y/n)";
        cin>>ch;
        cin.ignore();
    }while (ch == 'y' || ch == 'Y');
    f.close();
    cout<<"\nData Stored Successfully!\n";

    transfer();

    bool isDEL = false;
    cout<<"Contacts That area from DELHI ~ ";
    f.open("phoneDEL.dat", ios::in | ios::binary);
    while (f.read((char*)&pl, sizeof(pl))) {
        pl.show();
        isDEL = true;
    }
    if (!isDEL) {
        cout<<"No Phones from Delhi";
    }

    return 0;
}
