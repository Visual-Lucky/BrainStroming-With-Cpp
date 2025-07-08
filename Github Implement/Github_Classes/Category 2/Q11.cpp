//Create class Employee with data members:
//name, salary. Input 5 records,
//display those with salary > 50K.

#include<iostream>
using namespace std;

class Employee {
public:
    string name;
    int salary = 0;
    void input() {
        cout<<"Enter Name : ";
        getline(cin, name);
        cout<<"Enter Salary : ";
        cin>>salary;
    }
    void output() const {
        cout<<"Name : "<<name;
        cout<<"Salary : "<<salary;
    }
};

int main() {

    Employee emp[5];
    string arr[5];
    //for input
    for (int i=0; i<5; i++) {
        emp[i].input();
        if (emp[i].salary > 50000) {
            arr[i] = emp[i].name;
        }
    }

    for (int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
    }

    //for output
    // for (int i=0; i<5; i++) {
    //     emp[i].output();
    // }

    return 0;
}