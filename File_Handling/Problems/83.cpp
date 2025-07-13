// Created by Admin on 12-07-2025.
#include <iostream>
#include <fstream>
using namespace std;

class Applicant {
    char applicantRollno[10];
    char applicantName[30];
    int applicantScore;
public:
    void enrol() {
        cout<<"Drop Applicant Roll NO >";
        cin.getline(applicantRollno, 10);
        cout<<"Drop Applicant Name >";
        cin.getline(applicantName, 30);
        cout<<"Drop Applicant Score >";
        cin>>applicantScore;
    }
    void status() {
cout<<endl<<"Applicant Roll No. = "<<applicantRollno<<" , Name = "<<applicantName<<" and "<<applicantScore<<endl;
    }
    int getScore() {
        return applicantScore;
    }
    void getApplicantName() {
        cout<<" "<<applicantName<<" ;";
    }
};

int main() {
    cout << "What's Up Boii Lets Do Coding" << endl;
    fstream f;
    Applicant appl;

    f.open("APPLY.DAT", ios::out | ios::binary);
    int ch;
    do {
        appl.enrol();
        f.write((char*)&appl, sizeof(appl));
        cin.ignore(1000, '\n');
        cout<<"Press Enter to Break Inputting >";
        ch = getchar();
    }while (ch != '\n');
    f.close();

    cout<<"\nYour Data Stored Successfully in our File >\n";
    cout<<"\nBelow That is a list of students that got below 70 percentages\n";

    f.open("APPLY.DAT", ios::in | ios::binary);
    bool isbelow70 = false;
    cout<<"\nStudents are -> ";
    while (f.read((char*)&appl, sizeof(appl))) {
        if (appl.getScore() < 70) {
            appl.getApplicantName();
            isbelow70 = true;
        }
    }
    f.close();
    if (!isbelow70) {
        cout<<"\nThere are no students that have below 70 marks:";
    }
    return 0;
}
