#include<iostream>
using namespace std;
void inputs(int arr[5]) {
    cout << "Drop 10 Elements in one by one order:";
    for (int i=0; i<5; i++) {
        //cin >> arr[i];
        arr[i] = i;
    }
}

int main() {
    int arr[5];
    inputs(arr);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}