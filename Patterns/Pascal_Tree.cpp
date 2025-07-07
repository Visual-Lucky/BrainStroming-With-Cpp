#include<iostream>
using namespace std;
/*             (i)
 *   1          1
 *  1 1         2
 * 1 2 1        3
 *1 3 3 1       4
 */

int combination(int n, int r);

int main() {

    int size = 7;
    for (int i=1; i<=size; i++) {
        //for spaces
        for (int j=size-i; j>0; j--) {
            cout<<" ";
        }
        //for numbers
        for (int x = 0; x < i; x++) {
            cout << combination(i - 1, x) << " ";
        }

        cout<<endl;
    }

    return 0;
}

int combination(int n, int r) {
    int res = 1;
    for (int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
