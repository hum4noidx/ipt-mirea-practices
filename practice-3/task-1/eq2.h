#ifndef EQ2_H
#define EQ2_H

class eq2 {
public:
    double a, b, c, D;

    eq2(double a1, double b1, double c1);
    void set(double a1, double b1, double c1);
    double find_X();
    double find_Y(double x1);

    eq2 operator+(const eq2& other) const;

private:
    void calculate_D();
};
using QuadraticEquation = eq2;
#endif // EQ2_H
