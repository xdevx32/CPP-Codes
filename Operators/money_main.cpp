//
// Created by Angel Kukushev on 2019-09-02.
//
#include "Money.h"
#include <iostream>

using namespace std;

int main()
{

    Money m = Money(3, 20);
    Money n = Money(4, 30);
    Money z = m - n;

    cout << z.getLevove() << "," << z.getStotinki() << endl;
    return 0;
}
