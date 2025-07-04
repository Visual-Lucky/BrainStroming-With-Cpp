//WHILE LOOP
#include<iostream>
using namespace std;

//PRINT NUM FROM 1-10
int code1() {
    int count,i = 1;
    cout << "Drop a Upper-Bound for counting: ";
    cin >> count;
    while(i <= count) {
        cout << i <<" ";
        i = i + 1;
    }
    return 0;
}

//PRINTING A TABLE FOR N NUM(s)
int code2() {
    float num;
    cout << "Here we can Print Table for Floating Point & Integer Numbers!" << endl;
    cout << "Enter a Number for Printing its Table : ";
    cin >> num;
    int counter = 1;
    while(counter <= 10) {
        cout << num*counter << endl;
        counter = counter + 1;
    }
    return 0;
}

int code3() {
    int num;
    cout << "Enter a Number for Reverse Printing to 1 :";
    cin >> num;

    while(num > 0) {
        cout << num <<" ";
        num = num - 1;
    }
return 0;
}


int code4() {
    int power, base, counter = 1;
    cout << "Enter the Base Value :";
    cin >> base;
    cout << "Enter the Power Value :";
    cin >> power;
    int Power = power;
    while(power > 0) {
        counter = counter * base;
        power = power - 1;
    }
    cout << base << "^" << Power << " = " << counter << endl;
    return 0;
}

//TO CALCULATE HOW MANY ODD EVEN BETWEEN A GIVEN NUM
int code5() {
    int num, even = 1, odd = 0;
    cout << "Drop a Num for Checking Even & Odd Between them :";
    cin >> num;
    while(num > 0) {
        if(num % 2 == 0) {
            even = even + 1;
        }else {
            odd = odd + 1;
        }
        num = num - 1;
    }
    cout << "In Between Your Number there are "<<even<<" Even Numbers and "<<odd<<" Odd Numbers.";
    return 0;
}


//TO REVERSE A NUMBER
int code6(){
    int num;
    cout << "Enter a Number";
    cin >> num;

    while(num > 0) {
        num = num/10;
    }
    cout << num << endl;
    return 0;
}


int main() {
    int choice;
    cout <<endl<<endl<<"Which no. of code you want to execute : " << endl;
    cout << "for Code[1] drop[1] upto code[n] drop[n]\nFOR EXIT drop[0]"<<endl;
    cin >> choice;

    switch(choice) {
        case 0: cout << "Keep Practising Day by Day!!";
                    break;
        case 1:  code1();
                    main();
        case 2: code2();
                    main();
        case 3: code3();
                    main();
        case 4: code4();
                    main();
        case 5: code5();
                    main();
        case 6: code6();
                    main();
        default : cout << "Please Enter a Valid Code Number :";
                    main();
    }

    return 0;
}
