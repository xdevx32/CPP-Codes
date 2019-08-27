//
// Created by aced3v on 8/27/19.
//

#include <iostream>

using namespace std;

int main()
{
    char str1[10], str2[40];

    cin.getline(str1, 10, '.').getline(str2, 40, '.');

    cout << "str1:" << str1 << "\nstr2:" << str2 << endl;

    cout << "Gcount result: " << cin.gcount() << endl;

    /*
     * Example of usage:
     * Input : foooooo.baaaaaaaaaaaaaaaaaaar.asdf
     * Output:
        str1:foooooo
        str2:baaaaaaaaaaaaaaaaaaar
        Gcount result: 22
     *
     *
     */
}