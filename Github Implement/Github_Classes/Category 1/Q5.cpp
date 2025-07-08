#include<iostream>
using namespace std;

class A {
public:
    int x;
};

int main() {
    A obj;
    obj.x = 15;
    A obj2 = obj;
    obj2.x = 25;
    cout << obj.x << "\n";
    cout << obj2.x;

    return 0;
}