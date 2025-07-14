// Created by Admin on 13-07-2025.
#include <iostream>
#include <conio.h>
using namespace std;

string enterPassword() {
    string password;
    char ch;
    cout << "Enter Password : ";
    while (true) {
        ch = getch();
        if (ch == 13) { 
            break;
        } else if (ch == 8) { 
            if (!password.empty()) {
                password.pop_back();
                cout << "\b \b";
            }
        } else {
            password += ch;
            cout << "*";
        }
    }
    cout << endl;
    return password;
}

class Admin {
    string userName = "Lucky";
    string passWord = "l&b@1234";
public:
    string getUserName() {
        return userName;
    }

    bool authenticate(string inputPassword) {
        return inputPassword == passWord;
    }

    void updateInfo() {
        cout << "Enter username : ";
        getline(cin, userName);

        passWord = enterPassword();

        cout << "\nNew credentials updated successfully!\n";
    }
};

void SuperAdmin(Admin &admin) {
    string name, password;

    cout << "Enter UserName : ";
    getline(cin, name);

    if (name == admin.getUserName()) {
        password = enterPassword();
        if (admin.authenticate(password)) {
            cout << "\nAuthenticated!!\n";
        } else {
            cout << "\nWrong Password!\n";
        }
    } else {
        cout << "\nYou Entered Wrong UserName!\n";
    }
}

void addNewUser(Admin &admin) {
    admin.updateInfo();
}

int main() {
    Admin admin;

    while (true) {
        int choice;
        cout << "[1] Login as Existing User\n";
        cout << "[2] Add/Update User Info\n";
        cout << "[0] Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                SuperAdmin(admin);
                break;
            case 2:
                addNewUser(admin);
                break;
            case 0:
                cout << "Do Code Again!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
