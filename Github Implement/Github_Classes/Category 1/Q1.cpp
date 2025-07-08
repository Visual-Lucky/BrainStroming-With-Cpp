#include<iostream>
using namespace std;

class Test {
public:
    int x = 10;
};

int main() {
    Test t;
    cout << t.x; // prints 10
    return 0;
}
