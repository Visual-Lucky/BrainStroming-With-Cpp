//Create a class Rectangle with data members:
//length, breadth. Add function to calculate area.
#include<iostream>
using namespace std;

class Rectangle {
    float length;
    float bredth;
public:
    void area() {
        cout<<"Area of Rectangle is "<<(length*bredth);
    }
    int areaStore() {
        return length*bredth;
    }

    void input() {
        cout<<"Enter Length :";
        cin>>length;
        cout<<"Enter Bredth :";
        cin>>bredth;
    }
};

int main() {
    Rectangle rect;

    rect.input();

    rect.area();

    float area = rect.areaStore();
    cout<<"\nArea = "<<area;

    return 0;
}