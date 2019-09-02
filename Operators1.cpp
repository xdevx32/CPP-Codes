//
// Created by aced3v on 8/29/19.
//

#include "Rational.h"
#include <iostream>

int gcd(int a, int b )
{
    int c;
    while ( a != 0 ) {
        c = a; a = b%a;  b = c;
    }
    return b;
}

//конструктор с подразбиращи се параметри,
//може да бъде използван и като конструктор по подразбиране
Rational::Rational(int x, int y){
    if(y==0) std::cout << "Знаменателят е равен на 0!\n";
    else
    if(x==0){
        numer = 0;
        denom = 1;
    }
    else{
        //gcd е функция, която намира най-голям общ делител
        int g = gcd(abs(x), abs(y));
        if((x>0 && y>0) || (x<0 && y<0)){
            numer = abs(x)/g;
            denom = abs(y)/g;
        }
        else{
            numer = -abs(x)/g;
            denom = abs(y)/g;
        }
    }
}

//копиращ конструктор
Rational::Rational(const Rational & r){
    numer = r.numer;
    denom = r.denom;
}

//деструктор - тук нямаме нужда от такъв, но ще го ползваме с цел
//проследяване осовбождаването на обекти
Rational::~Rational(){
    std::cout << "destruct number" << numer << "/" << denom << std::endl;
}

//функции мутатори - използват се за задаване на стойности на член-данните на класа
void Rational::set_numer(int n){
    numer = n;
}

void Rational::set_denom(int d){
    if(d != 0) denom = d;
    else std::cout << "Знаменателят е равен на 0!\n";
}

//член-функция въвеждаща стойност за рационално число от входен поток
void Rational::read(){
    std::cout << "Въведете числител:";
    std::cin >> numer;
    do{
        std::cout << "Въведете знаменател:";
        std::cin >> denom;
    }while(denom==0);
}

//член-функция връщаща стойността на числителя
int Rational::get_numer() const{
    return numer;
}

//член-функция връщаща стойността на знаменателя
int Rational::get_denom() const{
    return denom;
}

//член-функция за извеждане на рационално число в изходен поток
void Rational::print() const{
    std::cout << numer << "/" << denom << std::endl;
}

//член-функция проверяваща дали рационалното число е 0
bool Rational::iszero() const{
    return numer == 0;
}

//main.cpp

#include "Rational.h"
#include <iostream>
#include <locale.h>


using namespace std;

int main(){
    setlocale(0, "Bulgarian");
    Rational p(1,8);
    Rational q = Rational(2, 9);
    for(int i=1; i<=5; i++){
        Rational r(i, i+1);
        cout << "r[" << i << "]=";
        r.print();
    }
    cout << "p=";
    p.print();
    cout << "q=";
    q.print();
    Rational * pnt = new Rational(3, 9);
    pnt->print();
    delete pnt;
    {
        Rational z;
        cout << "z=";
        z.print();
        Rational w(8, 64);
        cout << "w=";
        w.print();
    }
    return 0;
}