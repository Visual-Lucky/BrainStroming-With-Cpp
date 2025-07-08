//Create class Book with data members:
//id, title, author. Display using a function.
#include<iostream>
using namespace std;

class Book {
    int id = 0;
    string title;
    string author;

public:
    void input();
    void output();
};

void Book::input() {
    cout<<"Enter Title of the Book : ";
    getline(cin,title);
    cout<<"Who is Author of the Book : ";
    getline(cin,author);
    cout<<"Enter Book ID : ";
    cin>>id;
}

void Book::output() {
    cout<<"Title : "<<title<<endl;
    cout<<"Author : "<<author<<endl;
    cout<<"ID : "<<id<<endl;
}

int main() {

    Book book1, book2;

    book1.input();
    book2.input();

    book1.output();
    book2.output();

    return 0;
}