#pragma once

#include <iostream>

class Rational {
private:
    int a; // numerator
    int b; // denominator
public:
    Rational(int a1 = 0, int b1 = 1); // constructor
    void set(int a1, int b1); // setter
    void show() const; // display fraction
    friend Rational operator+(const Rational &r1, const Rational &r2); // addition
    Rational operator++(); // prefix increment
    bool operator==(const Rational &r) const; // comparison (==)
    bool operator>(const Rational &r) const; // comparison (>)
    Rational &operator=(const Rational &r); // assignment (=)
    friend Rational operator-(const Rational &r1, const Rational &r2); // subtraction
    ~Rational(); // destructor
};
