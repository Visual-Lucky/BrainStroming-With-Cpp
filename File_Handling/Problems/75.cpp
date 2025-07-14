// Created by Admin on 12-07-2025.
#include <iostream>
#include <fstream>
using namespace std;

class Club {
    int membNo;
    char membName[20];
    char type;
public:
    void registor() {
        cout<<"Drop Member No ->";
        cin>>membNo;
        cout<<"Drop Member Name ->";
        cin.ignore();
        cin.getline(membName, 20) ;
        cout<<"[L]-for-Life Member\n[M]-for-Monthly Member";
        cout<<"\n[G]-for-Guest\nDrop Type of Membership ->";
        type = getchar();
    }
    void display() {
     cout<<"\nMemb. no. = "<<membNo<<" & Name = "<<membName<<".";
    }
    char whatType() {
        return type;
    }
};

void Display() {
    fstream f;
    Club xdeg;
    bool isMembersM = false;
    bool isMembersL = false;
    cout<<"\nMembers that have Monthly Membership :";
    f.open("club.dat", ios::in | ios::binary);
    while (f.read((char*)&xdeg, sizeof(xdeg))) {
        if (xdeg.whatType() == 'M' || xdeg.whatType() == 'm') {
            xdeg.display();
            isMembersM = true;
        }
    }
    f.close();
    if (!isMembersM) {
        cout<<"\nThere are no Monthly Members in our Club:\n";
    }

    cout<<"\n\nMembers that have Lifetime Membership :";
    f.open("club.dat", ios::in | ios::binary);
    while (f.read((char*)&xdeg, sizeof(xdeg))) {
        if (xdeg.whatType() == 'L' || xdeg.whatType() == 'l') {
            xdeg.display();
            isMembersL = true;
        }
    }
    f.close();
    if (!isMembersL) {
        cout<<"\nThere are no Lifetime Members in our Club:";
    }

}

int main() {
    cout << "What's Up Boii Lets DO 75th Qs:" << endl;

    fstream f;
    Club xdeg;

    f.open("club.dat", ios::out | ios::binary);
    char ch;
    do {
        xdeg.registor();
        f.write((char*)&xdeg, sizeof(xdeg));
        cout<<"Want more Executions?(y/n)";
        cin>>ch;
    }while (ch == 'y' || ch == 'Y');
    f.close();
    cout<<"\nData Stored Successfully!\n";

    Display();

    return 0;
}
