#include <iostream>
#include "circle.h"

int main() {
    float r1, x1, y1;
    std::cout << "Enter the radius and coordinates for circle 1: ";
    std::cin >> r1 >> x1 >> y1;
    Circle c1(r1, x1, y1);

    float r2, x2, y2;
    std::cout << "Enter the radius and coordinates for circle 2: ";
    std::cin >> r2 >> x2 >> y2;
    Circle c2(r2, x2, y2);

    float r3, x3, y3;
    std::cout << "Enter the radius and coordinates for circle 3: ";
    std::cin >> r3 >> x3 >> y3;
    Circle c3(r3, x3, y3);

    std::cout << "Circle 1 - radius = " << c1.get_radius() << ", center = (" << c1.get_x_center() << ", " << c1.get_y_center() << ")" << std::endl;
    std::cout << "Circle 2 - radius = " << c2.get_radius() << ", center = (" << c2.get_x_center() << ", " << c2.get_y_center() << ")" << std::endl;
    std::cout << "Circle 3 - radius = " << c3.get_radius() << ", center = (" << c3.get_x_center() << ", " << c3.get_y_center() << ")" << std::endl;

    std::cout << "Area of circle 1 = " << c1.square() << std::endl;
    std::cout << "Area of circle 2 = " << c2.square() << std::endl;
    std::cout << "Area of circle 3 = " << c3.square() << std::endl;

    std::cout << "Circle 1 can be described around triangle with sides (5, 4, 5) = " << c1.triangle_around(5, 4, 5) << std::endl;
    std::cout << "Circle 1 can be inscribed with triangle with sides (5, 4, 5) = " << c1.triangle_in(5, 4, 5) << std::endl;

    std::cout << "Circle 2 can be described around triangle with sides (8.48528, 8.48528, 8) = " << c2.triangle_around(8.48528, 8.48528, 8) << std::endl;
    std::cout << "Circle 2 can be inscribed with triangle with sides (8.48528, 8.48528, 8) = " << c2.triangle_in(8.48528, 8.48528, 8) << std::endl;

    std::cout << "Circle 3 can be described around triangle with sides (4, 4, 4) = " << c3.triangle_around(4, 4, 4) << std::endl;
    std::cout << "Circle 3 can be inscribed with triangle with sides (4, 4, 4) = " << c3.triangle_in(4, 4, 4) << std::endl;

    float r4, x4, y4;
    std::cout << "Enter the radius and coordinates for a new circle to check if it intersects with circle 1: ";
    std::cin >> r4 >> x4;
    bool intersects = c1.check_circle(r4, x4, y4);
    if (intersects) {
        std::cout << "The new circle intersects with circle 1" << std::endl;
    } else {
        std::cout << "The new circle does not intersect with circle 1" << std::endl;
    }

    return 0;
}

