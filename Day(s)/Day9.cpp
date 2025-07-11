//Loop concepts
#include<iostream>
using namespace std;

void Q1() {
    for (int i=1; i<=10; i++) {
        cout<<i<<" ";
    }
}
void Q2() {
    float num;
    cout<<"Enter Num for Table Print:"; cin>>num;
    for (int i=1; i<=10; i++) {
        cout<<i*num<<" ";
    }
}
void Q3() {
    int num;
    cout<<"Enter Num for Printing Even & Odd:"; cin>>num;
    for (int i=1; i<=num; i++) {
        if (i%2 == 0) {
            cout<<"even"<<endl;
        }else {
            cout<<"odd"<<endl;
        }
    }
}
void Q4() {
    int num, even = 0, odd = 0;
    cout<<"Enter num for calculating how many even and odd between your num:";
    cin>>num;
    for (int i=0; i<=num; i++) {
        if (i%2 == 0){
            even++;
        }else {
            odd++;
        }
    }
    cout<<"Even = "<<even<<" & odd = "<<odd<<"\n";

}
// void Q5() {}
// void Q6() {}
// void Q7() {}

int main() {
    cout<<endl;
    Q1();
    cout<<endl;
    Q2();
    cout<<endl;
    Q3();
    cout<<endl;
    Q4();
    cout<<endl;
    // Q5();
    return 0;
}