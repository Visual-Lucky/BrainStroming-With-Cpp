#include <cmath>
#include <iostream>
using namespace std;

int code1(){
    int value;
    cout<<"Enter a value between [1-7] : ";
    cin>>value;

    switch(value)
    {   case 1: cout << "MONDAY";
                break;
        case 2: cout << "TUESDAY";
                break;
        case 3: cout << "WEDNESDAY";
                break;
        case 4: cout << "THURSDAY";
                break;
        case 5: cout << "FRIDAY";
                break;
        case 6: cout << "SATURDAY";
                break;
        case 7: cout << "SUNDAY";
                break;
        default: cout << "Invalid Input \nPlease ";
                 code1();
    }
return 0;
}

int code2() {
        float marks;
        cout<<"Drop Your Marks : ";
        cin >> marks;

        int index = marks/10;
        int GPA = fmod(marks,10);

        switch (index)
        {
                case 10:
                case 9:
                case 8:  cout << "You Passed with Honours with GPA " << index<<"."<<GPA;
                        break;
                case 7:
                case 6:  cout<<"You Passed with First Division with GPA " << index<<"."<<GPA;
                        break;
                case 5 : cout << "You Passed with Second Division with GPA "<< index<<"."<<GPA;
                        break;
                case 4: cout <<"You Passed with Third Division with GPA "<<index<<"."<<GPA;
                        break;
                case 3: case 2: case 1:  case 0:
                        cout << "You are Failed!! in Exams";
                        break;
                default : cout << "Enter Valid Marks!!" << endl;
                        code2();
        }
        return 0;
}

// BANKING SYSTEM:
float operations(float amount) {
        int choice;
        cout<< "Remaining Balance is : " << amount << endl;
        cout << "Choose Your Operation: \n[1].BALANCE ENQUIRY\n[2].DEPOSIT\n[3].WITHDRAWL.\n[4].EXIT";
        cin>>choice;
        switch (choice) {
                case 1: return operations(amount);

                case 2: int deposit;
                        cout << "Enter Amount to deposit : ";
                        cin >> deposit;
                        amount = amount + deposit;
                        return operations(amount);

                case 3:int temp;
                        cout << "Enter Amount to withdraw : ";
                        cin >> temp;
                        if(temp > amount) {
                                cout << "Insufficient Balance: " << endl;
                                return operations(amount);
                        }else {
                                amount = amount - temp;
                                return operations(amount);
                        }
                case 4: cout << "Thanks Visit Again!";
                        break;

                default:  cout << "Please Choose a Valid Choice from Menu:"<<endl
                    ;
                        return operations(amount);
        }
        return 0;
}

int code3() {
        float amount = 3000;
        operations(amount);
        return 0;
}


int main(){
        int ans;
        cout<<"---------------------REFER NOTEBOOK[code 1-3]----------------------"<<endl;
        cout<<"Which Number of Program you want to Execute from ''DAY6!!'' : ";
        cin >> ans;
        if(ans == 1) {
                code1();
                return 0;
        }
        else if(ans == 2) {
                code2();
                return 0;
        }
        else if(ans == 3) {
                code3();
                return 0;
        }else {
                cout<<"INVALID INPUT!!"<<endl;
        }
return 0;
}