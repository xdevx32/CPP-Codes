//
// Created by Angel Kukushev on 2019-08-28.
//

#include <iostream>

using namespace std;

int main()
{
    // Never forget the "invisible" \0 symbol at every charachter array.
    char str[12] = "FoooooooBar";

    cout.write(str, 14).write("ABCDEFG",5);
    return 0;
}