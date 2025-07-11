#include <iostream>
using namespace std;

void Q1() {
    cout<<"\nQuestion 1\n";
    int n = 5;
    int arr[n];
    cout<<"Fill"<<n<<" Elements in Array:";
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<"Your Array is : ";
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}
void Q2() {
    cout<<"\nQuestion 2\n";
    int roll_no[10];
    cout<<"Enter Roll Num:";
    for (int & i : roll_no)
    {                       //new Variation of for loop for
        cin>>i;            //called Range Based! for lOOp
    }

    cout<<"Grade A\n";
    for (int i=0; i<10; i++) {
        if (i%2 == 0) {
            cout<<roll_no[i]<<" ";
        }
    }
    cout<<"\n";
    cout<<"Grade A\n";
    for (int i=0; i<10; i++) {
        if (i%2 != 0) {
            cout<<roll_no[i]<<" ";
        }
    }


}
void Q3() {
    cout<<"\nQuestion 3\n";
    int size = 10;
    int marks[size], rollNo[size];
    cout<<"Drop "<<size<<" Array Elements:\n";
    for (int i=0; i<size; i++) {
        cout<<"Enter Marks:  ";
        cin>>marks[i];
        cout<<"Enter RollNo:";
        cin>>rollNo[i];
    }
    cout<<endl<<"Your Data is : ";
    for (int i=0; i<size; i++) {
        cout<<"Roll No : "<<rollNo[i]<<" and Marks : "<<marks[i]<<".\n";
    }
}
void Q4() {
    cout<<"\nQuestion 4\n";
    int num = 10;
    int marks[num], rollNo[num];
    cout<<"Enter marks and roll no of "<<num<<"students\n";
    for (int i=0; i<num; i++) {
        cout<<"Enter Marks :";
        cin>>marks[i];
        cout<<"Enter Roll No:";
        cin>>rollNo[i];
    }
    cout<<"\nGrade A \nRoll Nums are:";
    for (int i=0; i<num; i++) {
        if (marks[i] >= 80 && marks[i] <= 100) {
            cout<<rollNo[i]<<" ";
        }
    }
    cout<<"\nGrade B \nRoll Nums are:";
    for (int i=0; i<num; i++) {
        if (marks[i] >= 60 && marks[i] < 80) {
            cout<<rollNo[i]<<" ";
        }
    }
    cout<<"\nGrade C \nRoll Nums are:";
    for (int i=0; i<num; i++) {
        if (marks[i] >= 40 && marks[i] < 60) {
            cout<<rollNo[i]<<" ";
        }
    }
    cout<<"\nFail:\nRoll Nums are:";
    for (int i=0; i<num; i++) {
        if (marks[i] < 40) {
            cout<<rollNo[i]<<" ";
        }
    }

}

int main() {
    Q1();
    cout<<endl;
    Q2();
    cout<<endl;
    Q3();
    cout<<endl;
    Q4();
    cout<<endl;

    return 0;
}
