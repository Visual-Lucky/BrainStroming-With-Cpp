#include<iostream>
using namespace std;

class Candidate {
    long regNo;
    string name,remarks;
    float score;
public:
    void ENTER() {
        cout<<"Enter Name : ";
        getline(cin,name);
        cout<<"Enter Regidtration No. : ";
        cin>>regNo;
        cout<<"Enter Score : ";
        cin>>score;
        AssignRem(score);

    }
    void DISPLAY() {
        cout<<"Name is : "<<name;
        cout<<"Reg No. is : "<<regNo;
        cout<<"Remarks : "<<remarks;
    }
    void AssignRem(float score) {
        if (score >= 50) {
            remarks = "|Selected|";
        }else {
            remarks = "|Not Selected|";
        }
    }
};

int main() {
    Candidate candidate;
    candidate.ENTER();
    candidate.DISPLAY();
    return 0;
}