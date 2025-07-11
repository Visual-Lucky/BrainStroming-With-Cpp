#include <iostream>
using namespace std;

int main() {
    cout << "What's Up Boii" << endl;
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
    return 0;
}
