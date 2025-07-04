#include<iostream>
using namespace std;
int main(){
    int binary, binaryarr[100], length=-1;
    cout<<"Enter Binary Num:";
    cin>>binary;
    for(int i=0; binary>0 ; binary /= 10){
        binaryarr[i] = binary%10;
        length++;
        i++;
    }
    for(int i=0; i<= length; i++){
        cout<<binaryarr[i];
    }

    return 0;
}

// // * * * * *
// //  * * * *
// //   * * *
// //    * *
// //     *
// int height = 10, counter = height;
// for (int i = 1; i <= height; i++) {
//     for (int j = 1; j <= i-1; j++) {
//         cout << " ";
//     }
//      for (int j = counter; j > 0; j--) {
//         cout << "* ";
//     }
//     counter--;
//     cout << endl;
// }


// // *
// //  *
// //   *
// //    *
//
// int N = 5;
// for (int i = 1; i <= N; i++) {
//     for (int j = 1; j <= N; j++) {
//         if (i==j) cout << "*";
//         else cout << " ";
//     }
//
//     cout << endl;
// }


// //    *
// //   **
// //  ***
// // ****
// int height = 4, space=height-1;
// for (int i = 1; i <= height; i++) {
//     // for space
//     for (int j = 1; j<= space; j++) {
//         cout<<" ";
//     }
//     space--;
//     for (int j = 1; j <= i; j++) {
//         cout<<"*";
//     }
//     cout << endl;
// }

// //char ch = 65 + i;
// int N = 5;
// for (int i = 1; i<= N; i++) {
//     char ch = 64 + i;
//     for (int j = 1; j<= i; j++) {
//         cout << ch;
//     }
//
//     cout << endl;
// }

// // 1
// // 2 4
// // 3 6 9
// for (int i = 1; i <= 10; i++) {
//     for (int j = 1; j <= i; j++) {
//         cout << i*j << " ";
//     }
//
//     cout << endl;
// }


// int height = 5, length=(height*2)-1;
// for (int i = 1; i <= height; i++) {
//     if (i == height) {
//         for (int j = 1; j <= length; j++) {
//             cout << "*";
//         }
//     }
//     else {
//         // 1st Star
//         for (int j = 1; j <= i; j++) {
//             cout  << "*";
//         }
//         // Middle Spaces
//         for (int j = 1; j<= ((height*2)-1)-2*i; j++) {
//             cout << " ";
//         }
//         // Last Star
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//     }
//     cout << endl;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int height;
//     cout << "Drop Max Horizonta:";
//     cin>>height;
//     int = ;
//     int base = 1;
//
//     for (int i = 1; i <= height; i++) {
//
//     }
// return 0;
//   //   1
//   //  121
//   // 12321
//   //  121
//   //   1
// }