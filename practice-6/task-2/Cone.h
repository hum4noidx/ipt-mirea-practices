#ifndef CONE_H
#define CONE_H

#include <iostream>

class Cone {
protected:
    double x, y, z;
    double r;
    double h;

public:
    Cone();
    Cone(double r, double h);
    Cone(double x, double y, double z, double r, double h);

    void input();
    void output() const;
    double output(std::string t) const;

    double surfaceArea() const;
    double volume() const;

    bool operator==(const Cone& other) const;
    bool operator!=(const Cone& other) const;

    friend std::istream& operator>>(std::istream& in, Cone& cone);
    friend std::ostream& operator<<(std::ostream& out, const Cone& cone);
};

class TruncatedCone : public Cone {
private:
    double R;
    double H;

public:
    TruncatedCone();
    TruncatedCone(double r, double h, double R, double H);

    void input();
    void output() const;
    double output(std::string t) const;

    double surfaceArea() const;
    double volume() const;

    bool operator==(const TruncatedCone& other) const;
    bool operator!=(const TruncatedCone& other) const;

    friend std::istream& operator>>(std::istream& in, TruncatedCone& cone);
    friend std::ostream& operator<<(std::ostream& out, const TruncatedCone& cone);
};

#endif

