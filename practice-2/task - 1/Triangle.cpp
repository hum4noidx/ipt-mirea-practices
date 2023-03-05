#include "Triangle.h"
#include <cmath>
Triangle::Triangle() : side1_(0), side2_(0), side3_(0) {}
Triangle::Triangle(double side1, double side2, double side3) :
        side1_(side1), side2_(side2), side3_(side3) {}

double Triangle::getSide1() const {
    return side1_;
}

double Triangle::getSide2() const {
    return side2_;
}

double Triangle::getSide3() const {
    return side3_;
}

double Triangle::getPerimeter() const {
    return side1_ + side2_ + side3_;
}

double Triangle::getArea() const {
    double s = getPerimeter() / 2;
    return sqrt(s * (s - side1_) * (s - side2_) * (s - side3_));
}

bool Triangle::isTriangle() const {
    return side1_ + side2_ > side3_ &&
           side2_ + side3_ > side1_ &&
           side1_ + side3_ > side2_;
}