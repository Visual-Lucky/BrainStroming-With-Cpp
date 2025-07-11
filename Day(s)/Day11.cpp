#include<iostream>
using namespace std;
int num = 7;

void fun(int num);
void funn();

int main() {
    int num = 8;
    cout<<num<<"\n";
    cout<<::num<<"\n";
    fun(num);
    cout<<num<<"\n";
    cout<<::num<<"\n";
    return 0;
}
void fun(int num) {
    num += 5;
    funn();
    cout<<num<<"\n";
}
void funn() {
    cout<<num<<"\n";
    num += 9;
}