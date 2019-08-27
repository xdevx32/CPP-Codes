//
// Created by aced3v on 8/27/19.
//

// read a file into memory
#include <iostream>     // std::cout
#include <fstream>      // std::ifstream

using namespace std;

int main () {

    ifstream is ("<file-path>", ifstream::binary);
    if (is) {
        // get length of file:
        is.seekg (0, is.end);
        int length = is.tellg();
        is.seekg (0, is.beg);

        char * buffer = new char [length];

        cout << "Reading " << length << " characters... ";
        // read data as a block:
        is.read (buffer,length);

        if (is)
            cout << "all characters read successfully.";
        else
            cout << "error: only " << is.gcount() << " could be read";
        is.close();

        // ...buffer contains the entire file...

        delete[] buffer;
    }
    return 0;
}