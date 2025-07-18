#include <windows.h>
#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

class HR_Admin{

    //H.R.{Admin} and its Details: 

    char adminID[10];// for HR -> HR & User ADMN1 , ADMN2.....
    char adminName[20];
    char adminPassword[12];
    char adminContactDetails[15];
    char adminAddress[50];

    //file : AdminDetails

    public:

    bool approveHoliday(){}

    bool approveSubmission(){}

    void addEmployee(){}

    void removeEmployee(){} //this should be in Employee class

    void assignProject(){}

    
};

class Employee{

    char empID[10];
    char empName[20];
    char empPerks[20];
    char empAddress[50];
    char empCategory[10];
    char empPassword[10];
    char empContactNo[15];
    char empBloodgroup[5];
    char empJoiningDate[10];
    char empRelivingDate[10];
    char empHolidayRemain[10];

    //char empRemarks[20];


    //file : EmployeeDetails

    void empHoliday(){}
};

class Project_and_Clients{};

class Brands_and_Sales{};

class Holiday_and_SlipsGenerator{
    //this should be merge in Employee
};

int main(){
    return 0;
}