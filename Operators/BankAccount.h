//
// Created by Angel Kukushev on 2019-09-05.
//

#ifndef STREAMS_BANKACCOUNT_H
#define STREAMS_BANKACCOUNT_H

class BankAccount
{
private:
    char* name;
    char* accountnum;
    double balance;
public:
    // канонично представяне
    // конструктор с подразбиращи се параметри
    BankAccount(const char* = "", const char* = "",
                double = 0.0);
    // конструктор за присвояване
    BankAccount(const BankAccount&);
    // деструктор
    ~BankAccount();
    // операторна функция за представяне
    BankAccount& operator=(const BankAccount&);
    // извеждане на банкова сметка
    void print() const;
    // внасяне на сума в банкова сметка
    void put_in(double);
    // теглене на сума от банкова сметка
    void draw(double);
};

#endif //STREAMS_BANKACCOUNT_H
