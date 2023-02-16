#include "circle.h"
#include <cmath>

Circle::Circle(float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
}

void Circle::set_circle(float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
}

float Circle::square() {
    return M_PI * radius * radius;
}

bool Circle::triangle_around(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float S = sqrt(p * (p - a) * (p - b) * (p - c));
    float R = (a * b * c) / (4 * S);
    return radius >= R;
}

bool Circle::triangle_in(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float r = sqrt((p - a) * (p - b) * (p - c) / p);
    return radius <= r;
}

bool Circle::check_circle(float r, float x_cntr, float y_cntr) {
    float distance = sqrt(pow(x_center - x_cntr, 2) + pow(y_center - y_cntr, 2));
    return distance <= radius + r;
}

float Circle::get_radius() {
    return radius;
}

float Circle::get_x_center() {
    return x_center;
}

float Circle::get_y_center() {
    return y_center;
}