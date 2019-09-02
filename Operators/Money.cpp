//
// Created by Angel Kukushev on 2019-09-02.
//

#include "Money.h"
#include <iostream>

Money::Money(int lv, int st)
{
    this->levove = lv;
    this->stotinki = st;
}

Money::Money(const Money &money)
{
    this->levove = money.levove;
    this->stotinki = money.stotinki;
}

int Money::getLevove()
{
    return this->levove;
}

int Money::getStotinki()
{
    return this->stotinki;
}

void Money::setLevove(int lv)
{
    this->levove = lv;
}

void Money::setStotinki(int st)
{
    this->stotinki = st;
}

Money operator+(Money & m1, Money & m2)
{
    return Money(m1.getLevove() + m2.getLevove(), m1.getStotinki() + m2.getStotinki());
}

Money operator-(Money & m1, Money & m2){
    return Money(m1.getLevove() - m2.getLevove(),
            std::abs(m1.getStotinki() - m2.getStotinki()));
}

