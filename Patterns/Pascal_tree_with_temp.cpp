#include<iostream>
using namespace std;
/*
 *   1
 *  1 1
 * 1 2 1
 */
int main() {
    int size = 5;
    for (int i=1; i<=size; i++) {
        //for spaces
        for (int j=size-i; j>0; j--) {
            cout<<" ";
        }
        int temp = 1;
        for (int j=0; j<=i; j++) {
            cout<<temp<<" ";
            temp = temp * (i-j)/(j+1);
        }
        cout<<"\n";
    }
}