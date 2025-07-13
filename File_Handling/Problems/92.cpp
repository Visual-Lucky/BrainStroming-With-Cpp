// Created by Admin on 12-07-2025.
#include <iostream>
#include <fstream>
using namespace std;

class FloppyBox {
    int size;
    char name[15];
public:
    FloppyBox() {
        size = 0;
    }
    void getdata() {
        cout<<"Drop Size:";
        cin>>size;
        cin.ignore();
        cout<<"Drop Name:";
        cin.getline(name, 15);
    }
    void showdata() const {
        cout<<"\nSize = "<<size<<" & Name = "<<name<<endl;
    }
};

int main() {
    cout << "What's Up Boii Lets Do Coding!!" << endl;

    FloppyBox fb;
    fstream f;

    char ch;
    f.open("floppybox.dat", ios::out | ios::binary);
    do {
        fb.getdata();
        f.write((char*)&fb, sizeof(fb));
        cout<<"Press ENTER to stop Collecting Data";
        ch = getchar();
    }while (ch != '\n');
    f.close();

    cout<<"\nYour Data is Stored!\n";

    cout<<"\npress ENTER for printing data from FILE\n";
    ch = getchar();
    if (ch == '\n') {
    cout<<"\nYour Data is :\n";
    f.open("floppybox.dat", ios::in | ios::binary);
        while (f.read((char*)&fb, sizeof(fb))) {
            fb.showdata();
        }
    }


    return 0;
}
