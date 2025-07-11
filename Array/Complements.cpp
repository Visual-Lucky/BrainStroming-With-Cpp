#include<iostream>
using namespace std;

int main() {
    int binary[10], len = -1, size;
    cout<<"How Many Binary Nums You Want to Store:";
    cin>>size;
    cout<<"Enter Binary Num (one by one) :";
    for (int i=0; i<size; i++) {
        cin>>binary[i];
        len++;
        binary[i] = 1 - binary[i];
    }
    int carry = 1;
    for (int i=len; i>=0; i--) {
        if ((carry == 1) && (binary[i] == 0)) {
            binary[i] = 1;
            carry=0;
        }else if ((carry == 1)&&(binary[i] == 1)) {
            binary[i] = 0;
            carry = 1;
        }
    }
    cout<<"2's Complement is : ";
    for (int i=len; i>=0; i--) {
        cout<<binary[i]<<" ";
    }

}