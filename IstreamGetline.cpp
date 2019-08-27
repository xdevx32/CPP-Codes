//
// Created by aced3v on 8/27/19.
//

#include <iostream>

using namespace std;

int main()
{
    char str1[10], str2[10];

    cin.getline(str1, 10, '.').getline(str2, 10, '.');

    cout << "str1:" << str1 << "\nstr2:" << str2 << endl;
}