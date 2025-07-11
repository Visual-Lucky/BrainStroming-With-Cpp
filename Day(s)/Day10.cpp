#include<iostream>
using namespace std;
void prime();
void sumNum();
int main() {
    int num;
    cout<<"Enter Which Program you want to run:\n";
    cout<<"[1]. for Prime.\n";
    cout<<"[2]. for sum of given numbers.\n";
    cout<<"Drop Choice:";
    cin>>num;

    switch (num) {
        case 1: prime();
            break;
        case 2: sumNum();
            break;
        default:cout<<"Please Choose Between Choices:";
            break;
    }

    return 0;
}

void prime() {
    int number;
    cout<<"Enter Num to check its prime or not:";
    cin>>number;
    bool notPrime = false;
    for (int i=2; i<number; i++) {
        if (number%i == 0) {
            notPrime = true;
            break;
        }
    }
    if (notPrime) {
        cout<<"Your num is Not Prime:";
    }else {
        cout<<"Prime Num:";
    }
}

void sumNum() {
    int num, sum=0;
    cout<<"Enter Num to Sum its digits"; cin>>num;
    for (;num>0;num/=10) {
        sum += num%10;
    }
    cout<<"Sum of digits is :"<<sum<<"\n";
}