#include <windows.h>
#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

class HR_Admin{

     //file : adminDetails.dat
    //H.R.{Admin} and its Details: 

    char adminID[10];// for HR -> HR & User ADMN1 , ADMN2.....
    char adminName[20];
    char adminAddress[50];
    char adminPassword[12];
    char adminContactDetails[11];

    public:

    void adminMenu(){}

    bool approveHoliday(){}

    bool approveSubmission(){}

    void addEmployee(){}

    void removeEmployee(){} //this should be in Employee class

    void assignProject(){}

    void allSalarySlips(){}

    void approveSalaryRelease(){}

    bool Login(){}
};

class Employee{
         //file : employeeDetails.dat
        //file : holiDayRequests.dat
       //file : salarySlips.dat
      //file : projectList.dat

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

    void employeeMenu(){}

    void empHoliday(){}

    void viewProjects(){}

    void generateSlip(){}

    void SubmitWork(){}

    bool Login(){}
};

class Project_and_Clients{

     //file : clientList.dat
    //file : projectList.dat

    //void clientMenu(){} clients seek their project's progress maybe NOT

    void addProject(){}

    void assignToEmployee(){}

    void listOfProjects(){}
};

class Brands_and_Sales{

    void addBrand(){}

    void recordSale(){}

    void showBrandStatus(){}
};

int authenticatorMenu(){}

int main(){
    return 0;
}