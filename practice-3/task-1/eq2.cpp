#include "eq2.h"
#include <iostream>
#include <cmath>

eq2::eq2(double a1, double b1, double c1) {
    set(a1, b1, c1);
    calculate_D();
}

void eq2::set(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
}

double eq2::find_X() {
    if (D < 0) {
        std::cout << "There are no real roots" << std::endl;
        return 0;
    }
    return (-b + sqrt(D)) / (2 * a);
}

double eq2::find_Y(double x1) {
    return a * x1 * x1 + b * x1 + c;
}

QuadraticEquation eq2::operator+(const eq2& other) const {
    double a_sum = a + other.a;
    double b_sum = b + other.b;
    double c_sum = c + other.c;
    return eq2(a_sum, b_sum, c_sum);
}

void eq2::calculate_D() {
    D = b * b - 4 * a * c;
}
