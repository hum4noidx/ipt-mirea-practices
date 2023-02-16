#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle {
public:
    Triangle();

    Triangle(double side1, double side2, double side3);

    double getSide1() const;

    double getSide2() const;

    double getSide3() const;

    double getPerimeter() const;

    double getArea() const;

    bool isTriangle() const;

private:
    double side1_;
    double side2_;
    double side3_;
};
#endif