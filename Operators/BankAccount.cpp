//
// Created by Angel Kukushev on 2019-09-05.
//

#include <iostream>
#include "BankAccount.h"

using namespace std;

const int MAX_SIZE = 100;
char temp[MAX_SIZE]; //помощен низ

// конструктор с подразбиращи се параметри
BankAccount::BankAccount(const char* n, const char* an,
        double b)
{
    name = new char[strlen(n)+1];

    if(!name)
    {
        cout << "Грешка при заделяне на памет!\n";
        exit(1);
    }
    strcpy(name, n);
    accountnum = new char[strlen(an) + 1];
    if(!accountnum)
    {
        cout << "Грешка при заделяне на памет!\n";
        exit(1);
    }
    strcpy(accountnum, an);
    balance = b;
}

// конструктор за присвояване
BankAccount::BankAccount(const BankAccount& b)
{
    name = new char[strlen(b.name)+1];
    if(!name)
    {
        cout << "Грешка при заделяне на памет!\n";
        exit(1);
    }
    strcpy(name, b.name);
    accountnum = new char[strlen(b.accountnum)+1];
    if(!accountnum)
    {
        cout << "Грешка при заделяне на памет!\n";
        exit(1);
    }
    strcpy(accountnum, b.accountnum);
    balance = b.balance;
}
// деструктор

BankAccount::~BankAccount()
{
    delete [] accountnum;
    delete [] name;
}

// операторна функция за присвояване
BankAccount& BankAccount::operator=(const BankAccount& b)
{
    if(this != &b)
    {
        delete [] accountnum;
        delete [] name;
        name = new char[strlen(b.name)+1];
        if(!name)
        {
            cout << "Грешка при заделяне на памет!\n";
            exit(1);
        }
        strcpy(name, b.name);
        accountnum = new char[strlen(b.accountnum)+1];

        if(!accountnum)
        {
            cout << "Грешка при заделяне на памет!\n";
            exit(1);
        }
        strcpy(accountnum, b.accountnum);
        balance = b.balance;
    }
    return *this;
}