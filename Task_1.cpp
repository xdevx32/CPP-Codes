//
// Created by Angel Kukushev on 2019-08-28.
//

#include <iostream>
#include <fstream>

using namespace std;

// Task : Write "Hello World!" to a file and then close the file.
// Then open the same file and read and print in the console
// the "Hello World!" using charachter arrays.

int main()
{
    ofstream f1;
    f1.open("/Users/ace_dev/CLionProjects/NBU/Streams/Hello.txt");
    f1 << "Hello World!";
    f1.close();

    char str[13];
    ifstream file2;

    file2.open("/Users/ace_dev/CLionProjects/NBU/Streams/Hello.txt");
    if(!file2){
        cerr << "File could not be opened!\n";
        return 1;
    } else {
        char str[13];
        // Both get and getline work in this case.
        // We want to print the Hello World! string in
        // Charachter array. But when just doing
        // file >> str , it stops at whitespace.
        // That's why we should use the get or getline
        // function.
        file2.get(str, 13);
        cout << str;
    }

    return 0;
}