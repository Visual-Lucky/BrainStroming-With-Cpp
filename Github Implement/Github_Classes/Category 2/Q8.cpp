//Create class Time with data members:
//hours, minutes. Add two time objects.
#include<iostream>
using namespace std;

class Time {
public:
    int hours, minutes;
    void add(Time t1, Time t2) {
        minutes = (t1.minutes + t2.minutes) % 60;
        hours = t1.hours + t2.hours + (t1.minutes + t2.minutes)/60;
    }
    void input() {
        cout<<"Enter Hours and Minutes:\n";
        cin>>hours>>minutes;
    }
    void print() {
        cout<<"Total Time = "<<hours<<" Hours & "<<minutes<<" Minutes.";
    }
};

int main() {
    Time time1, time2, time3;
    time1.input();
    time2.input();

    time3.add(time1, time2);
    time3.print();
    return 0;
}