#include<iostream>

using namespace std;

int code1(){
//If Else Structure    EVEN-ODD
int a;
cout<<"Enter an Integer :";
cin >> a;

if(a%2 == 0){
cout<<"The number is even"<<endl;
}
else{
cout<<"The number is odd"<<endl;
}
return 0;
}

int code2(){
//If-Else Structure    GREATER-THAN
int a, b;
cout<<"Enter Both Values to Check[A & B Respectively]:";
cin >> a >> b;
if(a>b){
    cout << "A is Greater than B";
}
else {
cout << "B is Greater than A";
}
return 0;
}

int code3(){
//Calculation of no. of Days
    int days, day, week, month, year;
    cout<<"Enter Num. of Days: ";
    cin >> days;

    day = days%30;
    week = days/7;
    month = days/30;
    year = days/365;

    cout << "Remaining Day(s) After a Month : " << day << endl;
    cout << "Week(s) in Your Data is : " << week << endl;
    cout << "Month(s) in Your Data is : " << month << endl;
    cout << "Year(s) in Your Data is : " << year << endl;
    return 0;
}

int code4(){
    int a;
    cout << "Enter a Num: ";
    cin >> a;
    if(a%7 == 0) {
        cout<<"The Number is Divisible by 7."<<endl;
    }
    else {
        cout<<"The Number is NOT-Divisible by 7."<<endl;
    }
return 0;
}
int code5(){
    int a;
    cout << "Enter a Num: ";
    cin >> a;
    if(a%7 == 0 && a%11 == 0) {
        cout<<"The Number is Divisible by 7&11."<<endl;
    }
    else {
        cout<<"The Number is NOT-Divisible by 7&11."<<endl;
    }
return 0;
}
int code6(){
int a, operation;
    cout<<"Enter a Num: ";
    cin >> a;
    operation = a%10;
    cout << "Last Digit is : "<<operation<<endl;
return 0;
}
int code7(){
    int a, operation;
    cout<<"Enter a Num: ";
    cin >> a;
    operation = a/10;
    cout << "First Digit is : "<<operation<<endl;
    return 0;
}
int code8(){
    int a, first, last;
    cout<<"Enter a Num: ";
    cin >> a;
    first = a/10;
    last = a%10;
    if (first == last) {
        cout<<"The Number is Symmetric[Palindrum]."<<endl;
    }
    else {
        cout << "The Number is NOT Symmetric[Palindrum]."<<endl;
    }
    return 0;
}

int main(){
    int a;
    cout<<"---------------------REFER NOTEBOOK[code 1-8]----------------------"<<endl;
    cout<<"Which Number of Program you want to Execute from ''DAY3!!'' : ";
    cin >> a;

    if(a == 1) {
        code1();
    }
    else if(a == 2) {
        code2();
    }
    else if(a == 3) {
        code3();
    }
    else if(a == 4) {
        code4();
    }
    else if(a == 5) {
        code5();
    }
    else if(a == 6) {
        code6();
    }
    else if(a == 7) {
        code7();
    }
    else if(a == 8) {
        code8();
    }
    else {
        cout<<"Invalid Input"<<endl;
    }
return 0;
}