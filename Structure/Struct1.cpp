#include<iostream>
using namespace std;

struct car {
    string companyName;
    string model;
    int price;
    int year;
    int mileage;
    int horsepower;
    string color;
    string engine_type;
    string transmission;
    string fuel_type;
} carSpecification ;

int main(){
    system("cls");
    cout<<"********[Enter Car Details]********"<<endl;
    cout<<"Drop Company Name:";
    getline(cin,carSpecification.companyName);
    cout<<"Drop Model:";
    getline(cin,carSpecification.model);
    cout<<"Drop Price:";
    cin>>carSpecification.price;
    cout<<"Drop Manufacture Year:";
    cin>>carSpecification.year;
    cout<<"Drop Mileage:";
    cin>>carSpecification.mileage;
    cout<<"Drop HorsePower:";
    cin>>carSpecification.horsepower;
    cout<<"Drop Color:";
    getline(cin,carSpecification.color);
    cout<<"Drop Engine Type:";
    getline(cin,carSpecification.engine_type);
    cout<<"Drop Transmission:";
    getline(cin,carSpecification.transmission);
    cout<<"Drop Fuel Type:";
    getline(cin,carSpecification.fuel_type);

cout<<"Car Specifications are:"<<endl;
    cout<<"Company\t: "<<carSpecification.companyName<<endl;
    cout<<"Model\t: "<<carSpecification.model<<endl;
    cout<<"Price\t: "<<carSpecification.price<<endl;
    cout<<"Year\t: "<<carSpecification.year<<endl;
    cout<<"Mileage\t: "<<carSpecification.mileage<<endl;
    cout<<"HorsePower\t: "<<carSpecification.horsepower<<endl;
    cout<<"Color\t: "<<carSpecification.color<<endl;
    cout<<"Engine Type\t: "<<carSpecification.engine_type<<endl;
    cout<<"Transmission\t: "<<carSpecification.transmission<<endl;
    cout<<"Fuel Type	: "<<carSpecification.fuel_type<<endl;
    cout<<endl;


return 0;
}