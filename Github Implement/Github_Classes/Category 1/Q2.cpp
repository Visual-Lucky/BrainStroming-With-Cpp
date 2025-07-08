#include<iostream>
using namespace std;

class A {
public:
    A() { cout << "Constructor called"; }
};

int main() {

    A obj; // makes Constructor

    return 0;
}