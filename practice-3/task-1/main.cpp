#include <iostream>
#include "eq2.h"

using namespace std;

int main() {
    QuadraticEquation eq1(1, -6, 9);
    QuadraticEquation eq2(2, 5, -3);
    QuadraticEquation eq3 = eq1 + eq2;
    double x = eq1.find_X();
    double y = eq1.find_Y(2);
    std::cout << "Root of equation 1: " << x << std::endl;
    std::cout << "Value of equation 1 at x=2: " << y << std::endl;
    x = eq2.find_X();
    y = eq2.find_Y(2);
    std::cout << "Root of equation 2: " << x << std::endl;
    std::cout << "Value of equation 2 at x=2: " << y << std::endl;
    x = eq3.find_X();
    y = eq3.find_Y(2);
    std::cout << "Root of equation 3: " << x << std::endl;
    std::cout << "Value of equation 3 at x=2: " << y << std::endl;
    return 0;
}
