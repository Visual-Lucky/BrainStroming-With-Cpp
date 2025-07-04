#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main(){

    string sample;
    cout << "Drop a String: ";
    getline(cin, sample);


    return 0;
}

/*
# 🧵 C++ String – Practice Problem Set
## 🟢 Category 1: Output-Based Questions (GATE Style)
Q1     string s = "Hello";
    cout << "Length-->" <<s.length()<<endl;

Q2    string s = "abc";
    s[0] = 'z';
    cout << s;

Q3  string s = "Test";
    cout << s[2];

Q4  string s = "123";
    cout << s + "456";

Q5  string s = "C++";
    for (int i = 0; i < s.length(); i++){ 
    cout << s[i] << "-";
    }

## 🟡 Category 2: Basic String Operations
   
6. Input a string and count the number of vowels.
//6. Input a string and count the number of vowels.
    string word;
    cout<<"Enter String : ";
    getline(cin, word);
    int vowels = 0;
    for(int i=0; i<word.length(); i++){
        string vowel = "aeiou";
        for(int j=0; j<vowel.length(); j++){
            if(word[i] == vowel[j]){
        vowels++;
        }
    }
}
    cout<<"Vowels are "<<vowels;


7. Count digits, alphabets, and special characters in a string. 
//7. Count digits, alphabets, and special characters in a string.
string sample;
cout<<"Drop a String:";
getline(cin,sample);
int digits=0, alphabets=0, spChar=0;

for(int i=0; i<sample.length(); i++){
    if((sample[i] <= 90 && sample[i] >= 65) || (sample[i] <= 122 && sample[i] >= 97)){
        alphabets++;
    }
    else if(sample[i] >= 48 && sample[i] <= 57){
        digits++;
    }
    else spChar++;
}

cout<<"total No of alphabets : "<<alphabets<<" , no. of digits : "<<digits<<" and no. of special chars : "<<spChar;


8. Reverse a string.
//8. Reverse a string.
string name;
cout<<"Enter your name : ";
getline(cin,name);
reverse(name.begin(), name.end());
cout<<"desreveR :"<<name;

9. Convert all characters to uppercase.
//9. Convert all characters to uppercase.
string sample;
cout<<"Drop a String:";
getline(cin,sample);
for (char &c : sample) {
        c = toupper(static_cast<unsigned char>(c));
    }
cout<<sample;

//10. Convert all characters to lowercase.
    string sample;
cout<<"Drop a String:";
getline(cin,sample);
for (char &c : sample) {
        c = tolower(static_cast<unsigned char>(c));
    }
cout<<sample;

//11. Count frequency of a specific character.
string sample;
cout<<"Drop a String:";
getline(cin,sample);

char ch;
cout<<"Enter a Character to find their intensity :";
cin>>ch;

int freq = 0;
for(int i=0; i<sample.length(); i++){
    if(sample[i] == ch){ freq++;}
}
cout<<"Freq of your Char is : "<<freq;

// int start = 0;
// int last = sample.length()-1;
// bool flag = true;
// for(int i=0; i<sample.length()/2; i++){
//     if(last > start){
//         if(sample[last] == sample[start]){
//             flag = true;
//             start++;
//             last--;
//         }
//         flag = false;
//     }

// }
// if(flag){
//     cout<<"String is Palindrome";
// }
// else{
//     cout<<"Not Palindrome";
// }12. Check if the string is a palindrome.
// string sample;
// cout<<"Drop a String:";
// getline(cin,sample);

// string rev = sample;
// reverse(rev.begin() , rev.end());

// if(rev == sample){
//     cout<<"Palindrome";
// }
// else{
//     cout<<"NO Palindrome";
// }


13. Remove all whitespaces from a string.
    //13. Remove all whitespaces from a string.
string sample;
cout<<"Drop a String:";
getline(cin,sample);

// for(int i=0; i<sample.length(); i++){
    // if(sample[i] == ' '){
sample.erase(remove_if(sample.begin(), sample.end(), [](char c) { return isspace(c); }), sample.end());
        // sample.erase(i);    // char temp;// temp = temp + sample[i];
        // // sample[i] = sample[i+1];// sample[i+1] = temp;
    // }
// }
cout<<"After removing Whitespaces : "<<sample;

14. Find the first non-repeating character.
    string sample;
    cout << "Drop a String: ";
    getline(cin, sample);

    bool found = false;

    for (int i = 0; i < sample.length(); i++) {
        char temp = sample[i];
        bool isUnique = true;

        for (int j = 0; j < sample.length(); j++) {
            if (i != j && sample[j] == temp) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << "First Non-Repeating Char: " << temp << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "All Characters are Repeating" << endl;
    }

    //15. Replace all spaces with hyphens.    
    string sample;
    cout << "Drop a String: ";
    getline(cin, sample);

    for(int i=0; i<sample.length(); i++){
        if(sample[i] == ' '){
            sample[i] = '-';
        }
    }

    cout << sample;

//16. Toggle each character’s case.    
    string sample;
    cout << "Drop a String: ";
    getline(cin, sample);

for(int i=0; i<sample.length(); i++){
    if(sample[i] >= 65 && sample[i] <= 90){
        sample[i] = (char)tolower(sample[i]);
    }

    else if(sample[i] >= 97 && sample[i] <= 122){
        sample[i] = (char)toupper(sample[i]);
    }
}
cout<<"After Operation :"<<sample<<endl;
//17. Count number of words in a sentence.
    string sample;
    cout << "Drop a String: ";
    getline(cin, sample);

    int words = 0;
    for(int i=0; i<sample.length(); i++){
        if(sample.empty()){
            break;
            }
        else if(sample[i] == ' '){
            words++;
        }
    }
    if(!sample.empty()){
        cout<<"Total Words in Your String is : "<<words+1;
    }
    else{
         cout<<"Total Words in Your String is : "<<words;
    }

    //18. Check if two strings are anagrams.
    string sample1, sample2;

    cout << "Drop 1st String: ";
    getline(cin, sample1);

    cout << "Drop 2nd String: ";
    getline(cin, sample2);

if (sample1.length() != sample2.length()){
        cout<<"Not Anargm!";
    }   
else{ 
    transform(sample1.begin(), sample1.end(), sample1.begin(), ::tolower);
    transform(sample2.begin(), sample2.end(), sample2.begin(), ::tolower);

    sort(sample1.begin(), sample1.end());
    sort(sample2.begin(), sample2.end());
    if(sample1 == sample2){
        cout<<"Anargm";
    }
    else{
        cout<<"Not Anargm!";
    }

}


//19. Remove all duplicate characters.
    string sample;
    cout << "Drop a String: ";
    getline(cin, sample);

    for (int i = 0; i < sample.length(); i++) {
        for (int j = i + 1; j < sample.length(); ) {
            if (sample[j] == sample[i]) {
                sample.erase(j, 1); // Don't increment j here
            } else {
                j++; // Only move j forward if nothing was erased
            }
        }
    }

    cout << "After removing duplicates: " << sample << endl;



    

*/