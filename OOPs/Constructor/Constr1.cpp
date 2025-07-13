// Created by Admin on 12-07-2025.
#include <iostream>
using namespace std;

class Student {
    int rollno;
    string name;
public:
    Student(){
        rollno = 1;
        name = "Prateek";
    }
    void input() {
        cout<<"Enter roll No:"; cin>>rollno;
        cout<<"Enter Name:";
        cin.ignore(); getline(cin, name);
    }
    void output() {
        cout<<"Roll No is:"<<rollno;
        cout<<"Name is :"<<name;
    }
    int getRollNum() {
        return rollno;
    }

    string getName() {
        return name;
    }
};

int main() {
    Student student;
    return 0;
}