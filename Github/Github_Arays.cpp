#include<iostream>
#include<windows.h>
using namespace std;

void space();
void clearscreen();

void Category1() {
    int prgm;
    cout<<"Drop Program No.[1-5]:"<<endl;
    cin>>prgm;
    switch (prgm) {

        case 1: {
            //Program 1
            int arr1[] = {10, 20, 30, 40};
            for(int i = 0; i < 4; i++) {
                cout << arr1[i] << " ";
            }
            space();
            clearscreen();
        }break;
            
        case 2: {
            //Program 2
            int arr2[] = {1, 2, 3, 4, 5};
            for(int i = 4; i >= 0; i--) {
                cout << arr2[i] << " ";
            }
            space();
            clearscreen();
        }break;
        
        case 3: {
            //Program 3
            int arr3[] = {5, 10, 15};
            for(int i = 0; i < 3; i++) {
                arr3[i] += 5;
                cout << arr3[i] << " ";
            }
            space();
            clearscreen();
        }break;

        case 4: {
            //Program 4
            int arr4[5] = {10};
            for(int i = 0; i < 5; i++) cout << arr4[i] << " ";
            cout<<endl<<"IF we initialize a single Element of an Arrray then all reminaning Uninitialized becomes 0 !!";
            space();
            clearscreen();
        }break;

        case 5: {
            //Program 5
            int arr5[] = {2, 4, 6, 8};
            int sum = 0;
            for(int i = 0; i < 4; i++) {
                if(arr5[i] % 4 == 0){
                    sum += arr5[i];
                }
                else {
                    sum -= 4;
                }
            }
            cout << sum;
            space();
            clearscreen();
        }break;


        default: {
            cout << "Please Enter a Valid Choice!!";
            space();
            clearscreen();
            return Category1();
        }
    }
}

void Category2() {
    int prgm;
    cout<<"Drop Program No.[6-15]:"<<endl;
    cin>>prgm;
    switch (prgm) {
        case 6: {
//Take N integers from user and store in an array,
//then print the array in reverse.
            int how;
            cout<<"How many integers you want to Store : ";
            cin>>how;
            int arr6[how];
            for(int i = 0; i < how; i++) {
                cout<<"Enter the "<<i+1<<"th integer : ";
                cin>>arr6[i];
            }
            cout<<"Your Array is :\n";
            for(int i = how-1; i >= 0; i--) {
                cout<<arr6[i]<<" ";
            }
            space();
            // cin.ignore();
            clearscreen();
        }break;

        case 7: {
//Find the maximum and minimum element in an array.
            int size, min = 0, max = 0;
            cout<<"Size of the Array : ";
            cin>>size;
            int arr7[size];
            for (int i=0; i<size; i++) {
                cin>>arr7[i];
                if (i==0) {
                    min = max = arr7[i];
                }else {
                    if (arr7[i] > max) {
                        max = arr7[i];
                    }else if (arr7[i] < min){
                        min = arr7[i];
                    }
                }
            }
            if (size == 1) {
                cout<<"Max and min is "<<min;
            }else {
                cout<<"Max = "<<max<<" and Min = "<<min;
            }
            space();
            clearscreen();
        }break;

        case 8: {
//Count total even and odd elements in an array.
            int size, even = 0, odd = 0;
            cout<<"Size of the Array : ";
            cin>>size;
            int arr8[size];
            for (int i=0; i<size; i++) {
                cin>>arr8[i];
                if (arr8[i] % 2 == 0) {
                    even++;
                }else {
                    odd++;
                }
            }
        cout<<"Total Even = "<<even<<" and Total Odd = "<<odd;
            space();
            clearscreen();
    }break;

        case 9: {
//Calculate the sum and average of elements in an array.
            int size, sum = 0, avg = 0;
            cout<<"Size of the Array : ";
            cin>>size;
            int arr9[size];
            for (int i=0; i<size; i++) {
                cin>>arr9[i];
                sum = sum + arr9[i];
                if (i == size-1) {
                    avg = sum / size;
                }
            }
            cout<<"Sum = "<<sum<<" and Average = "<<avg;
            space();
            clearscreen();
        }break;

        case 10: {
//Find the second largest number in an array.
            int size, max = 0, second_max = 0;
            cout<<"Size of the Array : ";
            cin>>size;
            int arr10[size];
            for (int i=0; i<size; i++) {
                cin>>arr10[i];
                if (i == 0) {
                    max = arr10[i];
                }
                else if (i>0) {
                    if (arr10[i] > max){
                        second_max = max;
                        max = arr10[i];
                    }else {
                        second_max = arr10[i];
                    }
                }
            }
            cout<<"Second largest number is "<<second_max;
            space();
            clearscreen();
        }break;

        case 11:{
//Search an element in an array (linear search).


            space();
            clearscreen();
        }break;

        default: cout << "Please Enter a Valid Choice!!";
            space();
            clearscreen();
            return Category2();
    }
}

void Category3(){}

void Category4(){}

int main() {
    int choice;
cout << endl << "Which Category you want to Execute"<<endl;
cout << "[1]Category 1: Output-Based Questions (GATE Style)"<<endl;
cout << "[2]Category 2: Basic Array Operations"<<endl;
cout << "[3]Category 3: Logic Building & Mathematical Patterns"<<endl;
cout << "[4]Category 4: DSA-Level Complex Problems"<<endl;
cout << "[5]For EXIT"<<endl;
cout << "Drop your choice here :";
    cin >> choice;
    switch (choice) {

        case 1: clearscreen();
            Category1();
            clearscreen();
            return main();

        case 2: clearscreen();
            Category2();
            clearscreen();
            return main();

        case 3: clearscreen();
            Category3();
            clearscreen();
            return main();

        case 4: clearscreen();
            Category4();
            clearscreen();
            return main();

        case 5: cout << "Keep Coding!\n";
            break;

        default: cout << "Please Enter a Valid Choice!!";
            space();
            clearscreen();
            return main();
    }
}

void clearscreen() {
    system("cls");
}

void space() {
    Sleep(1000);
}
