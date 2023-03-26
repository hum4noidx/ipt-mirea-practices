#include "Cone.h"
#include <iostream>
#include <cmath>

using namespace std;

// Constructor by default
Cone::Cone() : x(0), y(0), z(0), r(0), h(0) {}

// Constructor of a cone with a given radius and height
Cone::Cone(double r, double h) : x(0), y(0), z(0), r(r), h(h) {}

// Constructor of a cone with a given center, radius and height
Cone::Cone(double x, double y, double z, double r, double h) : x(x), y(y), z(z), r(r), h(h) {}

// Method of inputting data
void Cone::input() {
    cout << "Enter the coordinates of the center of the base (x, y, z): ";
    cin >> x >> y >> z;
    cout << "Enter the radius of the base: ";
    cin >> r;
    cout << "Enter the height: ";
    cin >> h;
}

// Method of outputting data
void Cone::output() const {
    cout << "Coordinates of the center of the base: (" << x << ", " << y << ", " << z << ")" << endl;
    cout << "Radius of the base: " << r << endl;
    cout << "Height: " << h << endl;
}

// Method of calculating the surface area
double Cone::surfaceArea() const {
    double L = sqrt(pow(r, 2) + pow(h, 2)); // Length of the lateral surface
    return M_PI * r * L + M_PI * pow(r, 2); // Surface area

}

// Method of calculating the volume
double Cone::volume() const {
    return M_PI * pow(r, 2) * h / 3; // Volume
}

