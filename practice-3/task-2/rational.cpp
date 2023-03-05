#include "rational.h"
#include <iostream>

using namespace std;

// constructor
Rational::Rational(int a1, int b1) {
    // check for denominator of 0
    if (b1 == 0) {
        cerr << "Error: denominator cannot be zero." << endl;
        exit(1);
    }

    // if numerator > denominator, convert to mixed number
    if (a1 >= b1) {
        a = a1 % b1;
        b = b1;
    }
    else {
        a = a1;
        b = b1;
    }

    // reduce fraction
    int gcd = 1;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    a /= gcd;
    b /= gcd;
}

// setter
void Rational::set(int a1, int b1) {
    // check for denominator of 0
    if (b1 == 0) {
        cerr << "Error: denominator cannot be zero." << endl;
        exit(1);
    }

    // if numerator > denominator, convert to mixed number
    if (a1 >= b1) {
        a = a1 % b1;
        b = b1;
    }
    else {
        a = a1;
        b = b1;
    }

    // reduce fraction
    int gcd = 1;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    a /= gcd;
    b /= gcd;
}

// display
void Rational::show() const {
    cout << a << "/" << b;
}
