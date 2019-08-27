//
// Created by aced3v on 8/27/19.
//

#include <iostream>

using namespace std;

int main()
{
    char str1[10], str2[10];

    // Usage without delimeter
     //cin.get(str1, 10).get(str2, 10);

    // Usage with delimeter
    cin.get(str1, 10, '.').get(str2, 10, '.');

    cout << "str1:" << str1 << "\nstr2:" << str2 << "\n";

    cout << "Gcount result: " << cin.gcount() << endl;

    /*
     * Input: foooooooobarrrrrrrr.cantcme
     * Output:
        str1:foooooooo
        str2:barrrrrrr
        Gcount result: 9
     */
}