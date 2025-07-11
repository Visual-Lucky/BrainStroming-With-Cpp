// Created by Admin on 12-07-2025.
#include <iostream>
using namespace std;

int main() {
    cout << "What's Up Boii We are Doing Swapping in Array:" << endl;
    int size;
    cout<<"Enter Size of Array : ";
    cin>>size;
    int val[size];
    for (int i=0; i<size; i++) {
        cin>>val[i];
    }
    cout<<"\n";
    int pos1, pos2;
    cout<<"Enter Position to Swap:";
    cin>>pos1>>pos2;
    if (pos1 != pos2)
    {
        if (val[pos1-1] != val[pos2-1])
        {
            int temp = val[pos1-1];
            val[pos1-1] = val[pos2-1];
            val[pos2-1] = temp;
            cout<<"After Swapping:\n";
            for (int i=0; i<size; i++)
            {
                cout<<val[i]<<" ";
            }
        }
        else
        {
            cout<<"Both Values are same!";
        }
    }
    else
    {
        cout<<"You've Entered Same Position";
    }
    return 0;
}
