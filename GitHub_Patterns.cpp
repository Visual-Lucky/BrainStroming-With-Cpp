#include<iostream>
using namespace std;

void Q6_right_angled_triangle() {
    int N;
    cout << "Enter Height of our Right Angled Triangle :";
    cin >> N;
    for(int i = 1; i <= N; i++){
        for(int j = i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    Q6_right_angled_triangle();

    return 0;
}