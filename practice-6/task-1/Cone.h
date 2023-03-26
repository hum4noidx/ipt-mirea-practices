#ifndef CONE_H
#define CONE_H

class Cone {
private:
    double x, y, z; // Cartesian coordinates of the center of the base
    double r; // radius
    double h; // height

public:
    Cone(); // constructor by default
    Cone(double r, double h); // constructor of a cone with a given radius and height
    Cone(double x, double y, double z, double r, double h); // constructor of a cone with a given center, radius and height

    void input(); // input method
    void output() const; // output method
    double surfaceArea() const; // method of calculating the surface area
    double volume() const; // method of calculating the volume
};

#endif // CONE_H
