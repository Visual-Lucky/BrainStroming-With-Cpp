// Created by Admin on 12-07-2025.
#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int rollno;
    string name;
public:
    void input() {
        cout<<"Enter roll No:";
        cin>>rollno;
        cout<<"Enter Name:";
        cin.ignore();
        getline(cin, name);
    }
    void output() {
        cout<<"Roll No is:"<<rollno;
        cout<<"Name is :"<<name;
    }
};

int main() {
    Student student;
    fstream f;
    // f.open("abc.dat", ios::out | ios::binary);
    // student.input();
    // f.write((char*)&student,sizeof(student));
    // f.close();
    f.open("abc.dat", ios::in | ios::binary);
    while (!f.eof()) {
        f.read((char*)&student,sizeof(student));
        student.output();
    }

    return 0;
}