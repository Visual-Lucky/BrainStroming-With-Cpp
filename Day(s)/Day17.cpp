#include <iostream>
using namespace std;

void Q1() {
    int sum = 0, num;
    cout<<"Enter Array SIze :";
    cin>>num;
    int arr[num];
    for (int i=0; i<num; i++) {
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"Sum of Array Elements = "<<sum;
}

void Q2() {
    cout<<"\n\nWe are Performing Linear Search Here:\n";
    int n;
    cout<<"Enter Array's Size :";
    cin>>n;
    int arr[n];
    cout<<"Drop Array Elements:";
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int find;
    cout<<endl<<"\nOK so give me the num to find:";
    cin>>find;
    bool flag = false;
    for (int i=0; i<n; i++) {
        if (find == arr[i]) {
            cout<<"Your Number find at "<<i+1<<" Position.";
            flag = true;
        }
    }
    if (!flag) {
        cout<<"Your Number not found in this Array:";
    }

}

void Q3() {
    int size;
cout<<"\nIn this We are Finding sum of pdosis of an Array's Elements\n";
cout<<"\nEnter Arrays Size:";
    cin>>size;
    int arr[size], findmark, index = 0;
    cout<<"Drop "<<size<<" Array Elements:\n";
    for (int i=0; i<size; i++) {
        cin>>arr[i];
    }
    cout<<"Enter a Element to find its Corresponding Sum:";
    cin>>findmark;
    for (int i=0; i<size; i++) {
        if (findmark == arr[i]) {
            index = i-1;
            break;
        }
    }

    if (index == 0) {
        cout<<"Sum is = "<<arr[1];
    }else if (index == 9) {
        cout<<"Sum is ="<<arr[8];
    }else {
        int sum = arr[index-1] + arr[index+1];
        cout<<"Sum = "<<sum;
    }
}

int main() {
    cout << "What's Up Boii" << endl;
    Q1();
    cout<<endl;
    Q2();
    cout<<endl;
    Q3();
    return 0;
}
