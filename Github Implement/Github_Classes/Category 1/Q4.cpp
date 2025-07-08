#include<iostream>
using namespace std;

class Sample {
public:
    void greet() { cout << "Hi\n"; }
};

int main() {
    Sample s1, s2;
    s1.greet();
    s2.greet();

    return 0;
}