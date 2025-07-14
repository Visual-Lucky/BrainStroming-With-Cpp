// Created by Admin on 12-07-2025.
#include <iostream>
#include <fstream>
using namespace std;

class Camera {
    long modelNo;
    float megaPixel;
    int zoom;
    char details[120];
public:
    void enter() {
        // cin.ignore();
        cout<<"Enter Camera's Model NO >";
        cin>>modelNo;
        cin.ignore();
        cout<<"Enter MegaPixels >";
        cin>>megaPixel;
        cin.ignore();
        cout<<"Enter ZOOM >";
        cin>>zoom;
        cin.ignore();
        cout<<"Enter Camera's Details >";
        cin.getline(details, 120);
    }
    void display() {
        cout<<"\nCamera's ModelNo > "<<modelNo<<", Zoom > "<<zoom<<", MegaPixel > "<<megaPixel<<"\nand Details are >"<<details<<endl;
    }
    long getModelNo() {
        return modelNo;
    }
};

void search() {
    fstream l;
    Camera cam;
    long MN;
    cout<<"Enter Model No. to Search >";
    cin>>MN;
    bool isfound = false;
    l.open("camera.dat", ios::in | ios::binary );
    while (l.read((char*)&cam, sizeof(cam))){
        if (MN == cam.getModelNo()) {
            cam.display();
            isfound = true;
        }
    }
    l.close();
    if (!isfound) {
        cout<<"Model no doesn't Exist in our File:";
    }
}

void input() {
    fstream f;
    Camera sony;
    char ch;
    f.open("camera.dat", ios::out | ios::binary);
    do {
        sony.enter();
        f.write((char*)&sony, sizeof(sony));
        cout<<"Want more Executions?(y/n)";
        cin>>ch;
    }while (ch == 'y' || ch == 'Y');
    f.close();
    cout<<"\nData Stored Successfully!\n";
}

int main() {
    cout << "What's Up Boii Lets Do Coding" << endl;

    input();
    search();

    return 0;
}
