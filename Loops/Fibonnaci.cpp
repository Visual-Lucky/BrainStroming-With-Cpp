#include<iostream>
using namespace std;

int main() {
    //Fibonnaci Series
    int fib, start = 0, next = 1, sum = 0;
    cout<<"Enter Range:";
    cin>>fib;

    cout<<start<<"\n";
    for(int I=1; I<=fib; I++) {
        cout<<next<<"\n";
        sum = next + start;
        start = next;
        next = sum;
    }

    return 0;
}