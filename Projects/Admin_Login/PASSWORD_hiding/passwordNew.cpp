// Created by Admin on 15-07-2025.
#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class User {
    string userName[20];
    string password[10];
public:
    string getUserName() {
        string str = string(userName);
        // transform(str.begin(), str.end(), str.begin(), ::toupper);
        return str;
    }
    string getPassword() {
        string str = string(password);
        // transform(str.begin(), str.end(), str.begin(), ::toupper);
        return str;
    }
    void showUserDetails() {
        cout<<" username : "<<userName<<" & Password : "<<password<<endl;
    }
    void addNewUser() {
        cout<<"username :";
        getline(cin,userName);
        cout<<"password :";
        getline(cin,password);
    }
};

int main() {
    fstream f;
    User user;
    // f.open("user_data.dat", ios::app | ios::binary);
    // cout<<"\nAdd User\n";
    // user.addNewUser();
    // f.write((char*)&user, sizeof(user));
    // cout<<"user added Successfully!";
    // f.close();

    cout<<"Your Data is\n";
    f.open("user_data.dat",ios::in | ios::binary);
    while (f.read((char*)&user, sizeof(user))) {
        user.showUserDetails();
    }

    // f.close();

    return 0;
}
