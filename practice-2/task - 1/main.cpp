#include <iostream>
#include "Triangle.h"

int main() {
    Triangle triangles[3];
    for (int i = 0; i < 3; i++) {
        double side1, side2, side3;
        std::cout << "Enter the sides of triangle " << i + 1 << ": ";
        std::cin >> side1 >> side2 >> side3;
        while (!Triangle(side1, side2, side3).isTriangle()) {
            std::cout << "Invalid triangle. Enter the sides of triangle " << i + 1 << ": ";
            std::cin >> side1 >> side2 >> side3;
        }
        triangles[i] = Triangle(side1, side2, side3);
    }
    for (int i = 0; i < 3; i++) {
        std::cout << "Triangle " << i + 1 << " perimeter: " << triangles[i].getPerimeter() << std::endl;
        std::cout << "Triangle " << i + 1 << " area: " << triangles[i].getArea() << std::endl;
    }
    return 0;
}