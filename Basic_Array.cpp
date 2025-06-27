#include<iostream>
using namespace std;

void EntryofMarks(int marks[10]) {
    for (int i = 0; i < 10; i++) {
        marks[i] = i*1-2+7/2+458446;
    }

}

int main() {
    int marks[10];
    EntryofMarks(marks);

    for (int i = 0; i < 10; i++) {

    }

    // for (int i = 0; i < 10; i++) {
    //     cout << marks[i] << " ";
    // }

    return 0;
}

    // int N = 10;
    // int marks[N];
    // int roll_no[N];
    // cout << "Please Enter Details: "<<endl;
    // for (int i = 0; i < N; i++) {
    //     cout <<"Enter Marks of "<<i+1<<" Student:";
    //     cin >> marks[i];
    //     cout <<"Enter Roll-No of "<<i+1<<" Student:";
    //     cin >> roll_no[i];
    //     cout << endl;
    // }
    // cout << "Student's Roll No. and Marks are:"<<endl;
    // for (int i = 0; i < N; i++) {
    //     cout << roll_no[i] << "\t" << marks[i] << endl;
    // }
    // cout << endl;
    //
    // cout << "";
    //
