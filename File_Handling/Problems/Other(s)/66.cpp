// Created by Admin on 12-07-2025.
#include <iostream>
#include <fstream>
using namespace std;

class ToyShop {
    int toyCode;
    string toyDetails;
public:
    void fillToyDetails() {
        cout<<"Enter Toy Code:";
        cin>>toyCode;
        cout<<"Enter Toy Details:";
        cin.ignore();
        getline(cin,toyDetails);
    }
    void getToyDeatils() {
        cout<<"Toy Code : "<<toyCode<<endl;
        cout<<"Toy Details are : "<<toyDetails;
    }
    int getCode() {
        return toyCode;
    }
};

int main() {
    ToyShop shop;
    fstream f;
    char ch;
    f.open("toyshop.dat", ios::app | ios::binary);
    do {
        shop.fillToyDetails();
        f.write((char*)&shop, sizeof(shop));
        cout<<"Press Y for Contine:";
        cin>>ch;
    }while(ch == 'Y' || ch == 'y');
    f.close();

    cout<<"\nYour Data is Stored Successfully\n";
    int TC;
    cout<<"Enter Toy Code to find:";
    cin>>TC;
    f.open("toyshop.dat", ios::in | ios::binary );
    bool isfind = false;
    while (f.read((char*)&shop, sizeof(shop))) {
        int GC = shop.getCode();
        if (TC == shop.getCode()) {
            shop.getToyDeatils();
            isfind = true;
            return 0;
        }
    }
    if (!isfind) {
        cout<<"Your Code Doesn't Exist in our File";
    }

}