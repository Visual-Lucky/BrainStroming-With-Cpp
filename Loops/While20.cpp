#include<iostream>
using namespace std;

int module1();
int module2();
int module3();
int module4();

int main() {
    int choice;
    cout << endl <<"Which Category you want to perform"<<endl;
    cout << "[1]Output Prediction (GATE Level)." <<endl;
    cout << "[2]Basic Programming with While Loop." <<endl;
    cout << "[3]Intermediate Problems (Logic + Conditions)." <<endl;
    cout << "[4]DSA-Focused Challenges (High Thinking)." <<endl;
    cout << "[5]For EXIT." <<endl;
    cout << "Drop your choice here :";
    cin >> choice;
    cout << endl;

    switch (choice) {
        case 1: {
            module1();
            return main();
        }
        case 2: {
            module2();
            return main();
        }
        case 3: {
            module3();
            return main();
        }
        case 4: {
            module4();
            return main();
        }
        case 5: break;
        default : {
            cout << "Please Choose Between given modules!" << endl;
            return main();
        }
    }
    return 0;
}


int module1() {
    int choice;
    cout << endl <<"Which Qs you want to Execute:"<<endl;
    cout << "[1]Q1." <<endl;
    cout << "[2]Q2." <<endl;
    cout << "[3]Q3." <<endl;
    cout << "[4]Q4." <<endl;
    cout << "[5]Q5." <<endl;
    cout << "[6]Back to Main Menu."<<endl;
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
            return module1();
        }

        case 2: {
            //PROGRAM-2
            int i2 = 5;
            while (i2 > 0) {
                cout << i2-- << " ";
            }
            cout << endl;
            cout << endl;
            return module1();
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
            return module1();
    }
        case 4: {
            // PROGRAM-4
            int i4 = 0;
            while (i4++ < 3) {
                cout << i4 << " ";
            }
            cout << endl;
            cout << endl;
            return module1();
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
            return module1();
        }

        case 6 : cout << "Keep Learning!!" << endl << endl;
           return  main();

        default : {
            cout << "Please Choose Between 1-6" << endl;
            return module1();
        }
    }

    return 0;
}

int module2() {
    int choice;
    cout << endl << "Which Question you want to Execute"<<endl;
    cout << "[1]Sum of first N natural numbers (input N)."<<endl;
    cout << "[2]Count digits in a number (input: int n)."<<endl;
    cout << "[3]Reverse a given number (input: int n)."<<endl;
    cout << "[4]Check if a number is a palindrome (input: int n)."<<endl;
    cout << "[5]Find the factorial of a number using while loop (input: int n)."<<endl;
    cout << "[6]Back to Main Menu."<<endl;
    cout << "Drop your choice here :"<<endl;
    cin >> choice;
    cout << endl;

switch (choice) {

    case 1: {
        // CATEGORY-2/PROGRAM-1
        int num, sum = 0;
        cout << "Drop a Number:";
        cin >> num;

        while(num > 0) {
            sum += num;
            num--;
        }
        cout << "The Sum of N Natural Num(s) is :" << sum;

        return module2();
    }
    case 2: {    // CATEGORY-2/PROGRAM-2
        int num, count = 0;
        cout << "Enter a number: ";
        cin >> num;

        while (num > 0) {
            num = num / 10;
            count++;
        }
        cout << "Digits in a num is :"<< count;
        return module2();
    }
    case 3: {    // CATEGORY-2/PROGRAM-3
        int num,temp = 0;
        cout << "Drop a Number :";
        cin >> num;
        while (num > 0) {
            num = num / 10;
            cout << num;
        }
        return module2();
    }
    case 4: {
        int num,count;
        cout << "Enter a number:";
        cin >> num;
        while (num > 0) {
            count = num % 10;
            num = num / 100;
            if (num == count) {
                cout << "Num is Palindrome";
                break;
            }
            else {
                cout << "Num is not Palindrome";
                break;
            }
        }
        return module2();
    }
    case 5: {   //CATEGORY-2/PROGRAM-5
        long num ;
        cout << "Drop a Number to Calculate Factorial :"; cin >> num;
        int fact = 1;
        while (num > 1) {
            fact = fact * num;
            num--;
        }
        cout << "Factorial of Given No. is : " << fact;
        return module2();
    }
    case 6: {
        cout << "Keep Coding";
        return main();
    }
    default: {
        cout << "Please Choose Between 1-6" << endl;
        return module2();
    }
}
 return 0;
}


int module3() {
    int choice;
    cout << endl << "Which Question you want to Execute"<<endl;
    cout << "[1]Count the number of 1s in the binary representation of a number (input: int n)."<<endl;
    cout << "[2]Find the sum of digits of a number until it becomes a single-digit number."<<endl;
    cout << "[3]Print all prime numbers up to N using only while loops (no arrays)."<<endl;
    cout << "[4]Find the GCD of two numbers using subtraction-based Euclidean algorithm."<<endl;
    cout << "[5]Convert a decimal number to binary (input: int n) and print it (without using arrays)."<<endl;
    cout << "[6]Back to Main Menu."<<endl;
    cout << "Drop your choice here :"<<endl;
    cin >> choice;
    cout << endl;

switch (choice) {
    case 1: {
        int num,temp, counter = 0;
        cout << "Drop a Number:"; cin >> num;

        while (num >= 1) {
            temp = num % 2;
            if (temp == 1){ counter = counter + 1;}
            num = num / 2;
        }
        cout << "Number of 1(s) in your Digit is : " << counter;
        return module3();
    }
    case 2: {
        int num;
        cout << "Drop a Number:"; cin >> num;

        while (num > 10) {
            int sum = 0;
            while(num > 0) {
                sum = num % 10;
                num = num / 10;
            }
            cout << sum;
        }


    return module3();
    }
    case 3: {}
    case 4: {}
    case 5: {}
    case 6: {}
    default: {}
}

}
int module4() {
    int choice;
    cout << endl << "Which Question you want to execute"<<endl;
    cout << "[1]Given a number `n`, determine if it's a power of 2 using only while loop."<<endl;
    cout << "[2]Find the smallest digit in a number that is divisible by 3."<<endl;
    cout << "[3]Print the sum of alternate digits in a number (e.g., 12345 -> 1+3+5)."<<endl;
    cout << "[4]Given a number n, return how many steps it takes to reduce it to 1 using: if even: divide by 2; if odd: subtract 1."<<endl;
    cout << "[5]Print the binary equivalent of a number in reverse (e.g., 5 -> binary 101 -> print 101)."<<endl;
    cout << "[6]Back to Main Menu."<<endl;
    cout << "Drop your choice here :"<<endl;
    cin >> choice;
    cout << endl;


}