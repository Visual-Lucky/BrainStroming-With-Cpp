// Created by Admin on 12-07-2025.
#include <iostream>
#include <fstream>
using namespace std;

class Flight {
    int flightNo;
    char from[20];
    char to[20];
public:
    string getTo() {
        string str = string(to);
        return str;
    }
    void enter() {
        cout<<"Drop Flight Num ->";
        cin>>flightNo;
        cout<<"Fly From ->";
        cin.ignore();
        cin.getline(from, 20);
        cout<<"Fly To ->";
        // cin.ignore();
        cin.getline(to, 20);
    }
    void display() {
        cout<<" "<<flightNo;
    }
};

void search() {
    fstream f;
    Flight indigo;
    bool isFlights = false;
    cout<<"\nFlights that Landes in City of Dreams\n";
    cout<<"Flights num(s) are ->";
    f.open("flight.dat", ios::in | ios::binary);
    while (f.read((char*)&indigo, sizeof(indigo))) {
        if (indigo.getTo() == "Mumbai" || indigo.getTo() == "mumbai" ) {
            indigo.display();
            isFlights = true;
        }
    }
    f.close();
    if (!isFlights) {
        cout<<"There are No Flights to Mumbai";
    }
}

int main() {
    cout << "What's Up Boii" << endl;
    Flight airIndia;
    fstream f;
    char ch;
    f.open("flight.dat", ios::out | ios::binary);
    do {
        airIndia.enter();
        f.write((char*)&airIndia, sizeof(airIndia));
        cout<<"Want more Executions?(y/n)";
        cin>>ch;
    }while (ch == 'y' || ch == 'Y');
    f.close();
    cout<<"\nData Stored Successfully!\n";

    search();

    return 0;
}
