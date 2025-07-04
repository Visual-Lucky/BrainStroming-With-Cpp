// NESTED IF-ELSE

#include<iostream>
using namespace std;
// ODD EVEN
int code1()
{
    int value;
    cout<<"Enter an Integer : ";
    cin >> value;
    if(value%2 == 0)
    {
        cout<<"Sam Sankhya Hai!!"<<endl;
    }else{
         cout << "Visam sankhya Hai!!" << endl;
     }
    return 0;
}

// CODE TO CHECK JOB APPLICANT IS ELIGIBLE FOR JOB!
int code2() {
    int age;
    float percent;
    cout<<"Enter Your Age : ";
    cin >> age;
    cout<<"Enter Your Percent : ";
    cin >> percent;

    if(percent >= 70) {
        if(age >= 25) {
            cout << "Salary Kitni Loge";
        }
        else {
            cout << "25 ke bad aana!!";
        }
    }
    else{
        cout << "You are Not Eligible for this JOB!!";
    }
return 0;
}

int code3() {
    int num;
    cout<<"Enter Your Number : ";
    cin >> num;

    if(num >= 100 && num <= 999) {
        if(num%2 == 0) {
            cout << "Di gyi sankhya - sam or 3 anko ki sankhya hai!!"<<endl;
        }
        else {
            cout << "Di gyi sankhya - Visam sankhya or 3 nako ki sankhya hai!!"<<endl;
        }
    }
    else {
        cout << "yeh 3 anko ki sankhya nhi h kripya krke 3 anko ki sankhya dale"<<endl;
    }
    return 0;
}

// GREATEST AMONG THREE
int code4() {
    int A,B,C;
    cout<<"Drop any three Numbers : ";
    cin >> A >> B >> C;

    if(A >= B) {
        if(A >= C) {
            cout << A <<" is Greatest!";
        }else {
            cout << C <<" is Greatest!";
        }
    }
    else {
        if(B >= C) {
            cout << B <<" is Greatest!";
        }
        else {
            cout << C <<" is Greatest!";
        }
    }

return 0;
}

//GRADE VALIDATOR ----
int code5() {
    float marksScience, marksMaths, marksEnglish;
    cout<<"Enter Science Marks : ";
    cin>>marksScience;
    cout<<"Enter Maths Marks : ";
    cin>>marksMaths;
    cout<<"Enter English Marks : ";
    cin>>marksEnglish;

    float per = (marksScience + marksMaths + marksEnglish)/3;

    if(per >= 34) {
        if(per >= 75) {
          cout << "You Passed with Distinction";
        }
        else {
            cout << "You Passed!";
        }
    }
    else {
        cout << "Better luck next time!";
    }

    return 0;
}

int main(){
    int ans;
    cout<<"---------------------REFER NOTEBOOK[code 1-5]----------------------"<<endl;
    cout<<"Which Number of Program you want to Execute from ''DAY4!!'' : ";
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
    else {
        cout<<"INVALID INPUT!!"<<endl;
    }
return 0;
}