//
// Created by aced3v on 8/27/19.
//

#include <iostream>

using namespace std;

int main()
{
    // length of 20 gives abnormal signs
    // length of 10 works good.
    char str[20];
    cin.read(str, 10);

    cout << "str1:" << str << "\n";
}
