#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Press Enter to Escape!";

    while(true){
        ch = getchar();
        if(ch == '\n'){
            cout<<"Escaped";
            break;
        }else{
            while(getchar() != '\n');
                cout<<"You Dont Want to Escape!";
            
        }
    }

    return 0;
}

    // char ch;
    // cout<<"Press Enter to Escape!!";
    // while(true){
    // ch = cin.get();
    //     if(ch == '\n'){
    //         cout<<"Escaped!";
    //         break;
    //     }
    //     else{
    //         cout<<"You Dont Want to Escape!";
    //     }
    // }