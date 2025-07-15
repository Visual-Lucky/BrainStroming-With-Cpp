// Created by Admin on 13-07-2025.
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

string enterPassword();

class Admin{
    string userName = "Lucky";
    string passWord = "l&b@1234";
public:
    string getPassword(){
        return passWord;
    }
    string getUserName(){
        return userName;
    }
    void updateInfo(){
        cout<<"Enter username :> ";
        getline(cin,userName);
        cout<<"Enter Password :> ";
        passWord = enterPassword();
    }
};

string enterPassword(){
    string password;
    char ch;
    cout<<"Enter Password : ";
    while(true){
        ch = getch();
        if(ch == 13){
            break;
        }
        else if(ch == 8){
            if (!password.empty()) {
                password.pop_back();
                cout<<"\b \b";
            }
        }
        else{
        password += ch;
        cout<<"*";
        }
    }
    return password;
}

void SuperAdmin(){
    Admin lucky;

    string name;
    string password;

    cout<<"Enter UserName : ";
    getline(cin, name);

    if(name == lucky.getUserName()){

    password = enterPassword();

    if(password == lucky.getPassword()){
        cout<<endl<<"Autenticated!!"<<endl;
    }
    else{
        cout<<endl<<"Wrong Password!"<<endl;
    }

}
else{
    cout<<endl<<"You Entered Wrong UserName!\n";
}

}

void addNewUser(){
    Admin user;
    user.updateInfo();
    cout<<"\nNew User Added Successfully!\n";
}

int main() {
    
    int choice;
    cout<<"[1] for Old User:\n[2] for add new User:\n";
    cout<<"Enter your Choice : ";
    cin>>choice;
    cin.ignore();
    while (true){
        
    switch (choice){

        case 1: SuperAdmin();
            break;
            
        case 2: addNewUser();
            break;

        default: cout<<"Please Choose Between Them :";
            
        }
    }
    return 0;
}
