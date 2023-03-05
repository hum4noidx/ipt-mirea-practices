#include "rational.h"

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

Rational::Rational(int a1, int b1) {
    if (b1 == 0) {
        cout << "Error: denominator cannot be 0\n";
        exit(1);
    }
    int g = gcd(abs(a1), abs(b1));
    a = a1 / g;
    b = b1 / g;
    if (a >= b) {
        a %= b;
    }
}

void Rational::set(int a1, int b1) {
    if (b1 == 0) {
        cout << "Error: denominator cannot be 0\n";
        exit(1);
    }
    int g = gcd(abs(a1), abs(b1));
    a = a1 / g;
    b = b1 / g;
    if (a >= b) {
        a %= b;
    }
}

void Rational::show() const {
    cout << a << "/" << b;
}

Rational operator+(const Rational& r1, const Rational& r2) {
    Rational res(r1.a * r2.b + r2.a * r1.b, r1.b * r2.b);
    return res;
}

Rational Rational::operator++() {
    a += b;
    if (a >= b) {
        a %= b;
    }
    return *this;
}

bool Rational::operator==(const Rational& r) const {
    return a == r.a && b == r.b;
}

bool Rational::operator>(const Rational& r) const {
    return a * r.b > r.a * b;
}

Rational& Rational::operator=(const Rational& r) {
    a = r.a;
    b = r.b;
    return *this;
}

Rational operator-(const Rational& r1, const Rational& r2) {
    Rational res(r1.a * r2.b - r2.a * r1.b, r1.b * r2.b);
    return res;
}

Rational::~Rational() {
    cout << "Destroying fraction " << a << "/" << b << endl;
}
