//
// Created by Angel Kukushev on 2019-09-02.
//
#include "Money.h"
#include <iostream>

using namespace std;

int main()
{

    Money m = Money(20, 42);
    m.setLevove(16);
    cout << m.getLevove() << endl;
    return 0;
}
