#include "Cone.h"
#include <iostream>
#include <cmath>

using namespace std;

// Default constructor
Cone::Cone() : x(0), y(0), z(0), r(0), h(0) {}

// Constructor for a cone with center at origin
Cone::Cone(double r, double h) : x(0), y(0), z(0), r(r), h(h) {}

// Constructor for an arbitrary cone
Cone::Cone(double x, double y, double z, double r, double h) : x(x), y(y), z(z), r(r), h(h) {}

// Method to input data
void Cone::input() {
    cout << "Enter the coordinates of the base center (x y z): ";
    cin >> x >> y >> z;
    cout << "Enter the base radius: ";
    cin >> r;
    cout << "Enter the height: ";
    cin >> h;
}

// Method to output data
void Cone::output() const {
    cout << "Coordinates of the base center: (" << x << ", " << y << ", " << z << ")" << endl;
    cout << "Base radius: " << r << endl;
    cout << "Height: " << h << endl;
}

// Method to output a specific data point
double Cone::output(std::string t) const {
    if (t == "r") {
        return r;
    }
    else if (t == "h") {
        return h;
    }
    else if (t == "x") {
        return x;
    }
    else if (t == "y") {
        return y;
    }
    else if (t == "z") {
        return z;
    }
    else {
        return 0;
    }
}

// Method to calculate the surface area
double Cone::surfaceArea() const {
    double L = sqrt(pow(r, 2) + pow(h, 2)); // Length of the slant
    return M_PI * r * L + M_PI * pow(r, 2); // Surface area
}

// Method to calculate the volume
double Cone::volume() const {
    return M_PI * pow(r, 2) * h / 3; // Volume
}

// Method to calculate the lateral surface area
bool Cone::operator==(const Cone& other) const {
    return x == other.x && y == other.y && z == other.z && r == other.r && h == other.h;
}

bool Cone::operator!=(const Cone& other) const {
    return !(*this == other);
}

// Friend function to input data
istream& operator>>(istream& in, Cone& cone) {
    cone.input();
    return in;
}

ostream& operator<<(ostream& out, const Cone& cone) {
    cone.output();
    return out;
}

// Constructor by default
TruncatedCone::TruncatedCone() : Cone(), R(0), H(0) {}

// Constructor of a truncated cone with a given radius and height
TruncatedCone::TruncatedCone(double r, double h, double R, double H) : Cone(r, h), R(R), H(H) {}

// Method of inputting data
void TruncatedCone::input() {
    Cone::input();
    cout << "Введите радиус верхнего основания: ";
    cin >> R;
    cout << "Введите высоту усечения: ";
    cin >> H;
}

// Method of outputting data
void TruncatedCone::output() const {
    Cone::output();
    cout << "Радиус верхнего основания: " << R << endl;
    cout << "Высота усечения: " << H << endl;
}

double TruncatedCone::output(std::string t) const {
    if (t == "R") {
        return R;
    }
    else if (t == "H") {
        return H;
    }
    else {
        return Cone::output(t);
    }
}

// Method of calculating the surface area
double TruncatedCone::surfaceArea() const {
    double L = sqrt(pow(R - r, 2) + pow(H, 2)); // Length of the slant
    return M_PI * r * L + M_PI * pow(r, 2) + M_PI * R * L + M_PI * pow(R, 2); // Surface area
}

// Method of calculating the volume
double TruncatedCone::volume() const {
    return M_PI * h * (pow(r, 2) + pow(R, 2) + r * R) / 3; // Volume
}

// Method of comparing truncated cones
bool TruncatedCone::operator==(const TruncatedCone& other) const {
    return Cone::operator==(other) && R == other.R && H == other.H;
}

bool TruncatedCone::operator!=(const TruncatedCone& other) const {
    return !(*this == other);
}

// Friend function to input data
istream& operator>>(istream& in, TruncatedCone& cone) {
    cone.input();
    return in;
}

ostream& operator<<(ostream& out, const TruncatedCone& cone) {
    cone.output();
    return out;
}
