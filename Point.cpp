//
// Created by aced3v on 8/29/19.
//

#include "Point.h"

#include <iostream>

Point::Point(int x, int y): x(x), y(y){
}

Point::Point(const Point& p){
    x = p.x;
    y = p.y;
}

Point::~Point(){
}

void Point::set_x(int x){
    this->x = x;
}

void Point::set_y(int y){
    this->y = y;
}

void Point::read(){
    std::cout << "x=";
    std::cin >> x;
    std::cout << "y=";
    std::cin >> y;
}

int Point::get_y()const{
    return y;
}

void Point::print() const{
    std::cout << x << ", " << y << std::endl;
}

//предефиниране на префиксна версия на оператора ++
Point& Point::operator++(){
    //увеличава координатите на точката с 1
    x = x+1;
    y = y+1;
    //връща новата стойност
    return *this;
}

//предефиниране на постфиксна версия на оператора ++
Point Point::operator++(int){
    //запаметява текущата точка
    Point tmp = *this;
    //увеличава координатите на точката с 1
    x = x+1;
    y = y+1;
    //връща точката преди увеличението
    return tmp;
}