#include<iostream>
using namespace std;

void category1(){}
void category2(){}
void category3(){}
void category4(){}

int main() {
    int choice;
    cout <<endl<< "🟢 Category 1 - Output Prediction (Trace & Predict Output)"<<endl;
    cout << "🟡 Category 2 - Basic Pattern Implementation"<<endl;
    cout << "🟠 Category 3 - Intermediate Pattern Programming"<<endl;
    cout << "🔴 Category 4 - Advanced Pattern Logic"<<endl;
    cout << "🧩 Category 5 - For Termination!!"<<endl;
    cout << "Which Category you want to Dive :";
    cin >> choice;
    cout <<endl<<endl;
    switch(choice) {
        case 1: category1();
        case 2: category2();
        case 3: category3();
        case 4: category4();
        case 5: cout << "Keep Cooddinnggg!!";
                break;
        default:cout << "Please Enter a Valid Category Num." << endl;
                main();
    }
    return 0;
}