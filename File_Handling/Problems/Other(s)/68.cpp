// Created by Admin on 13-07-2025.
// #include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

class Mobile {
    char number[11];
    int calls;
public:
    Mobile() {
        cout<<""<<number;
    }
    int getCalls() {
        return calls;
    }
    void enter() {
        cout << "Enter Mobile No. (10 digits): ";
        cin.getline(number, 11);
        cout << "Enter Num of Calls: ";
        cin >> calls;
        cin.ignore();
    }

    void billing() const {
        cout << "Number is: " << number << endl;
        cout << "No. of Call(s) are: " << calls << endl;
    }
};

int main() {
    Mobile nokia;
    fstream f;
    char ch;
    f.open("mobile.dat", ios::out | ios::binary);
    do {
        nokia.enter();
        f.write((char*)&nokia, sizeof(nokia));
        cout<<"You Want to Add more Data in File :> \nY for Yes :";
        cin>>ch;
        cin.ignore();
    }while (ch == 'Y' || ch == 'y');
    f.close();
    system("color 0A");
    cout<<"\nYour Data is Securely Stored in our file XD\n";
    system("color 06");

    cout<<"Here are the Mobile Numbers that have more than 1000 calls :> "<<endl;
    f.open("mobile.dat", ios::in | ios::binary);

    bool isfound = false;
    while (f.read((char*)&nokia, sizeof(nokia))) {
        int CALLS = nokia.getCalls();
        if (CALLS > 1000) {
            nokia.billing();
            isfound = true;
        }
    }
    if (!isfound) {
        cout<<"Our Data Has NO Number that Exceeds 1000 Calls:";
    }
    return 0;
}