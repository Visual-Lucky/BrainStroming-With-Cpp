#include<iostream>
using namespace std;
int module1();
// int module2();
// int module3();
// int module4();

int main() {
    int choice;
    cout << "Which Category you want to perform\n[1]CT1.\n[2]CT2.\n[3]CT3.\n[4]CT4.\n[5]For Exit.\n";
    cout << "Drop your choice here :";
    cin >> choice;

    switch (choice) {
        case 1: module1();
        // case 2: module2();
        // case 3: module3();
        // case 4: module4();
        case 5: break;
        default : cout << "Please Choose Between given modules!" << endl;
             main();
    }


    return 0;
}


int module1() {
    int choice;
    cout << "\nWhich Qs you want to execute:\n";
    cout << "[1]Q1.\n[2]Q2.\n[3]Q3.\n[4]Q4.\n[5]Q5.\n[6]Back to Main Menu."<<endl;
    cout << "Drop your choice here :";
    cin >> choice;
    cout << endl;
    switch(choice) {
        case 1:{  //  PROGRAM-1
            int i1 = 1;
            while (i1 <= 5) {
                cout << i1 << " ";
                i1++;
            }
            cout << endl;
            cout << endl;
            module1();
        }

        case 2: {
            //PROGRAM-2
            int i2 = 5;
            while (i2 > 0) {
                cout << i2-- << " ";
            }
            cout << endl;
            cout << endl;
            module1();
        }

        case 3: { // PROGRAM-3
            int i3 = 1;
            while (i3 < 10) {
                if (i3%3 == 0) break;
                cout << i3 << " ";
                i3 += 2;
            }
            cout << endl;
            cout << endl;
            module1();
    }
        case 4: {
            // PROGRAM-4
            int i4 = 0;
            while (i4++ < 3) {
                cout << i4 << " ";
            }
            cout << endl;
            cout << endl;
            module1();
        }

        case 5: {
            // PROGRAM-5
            int x= 2, count = 0;
            while (x <= 100) {
                x = x * 2;
                count = count + 1;
            }
            cout << count;
            cout << endl;
            cout << endl;
            module1();
        }

        case 6 : cout << "Keep Learning!!" << endl << endl;
           return  main();

        default : cout << "Please Choose Between 1-6" << endl;
            module1();
    }

    return 0;
}