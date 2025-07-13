// Created by Admin on 12-07-2025.
#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int rollNo;
    string name;
public:
    Student() {
        rollNo = 0;
        name = "";
    }
    ~Student() {
        cout<<"\nI am Inevitable();\n";
    }
    void fillDetails() {
        cout<<"Enter Roll No : ";
        cin>>rollNo;
        cout<<"Enter Name : ";
        cin.ignore();
        getline(cin,name);
    }
    void displayDetails() {
        cout<<"Roll no is : "<<rollNo<<endl;
        cout<<"Name is : "<<name;
    }
};

void addingStudents() {
    fstream f;
    Student stud;
    f.open("student.dat", ios::app | ios::binary);
    char ch;
    do{
        stud.fillDetails();
        f.write((char*)&stud, sizeof(stud));
        cout<<"You Want to add More Details:\nIf Yes then press Y : ";
        cin>>ch;
    }while (ch == 'y' || ch == 'Y');
    f.close();
    cout<<"Your Data Stored Successfully\n";
}

void printingStudents() {
    Student student;
    fstream l;
    l.open("student.dat", ios::in | ios::binary);
    cout<<"\nYour Data is :\n";
    while (l.read((char*)&student, sizeof(student))) {
        student.displayDetails();
    }
}

int main() {
    addingStudents();
    printingStudents();
    return 0;
}
