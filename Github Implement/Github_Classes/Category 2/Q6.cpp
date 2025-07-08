// Create a class Student with data members:
// name, roll, marks. Input and display info.
#include<iostream>
using namespace std;

class Student {
    //Data Members
    string name;
    int rollNo;
    float marks;
public:
    void input() {
        cout<<"Enter Name:";
        getline(cin,name);
        cout<<"Enter Roll no.:";
        cin>>rollNo;
        cout<<"Enter Marks:";
        cin>>marks;
    }

    void display() {
        cout<<"Name is : "<<name<<endl;
        cout<<"Roll No is : "<<rollNo<<endl;
        cout<<"Marks is : "<<marks<<endl;
    }
};

int main() {

    Student student;

    student.input();

    student.display();

    return 0;
}