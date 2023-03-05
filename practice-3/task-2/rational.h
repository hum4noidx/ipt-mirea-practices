#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
public:
    Rational(int a1 = 0, int b1 = 1); // constructor
    void set(int a1, int b1); // setter
    void show() const; // display
private:
    int a, b; // numerator and denominator
};

#endif // RATIONAL_H
