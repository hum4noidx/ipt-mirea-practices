#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    float radius;
    float x_center;
    float y_center;
public:
    Circle(float r, float x, float y);
    void set_circle(float r, float x, float y);
    float square();
    bool triangle_around(float a, float b, float c);
    bool triangle_in(float a, float b, float c);
    bool check_circle(float r, float x_cntr, float y_cntr);
    float get_radius();
    float get_x_center();
    float get_y_center();
};

#endif
