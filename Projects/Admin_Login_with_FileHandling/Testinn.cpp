#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

// ------------------ Employee Class ------------------
class Employee {
    char empID[10];
    char name[30];
    float salary;

public:
    void create() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Name: ";
        cin.ignore();
        cin.getline(name, 30);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\n--- EMPLOYEE PROFILE ---\n";
        cout << "ID     : " << empID << endl;
        cout << "Name   : " << name << endl;
        cout << "Salary : " << salary << endl;
    }

    void save() {
        ofstream fout("employees.dat", ios::binary | ios::app);
        fout.write((char*)&*this, sizeof(Employee));
        fout.close();
    }

    bool matchID(const char checkID[]) {
        return strcmp(empID, checkID) == 0;
    }

    void copyTo(Employee& target) {
        strcpy(target.empID, empID);
        strcpy(target.name, name);
        target.salary = salary;
    }
};

// ------------------ HRManager Class ------------------
class HRManager {
public:
    bool login() {
        string user, pass;
        cout << "Enter HR Username: ";
        cin >> user;
        cout << "Enter HR Password: ";
        cin >> pass;

        return (user == "admin" && pass == "hr@123");
    }

    void addEmployee() {
        Employee e;
        e.create();
        e.save();
        cout << "\n[Employee Added]\n";
    }

    void listEmployees() {
        ifstream fin("employees.dat", ios::binary);
        Employee e;
        bool found = false;

        while (fin.read((char*)&e, sizeof(Employee))) {
            e.display();
            found = true;
        }
        fin.close();

        if (!found)
            cout << "\n[No Records Found]\n";
    }
};

// ------------------ Employee Login ------------------
bool employeeLogin(char empID[], Employee& loggedEmp) {
    cout << "Enter your Employee ID: ";
    cin >> empID;

    ifstream fin("employees.dat", ios::binary);
    Employee e;
    while (fin.read((char*)&e, sizeof(Employee))) {
        if (e.matchID(empID)) {
            e.copyTo(loggedEmp);
            fin.close();
            return true;
        }
    }
    fin.close();
    return false;
}

// ------------------ MAIN ------------------
int main() {
    HRManager hr;
    Employee emp;
    char empID[10];
    int choice;

    do {
        cout << "\n--- HUMAN RESOURCE MANAGER ---\n";
        cout << "1. HR Login\n";
        cout << "2. Employee Login\n";
        cout << "3. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            if (hr.login()) {
                cout << "\n[HR Logged In]\n";
                int hChoice;
                do {
                    cout << "\n--- HR DASHBOARD ---\n";
                    cout << "1. Add Employee\n";
                    cout << "2. List Employees\n";
                    cout << "3. Logout\n";
                    cout << "Choice: ";
                    cin >> hChoice;

                    if (hChoice == 1)
                        hr.addEmployee();
                    else if (hChoice == 2)
                        hr.listEmployees();

                } while (hChoice != 3);
            } else {
                cout << "\n[Invalid HR Credentials]\n";
            }

        } else if (choice == 2) {
            if (employeeLogin(empID, emp)) {
                cout << "\n[Welcome " << empID << "]\n";
                int eChoice;
                do {
                    cout << "\n--- EMPLOYEE DASHBOARD ---\n";
                    cout << "1. View Profile\n";
                    cout << "2. Logout\n";
                    cout << "Choice: ";
                    cin >> eChoice;

                    if (eChoice == 1)
                        emp.display();

                } while (eChoice != 2);
            } else {
                cout << "\n[Employee ID Not Found]\n";
            }
        }

    } while (choice != 3);

    return 0;
}


// #include <windows.h> // Sleep(3000);  // Sleep for 3000 ms = 3 seconds
// #include <iostream>
// #include <fstream>
// #include <conio.h>

// using namespace std;

// int UserCount = 45;

// class User{
//     char userID[7];
//     char userName[20];
//     char password[11];
//     char contactNo[11];
// public:
// //Constructor
//     User(){
//         strcpy(userID, "ABC000");
//         strcpy(userName, "Admin");
//         strcpy(password, "Admin@1234");
//         strcpy(contactNo, "0000000000");
//     }

//     void showUser(){
//         cout<<endl<<"ID : "<<userID<<", Name : "<<userName<<" & Contact No : "<<contactNo<<".\n";
//     }
//     void addUser(){
//         cout<<"Enter UserName :";
//         cin.getline(userName, 20);

//         cout<<"Enter Contact No. :";
//         cin.getline(contactNo, 12);

//         cout<<"\nPassWord Should contains 10 Characters & Must be Strong\n";
//         string passwordCopy = getSafePassword();
//         strcpy(password, passwordCopy.c_str());

//         string ID = "";

//         if(UserCount <= 9 && UserCount >= 1){
//             ID = "UMS00";
//         }
//         else if(UserCount <= 99 && UserCount >= 10){
//             ID = "UMS0";
//         }
//         else{
//             ID = "UMS";
//         }

//         string fullID = ID + to_string(UserCount);  // "UMS1"
//         strcpy(userID, fullID.c_str());
//         UserCount++;

//     }

//     string getSafePassword(){
//         string password;
//         char ch;
//         cout<<"Enter Password : ";
//         while(true){
//             ch = getch();
//             if(ch == 13){
//                 break;
//             }
//             else if(ch == 8){
//                 if (!password.empty()) {
//                     password.pop_back();
//                     cout<<"\b \b";
//                 }
//             }
//             else{
//             password += ch;
//             cout<<"*";
//             }
//         }
//         return password;
//         // cout<<"\ngetSafePassword CALLED OUT";
//     }

//     void IDTray(){
//         strcpy(userID, "UMS000");
//     }

//     void IDGenerator(){
//         fstream f;

//         User temporaryUser;

//         f.open("ID.dat", ios::app | ios::binary );
        
//         temporaryUser.IDTray();

//         f.write((char*)&temporaryUser, sizeof(temporaryUser));
        
//         f.close();
//     }

// };

// int main(){

//     User meHuUser;

//     meHuUser.addUser();

//     meHuUser.showUser();

//     return 0;
// }