//Create class Employee with data members:
//name, salary. Input 5 records,
//display those with salary > 50K.

#include <iostream>
using namespace std;

class Employee {
    string name;
    int salary;
public:
    string getName(){
        return name;
    } 
    int getSalary(){
        return salary;
    }
    void input() {
        cout<<"Enter Name : ";
        getline(cin, name);
        cout<<"Enter Salary : ";
        cin>>salary;
        cin.ignore();
    }
    void output() {
        cout<<endl<<"Name : "<<name;
        cout<<"Salary : "<<salary<<endl;
    }
};

int main() {
    int size = 3;
    Employee emp[size];
    string arr[size];
    //for input
    for (int i=0; i<size; i++) {
        emp[i].input();
        if (emp[i].getSalary() > 50000) {
            arr[i] = emp[i].getName();
        }
    }

    cout<<"\nEmployees that get paid by more than 50k:\nEmployee :> ";
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }

    //for output
    for (int i=0; i<size; i++) {
        emp[i].output();
    }

    return 0;
}