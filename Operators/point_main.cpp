#include <iostream>
#include "Point.h"
#include <locale.h>


using namespace std;

int main(){
    setlocale(0, "Bulgarian");
    Point a;
    Point b(3, 12);
    Point c(b);
    Point d = c;

    cout << "a=" ;
    a.print();
    cout << "a.x=" << a.get_x() << endl;

    cout << "b=" ;
    b.print();

    cout << "c=" ;
    ++c;
    c.print();

    cout << "d=" ;
    d = c++;
    d.print();

    cout << "c=" ;
    c.print();

    return 0;
}