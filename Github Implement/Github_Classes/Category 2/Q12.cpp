// Created by Admin on 09-07-2025.
//Create class Book with data members: 
//id, title, author. Display using a function.
#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

void setColor(int code);
void resetColor();

class BOOK{
    int id;
    string title;
    string author;
public:
    void displayBookInfo(){
        cout<<endl<<"Book ID : "<<id<<", Title is :"<<title<<" & Author :"<<author;
    }
    void addBookInfo(){
        cout<<"Enter Book ID :";
        cin>>id;
        cin.ignore();
        cout<<"Enter Title :";
        getline(cin,title);
        cout<<"Enter Author Name :";
        getline(cin, author);
    }
    void writeToFile(BOOK saras){
        fstream f("bookInfo.dat", ios::binary | ios::out);
        // ofstream file("bookInfo.dat", ios::binary | ios::app);
        char loopbreaker;
        do{
            this->addBookInfo();
            f.write((char*)this, sizeof(*this));
            // file.write((char*)this, sizeof(*this));
            cout<<"\033[33mpress Enter to STOP\033[0m";
            loopbreaker = getch();
        }while(loopbreaker != 13);
        // file.close();
        f.close();

        cout<<endl<<"\033[1;32mYour Data is Stored!\033[0m"<<endl;

    }

    void printFileData(BOOK gold){
        fstream f;
        f.open("bookInfo.dat", ios::binary | ios::in);
            while(f.read((char*)this, sizeof(*this))){
                setColor(36); // Cyan
                this->displayBookInfo();
            }
             resetColor();
        f.close();
    }

};

void setColor(int code) {
    cout << "\033[1;" << code << "m";
}

void resetColor() {
    cout << "\033[0m";
}

int main(){
    BOOK saras;
    fstream f;

    saras.writeToFile(saras);

    saras.printFileData(saras);

    return 0;
}