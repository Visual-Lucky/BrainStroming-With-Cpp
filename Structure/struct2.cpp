#include <iostream>
using namespace std;

struct employee {
  int employeeId;
  string name;
  int basicSalary;
    struct perks {
      int DA;
      int TA;
      int HRA;
    } perk;
  int totalSalary;
};

int main() {
  employee emp;
  cout<<"Heyy Employee Drop Your Details:"<<endl;
  cout<<"Your Name : ";
  getline(cin, emp.name);
  // cin.ignore();
  cout<<"Your ID : ";
  cin>>emp.employeeId;
  cout<<"Your Basic Salary : ";
  cin>>emp.basicSalary;

  emp.perk.DA = emp.basicSalary * 0.1;
  emp.perk.TA = emp.basicSalary * 0.2;
  emp.perk.HRA = emp.basicSalary * 0.3;
  emp.totalSalary = emp.basicSalary + emp.perk.DA + emp.perk.TA + emp.perk.HRA;

  cout<<"Your Name : "<<emp.name<<" and ID : "<<emp.employeeId<<".\n";
  cout<<"Your DA\t:\t"<<emp.perk.DA<<endl;
  cout<<"Your TA\t:\t"<<emp.perk.TA<<endl;
  cout<<"Your HRA\t:\t"<<emp.perk.HRA<<endl;
  cout<<"Your TotalSalary\t:\t"<<emp.totalSalary<<endl;
  return 0;
}