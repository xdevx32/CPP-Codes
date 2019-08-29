//
// Created by aced3v on 8/29/19.
//

#ifndef CPP_EXAM_PREP_RATIONAL_H
#define CPP_EXAM_PREP_RATIONAL_H

class Rational{
    friend bool operator!(const Rational &);
public:
    Rational(int =0, int =0);
    Rational(const Rational &);
    ~Rational();
    void set_numer(int);
    void set_denom(int);
    void read();
    int get_numer() const;
    int get_denom() const;
    void print() const;
    bool iszero() const;
private:
    int numer;
    int denom;
};

int gcd(int, int);

#endif //CPP_EXAM_PREP_RATIONAL_H
