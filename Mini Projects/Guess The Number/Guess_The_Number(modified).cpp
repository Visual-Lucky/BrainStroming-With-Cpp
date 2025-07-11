// #include<cstdlib>
// #include<ctime>
#include<iostream>
#include<random>

using namespace std;

void scoreGenerator(int counter) {
    int arr[] = {0,9,8,7,6,5,4,3,2,1};
    int cal= counter;
    if (cal > 8){
        cout<<"Well Played!\n";
        cout<<"Score is "<<arr[cal-1];
    }
    else if (cal > 6) {
        cout<<"Nice\n";
        cout<<"Score is "<<arr[cal-1];
    }
    else if (cal > 4) {
        cout<<"Good\n";
        cout<<"Score is "<<arr[cal-1];
    }
    else if (cal > 2) {
        cout<<"Not Bad\n";
        cout<<"Score is "<<arr[cal-1];
    }
    else {
        cout<<"Thoda or dimag Lgao Bhai ek number Guess nhi ho rha!!";
    }
}

int main() {

    // srand(time(0)); //generate random numb
    // int randomNum = rand() % 100 + 1; //set limit to 100

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 100);
    int randomNum = distrib(gen);

    int counter = 10;
    cout<<"You have "<<counter<<" chances.\n";

    while (true) {
        if (counter >= 1) {
            int target;
            bool validInput = false;
            while (!validInput){
                {
                    if (counter == 10) {
                        cout<<"Guess a Number between [1-100] :";
                    }
                    else if (counter == 1) {
                        cout<<"Last Chance to Guess : ";
                    }
                    else {
                        cout<<"Again Guess a Number :";
                    }
                }
                cin>>target;

                {
                    if (cin.fail()) {
                        cout<<"Invalid Input Please Guess Integers from 1 to 100\n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(),'\n');
                    } else if (target < 1 || target > 100) {
                        cout<<"Number out of range!\n";
                    }else {
                        validInput = true;
                    }
                }
            }


            if (target > randomNum) {
                cout<<"\nYour Gussed num is BIG!"<<endl;
                counter--;
            }
            else if (target < randomNum) {
                cout<<"\nYour "
                      "Gussed num is small!"<<endl;
                counter--;
            }
            else if (target == randomNum) {
                cout<<"You Gussed it"<<endl;
                scoreGenerator(counter);
                //counter--;
                break;
            }
        }else {
            cout <<"You are out of Chances!\n";
            scoreGenerator(counter);
            cout<<"\nCorrect Num is :"<<randomNum<<endl;
            break;
        }
    }
    //cout<<"Your Score "<<counter<<"";

    return 0;
}