//Create class Complex with data members:
//real, imag. Add and display complex numbers.
#include<iostream>
using namespace std;

class Complex {
    int real = 0;
    int img = 0;
public:
    void add(Complex c1, Complex c2) {
        real = c1.real + c2.real;
        img = c1.img + c2.img;
    }

    void output() {
        cout<<"Real Num:"<<real<<endl;
        cout<<"Imaginary Num:"<<img<<endl;
    }

    void input() {
        cout<<"Enter Real Number:";
        cin>>real;
        cout<<"Enter Imaginary Number:";
        cin>>img;
    }
};

int main() {
    Complex cmp1, cmp2, cmp3;

    cmp1.input();
    cmp2.input();

    cmp3.add(cmp1, cmp2);

    cmp3.output();

    return 0;
}