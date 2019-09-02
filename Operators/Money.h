//
// Created by Angel Kukushev on 2019-09-02.
//

#ifndef STREAMS_MONEY_H
#define STREAMS_MONEY_H


class Money {
public:
    Money(int lv, int st);
    Money(const Money & money);
    int getLevove();
    int getStotinki();
    void setLevove(int lv);
    void setStotinki(int st);

private:
    int levove;
    int stotinki;

};
// Removed const...
Money operator+(Money & m1, Money & m2);
Money operator-(Money & m1, Money & m2);


#endif //STREAMS_MONEY_H
