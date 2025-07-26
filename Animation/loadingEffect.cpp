#include <iostream>
#include <windows.h>  // For Sleep()
using namespace std;

void loadingBar(string message) {
    cout << message;
    for (int i = 0; i < 10; i++) {
        cout << ".";
        Sleep(200);  // 200 milliseconds = 0.2 seconds
    }
    cout << "\n";
}

int main() {
    loadingBar("Loading");
    return 0;
}
