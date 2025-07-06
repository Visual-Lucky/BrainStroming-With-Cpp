#include<iostream>
using namespace std;
/*
     1               1
    121              2
   12321             3
  1234321            4
 123454321           5
*/

int main() {
    int size, temp = 0;
    cout<<"Enter Height of Palindrome Num Tower:";
    cin>>size;
    for(int i=1; i<=size; i++) {

        //Loop for Spaces
        for(int j=size-i; j>0; j--) {
            cout<<"  ";
        }

        //Loop for Palindrome Numbers
        for(int j=1; j<=(i*2)-1; j++) {
            if(j>i) {
                cout<<temp--<<" ";
            }else {
                cout<<j<<" ";
                temp = j-1;
            }
        }

        cout << endl;
    }

    return 0;
}