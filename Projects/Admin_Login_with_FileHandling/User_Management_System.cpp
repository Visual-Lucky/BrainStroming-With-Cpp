#include <windows.h> // Sleep(3000);  // Sleep for 3000 ms = 3 seconds
#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int UserCount = 1;

class User{
    char userID[8];
    char userName[20];
    char password[12];
    char contactNo[12];

public:
//Constructor
    User(){
        strcpy(userID, "UMS000");
        strcpy(userName, "Admin");
        strcpy(password, "Admin@1234");
        strcpy(contactNo, "0000000000");
        //addAdmin();
    }

    void addAdmin(){
        fstream f;
        f.open("user_data.dat", ios::app | ios::binary);
        f.write((char*)this, sizeof(*this));
        f.close();
        // cout<<"\naddAdmin CALLED OUT";
    }

//Destructor
    ~User(){
        // cout<<"\nDestructor CALLED";
    }

// Functions that Returns the User Info
    string getUserID(){
        return string(userID);
    }
    string getUserName(){
        // cout<<"\ngetUserName CALLED";
        return string(userName);
    }
    string getContactNo(){
        return string(contactNo);
    }
    string getPassword(){
        // cout<<"\ngetUserPassword CALLED";
        return string(password);
    }

// Functions that Shows User     
    void showUser(){
        cout<<endl<<"ID : "<<userID<<", Name : "<<userName<<" & Contact No : "<<contactNo<<".\n";
    }
    void addUser(){
        cout<<"Enter UserName :";
        cin.getline(userName, 20);

        cout<<"Enter Contact No. :";
        cin.getline(contactNo, 12);

        cout<<"\nPassWord Should contains 10 Characters & Must be Strong\n";
        string passwordCopy = getSafePassword();
        strcpy(password, passwordCopy.c_str());

        string ID = "";

        if(UserCount <= 9 && UserCount >= 1){
            ID = "UMS00";
        }
        else if(UserCount <= 99 && UserCount >= 10){
            ID = "UMS0";
        }
        else{
            ID = "UMS";
        }

        string fullID = ID + to_string(UserCount);  // "UMS1"
        strcpy(userID, fullID.c_str());
        UserCount++;

    }
    void addUserToFile(){
        char loopBreaker;
        fstream fileOperator;
        //have to add temp binary file
        fileOperator.open("user_data.dat", ios::app | ios::binary );
        do{
            this->addUser();
            fileOperator.write((char*)this, sizeof(*this));
            cout<<"\npress \033[33mENTER\033[0m to stop Adding USER";
            loopBreaker = getch();
        }while(loopBreaker != 13);

        fileOperator.close();

        //cout<<"\nData Stored \033[32mSuccessfully\033[0m .";
        // cout<<"\naddUserToFile CALLED OUT";
    }

    string getSafePassword(){
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
        // cout<<"\ngetSafePassword CALLED OUT";
    }

    bool authenticateUser(){
        fstream fileOperator;
        fileOperator.open("user_data.dat", ios::in | ios::binary);

        bool userFound = false;
        bool passAuth = false;

        string userName;
        cout<<"\nEnter UserName :";
        getline(cin, userName);


        while(fileOperator.read((char*)this, sizeof(*this)))
        {
            if(userName == this->getUserName()){
                userFound = true;
                break;
            }
        }

        fileOperator.close();

        if(userFound){
            string password;
            password = this->getSafePassword();

            fileOperator.open("user_data.dat", ios::in | ios::binary);
    
            while(fileOperator.read((char*)this, sizeof(*this)))
                {
                if(password == this->getPassword()){
                    // cout<<"\nPASSWORD MATCHED FROM FILE\n";
                     passAuth = true;
                     break;
                    }
                }
            
                 fileOperator.close();

                if(passAuth){

                cout << "\n \033[1;32mAuthenticated\033[0m" << endl;
                return true;
                }

                else{
                    cout<<"\nIncorrect Password";
                    return false;
                }
        }
        else{
            cout << "\n \033[1;31mUser Not Found\033[0m" << endl;
            return false;
        }
        
    }
    
    void showUsers(){
        cout<<endl<<"UserName : "<<userName<<".";
    }

    void showAllUsers(){
        fstream fileOperator;
        fileOperator.open("user_data.dat", ios::in | ios::binary);
        while(fileOperator.read((char*)this, sizeof(*this)))
        {
            showUsers();
        }
        fileOperator.close();
    }

void deleteUserByUserID(string ID){
    fstream f_read, f_write;
    f_read.open("user_data.dat", ios::in | ios::binary );
    f_write.open("temp_data.dat", ios::out | ios::binary );
    while(f_read.read((char*)this, sizeof(*this)))
    {
        if(ID != getUserID()){
            f_write.write((char*)this, sizeof(*this));
        }
    }

    f_write.close();
    f_read.close();

    remove("user_data.dat");        
    rename("temp_data.dat", "user_data.dat");

}

void deleteUser(){
    string username, mobileno, password;
    cout<<"\nEnter User Details:\n";
    cout<<"USERNAME :";
    getline(cin,username);
    cout<<"CONTACT NO :";
    getline(cin,mobileno);

        bool isFound = false;
     fstream fileOperator;
        fileOperator.open("user_data.dat", ios::in | ios::binary);
        while(fileOperator.read((char*)this, sizeof(*this)))
        {
            if(username == getUserName() && mobileno == getContactNo() ){
                isFound = true;
            }
        }
        fileOperator.close();

        if(isFound){    

                cout<<"\nARE YOU SURE YOU WANT TO DELETE\n";
                cout<<"Enter Password to DELETE";
                password = getSafePassword();
                if(password == getPassword()){
                    string ID = getUserID();
                    deleteUserByUserID(ID);
                    cout<<"\nUser DELETED\n";
                }else{
                    cout<<"\nWrong PassWord\n";
                }
        }
        else{
            cout<<"No User Matches";
        }

}


void updateUser(){
    string ID, password;
    cout<<"Enter USER ID to Update :";
    getline(cin, ID);

    bool isIDValid = false;

    fstream f;
    f.open("user_data.dat", ios::in | ios::binary);
    
    while(f.read((char*)this, sizeof(*this))){
        if(ID == getUserID()){
            isIDValid = true;
        }   
    }
    f.close();

    if(isIDValid){
        int choice;
        cout<<"Enter What Thing you Want to update : \n";
        cout<<"1. USERNAME\n2. PASSWORD\n3. CONTACT NO\n4. NOTHING";
        cin>>choice;
        cin.ignore();

        switch (choice){
            case 1 :    updateUserName(ID);
                break;
            case 2 :    updatePassword(ID);
                break;
            case 3 :    updateContactNo(ID);
                break;
            case 4 : cout<<"\nTq Come Again\n";
                break;
            default : cout<<"\nPlease Choose Between Them\n";                            
        }

    }else{
        cout<<"No User Found";
    }

}

string enterPassword(){
    string passsword = getSafePassword();
        return passsword;
}

void updatePassword(string ID){
    string password;
    cout<<"\nEnter Old Pasword : ";
    password = getSafePassword();

    bool isPassValid = false;
    bool passtaken = false;
    fstream f;

    f.open("user_data.dat", ios::in | ios::binary);
    while(f.read((char*)this, sizeof(*this))){
        if(password == getPassword()){
            isPassValid = true;
        }   
    }
    f.close();


    if(isPassValid){
        cout<<"Enter New PassWord :";
        getline(cin, password);
        passtaken = true;
    }else{
        cout<<"Please Provide Valid Password!";
    }


    if(passtaken){
        fstream f_temp;
        f.open("user_data.dat", ios::in | ios::binary);
        f_temp.open("Temp_data.dat", ios::out | ios::binary);

        while(f.read((char*)this, sizeof(*this))){
            if(ID == getUserID()){
                
            }else{
                f_temp.write((char*)this, sizeof(*this));
            }
        }


        f_temp.close();
        f.close();

        remove("user_data.dat");        
        rename("temp_data.dat", "user_data.dat");
    }
}

void updateUserName(string ID){}

void updateContactNo(string ID){}


void mainMenu() {
    int choice;
    do {
        system("cls");
        cout << "\n\033[1;36m=========== USER MANAGEMENT SYSTEM ============\033[0m\n";
        cout << "1. Add New User\n";
        cout << "2. List All Users\n";
        cout << "3. Update Existing User {in making}\n";
        cout << "4. Delete User\n";
        cout << "5. View Activity History  {in processing} \n";
        cout << "6. Exit\n";
        cout << "--------------------------------------------------\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                addUserToFile();
                cout << "\n\033[1;32mUser added successfully!\033[0m";
                cout << "\n\033[33mRedirecting to MAIN MENU in 5 seconds...\033[0m\n";
                Sleep(5000);
                break;

            case 2:
                showAllUsers();
                cout << "\n[List Users Shown]";
                cout << "\n\033[33mRedirecting to MAIN MENU in 5 seconds...\033[0m\n";
                Sleep(5000);
                break;

            case 3:
                // updateUser();
                cout << "\n[Work in Progress]";
                cout << "\n\033[33mRedirecting in 5 seconds...\033[0m\n";
                Sleep(5000);
                break;

            case 4:
                deleteUser();
                cout << "\n[User Deleted]";
                cout << "\n\033[33mRedirecting in 5 seconds...\033[0m\n";
                Sleep(5000);
                break;

            case 5:
                // showActivityHistory();
                cout << "\n[Working in Progress]";
                cout << "\n\033[33mRedirecting in 5 seconds...\033[0m\n";
                Sleep(5000);
                break;

            case 6:
                cout << "\n\033[31mExiting... Goodbye!\033[0m\n";
                break;

            default:
                cout << "\n\033[31mInvalid Choice. Try again!\033[0m\n";
                Sleep(2000);
        }

    } while (choice != 6);
}


}; 

int main(){
    User user;

    bool isValid = user.authenticateUser();
    
    if(isValid){
        user.mainMenu();
    }else{
        cout<<"\nNEED ADMIN PASSKEYS FOR AUTHENTICATION :>";
    }


    //user.addUserToFile();
    //user.updateUser();
    //user.deleteUser();
    //bool isValid = user.authenticateUser();
    //if(isValid){
    //     cout<<"\nIF";
    //}else{
    //     cout<<"\nELSE";
    //}

    return 0;
}