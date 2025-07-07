#include<iostream>
#include<fstream>

using namespace std;

int openFile() {

//opening a file for reading
    ifstream my_file("example.txt");

    if (!my_file) {
        cout<<"Error: unable to open the file.\n";
        return 1;
    }

    string line;

    while (!my_file.eof()) {
        getline(my_file, line);
        cout << line << endl;
    }

    // closes the file
    my_file.close();

    return 0;
}

int writeFile() {

//this deletes the old contents of a file and adds the myfile contains lines
    ofstream my_file("example.txt");

    if (!my_file) {
        cout<<"Error: unable to open the file.\n";
        return 1;
    }

    my_file << "New Line by me)1(" << endl;
    my_file << "also New Line by me)2(\n";
    my_file << "Last New Line by me)3(" << endl;

    my_file.close();
    return 0;
}

int appendFile() {

    ofstream my_file("example.txt", ios::app);

    if (!my_file) {
        cout<<"Failed to open the file for appending";
        return 1;
    }

    my_file << "New Line by me )4(" << endl;
    my_file << "also New Line by me )5(\n";
    my_file << "Last New Line by me )6(" << endl;

    return 0;
}

int main() {

    openFile();

    appendFile();

    openFile();

    // writeFile();

    // openFile();

    return 0;
}