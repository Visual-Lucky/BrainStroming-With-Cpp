#include<iostream>
using namespace std;

class Demo {
    int a = 5;
public:
    void show() { cout << a; }
};

int main() {
    Demo d;
    d.show();

    return 0;
}