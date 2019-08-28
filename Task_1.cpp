//
// Created by Angel Kukushev on 2019-08-28.
//

#include <iostream>
#include <fstream>

using namespace std;

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
        file2 >> str;
        cout << str;
    }

    return 0;
}