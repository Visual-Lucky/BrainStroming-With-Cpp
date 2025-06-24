#include<iostream>
using namespace std;
int main() {
    int N = 10;
    int marks[N];
    int roll_no[N];
    cout << "Please Enter Details: "<<endl;
    for (int i = 0; i < N; i++) {
        cout <<"Enter Marks of "<<i+1<<" Student:";
        cin >> marks[i];
        cout <<"Enter Roll-No of "<<i+1<<" Student:";
        cin >> roll_no[i];
        cout << endl;
    }
    cout << "Student's Roll No. and Marks are:"<<endl;
    for (int i = 0; i < N; i++) {
        cout << roll_no[i] << "\t" << marks[i] << endl;
    }
    cout << endl;

    cout << "";


    return 0;
}