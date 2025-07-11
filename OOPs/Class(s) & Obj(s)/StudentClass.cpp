#include<iostream>
using namespace std;

class Student {
    // Data Members
    string name;
    int rollNo;
    int marks[5];

    // Member Functions
public:
    void input();
    void output();

};

void Student::input() {

}

void Student::output(){}

int main() {
    Student S[40];

    //for Entering all Students Data
    for(int i=0; i<40; i++) {
        S[i].input();
    }

    //for Printing all Students Data
    for(int i=0; i<40; i++) {
        S[i].output;
    }

    return 0;
}