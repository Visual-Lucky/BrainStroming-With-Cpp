#include<iostream>
using namespace std;

//ELIGIBLE FOR B-TECH  ****
int code1() {
    double math, phy, chem;
    cout<<"Enter math marks : ";
    cin>>math;
    cout<<"Enter phy marks : ";
    cin>>phy;
    cout<<"Enter chem marks : ";
    cin>>chem;

    if ((math >= 60) && (phy >= 50) && (chem >= 40) && (((math+phy+chem) >= 200) || ((math+phy+chem) >= 150)) ) {
        cout<<"You are Eligible for BTech.";
    }else {
        cout<<"You are not Eligible for BTech. Better Luck Next Time!!";
    }
    return 0;
}

// Mini Age Jano
int code2() {
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age <= 12) {
        cout << "Bacche Hai AAP!!";
    }else if(age <= 18) {
        cout << "JAWAN Hai AAP!!";
    }else if(age <= 60) {
        cout<<"budhe Hai AAP!!";
    }

    return 0;
}

// GRADING SYSTEM FOR A STUDENT
int code3() {
    double marks;
    cout<<"Enter your marks : ";
    cin>>marks;

    if(marks >= 90) {
        cout<<"A Grade!!";
    }else if(marks >= 80) {
        cout<<"B Grade!!";
    }else if(marks >= 70) {
        cout<<"C Grade!!";
    }else if(marks >= 60) {
        cout<<"D Grade!!";
    }else {
        cout<<"You got Grade [F] :- Failed";
    }
    return 0;
}


// BILL GENERATOR---
float Bill(float Units) {
    if(Units <= 200) {
        return Units*0.5;
    }else {
        return ((Units-200)*0.75) + (200*0.5) + 100;
    }
}
int code4() {
    float Units;
    cout<<"Enter your Units : ";
    cin >> Units;

    float bill = Bill(Units);  // Function Calling
    cout<<"Your Bill is : "<<bill;
    return 0;
}


// BILL MAXIMIZER
double MainBill(double units) {
    if(units <= 200) {
        return units*0.5;                           //Max : 100
    }else if(units <= 300) {
        return (100 + 100 + (units-200)*0.75);      //Max : 175 + 100[p]
    }else if(units <= 400) {
        return (275 + 200 + (units-300)*0.90);      //Max : 365 + 200[p]
    }else if(units <= 500) {
        return (565 + 300 + (units-400)*1.00);      //Max : 665 + 300[p]
    }else {
        return (965 + 400 + (units-500)*2.00);      //Min : 967 + 400[p]
    }
}
int code5() {
    double units;
    cout << "Enter Units : ";
    cin >> units;

    double newbill = MainBill(units);
    cout << "Your Bill is : " << newbill;
    return 0;
}

//*************************************************

// MALL BILLLLLLLL
float GA(int age, int gender, float ANS)
{
    // this calculates the discounted value

    if (age <= 18)
    {
        if (gender == 1)
        {
            return (ANS*.90) + 50;
        }else if (gender == 0)
        {
            return (ANS + 50);
        }
    }
    else if (age <= 30)
    {
        if (gender == 1)
        {
            return (ANS*0.90) + 300;
        }else if (gender == 0) {
            return (ANS + 300);
        }
    }
    else if (age > 30) {
        return 0;
    }

}

float TSD(float time, int SD) {
    if(SD == 1) {   // agar special din hai
        if(time <= 120) {
            return time*0.75;
        }else {
            return 90+(time-120)*1.0;
        }
    }
    else {
        if(time <= 120) {
            return (time*0.50);
        }else {
            return (60 + (time-120)*1.0);
        }
    }
}

float mallBill(int age, int SD, float time, int gender) {
    float ANS = TSD(time,SD);

    float discountedBill = GA(age, gender, ANS);

    return discountedBill;
}

int code6() {
    int age, gender, SD;
    float time;

    cout<<"Enter Your Age : ";
    cin>>age;

    cout<<"\nfor Ladies [1]  and for Lads [0]\n";
    cout<<"Enter Your Gender : ";
    cin>>gender;

    cout<<"\nfor yes drop->[1] or for NO drop->[0]\n\n";
    cout<<"is Today is Any Special Ocassion : ";
    cin>>SD;

    cout << "Drop Spended Time (MUST in HRs): ";
    cin >> time;

    time = time*60;

    float bill = mallBill(age,SD,time,gender);

    if (bill == 0)
    {
        cout << "Ye Baccho ke khelne ki jgh hai!!";
    }else {
        cout << "Your Bill is : " << bill << "\nThanks Visit Again!!" ;
    }

    return 0;
}

int main(){
    int ans;
    cout<<"---------------------REFER NOTEBOOK[code 1-6]----------------------"<<endl;
    cout<<"Which Number of Program you want to Execute from ''DAY5!!'' : ";
    cin >> ans;
    if(ans == 1) {
        code1();
        return 0;
    }
    else if(ans == 2) {
        code2();
        return 0;
    }
    else if(ans == 3) {
        code3();
        return 0;
    }
    else if(ans == 4) {
        code4();
        return 0;
    }
    else if(ans == 5) {
        code5();
        return 0;
    }
    else if(ans == 6) {
        code6();
        return 0;
    }
    else {
        cout<<"INVALID INPUT!!"<<endl;
    }
    return 0;
}