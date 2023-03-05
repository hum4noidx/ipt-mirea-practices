#include "figure.h"
#include <iostream>
#include <cmath>

using namespace std;

Figure::Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {
    this->x1 = x1;
    this->x2 = x2;
    this->x3 = x3;
    this->x4 = x4;
    this->y1 = y1;
    this->y2 = y2;
    this->y3 = y3;
    this->y4 = y4;

    float d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float d2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float d3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    float d4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
    perimeter = d1 + d2 + d3 + d4;

    float p = perimeter / 2;
    float a1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float a2 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    float b1 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float b2 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
    float s1 = (a1 + b1 + d1) / 2;
    float s2 = (a2 + b2 + d3) / 2;
    area = sqrt(s1 * (s1 - a1) * (s1 - b1) * (s1 - d1)) + sqrt(s2 * (s2 - a2) * (s2 - b2) * (s2 - d3));
}

void Figure::show() {
    cout << "x1 = " << x1 << ", y1 = " << y1 << endl;
    cout << "x2 = " << x2 << ", y2 = " << y2 << endl;
    cout << "x3 = " << x3 << ", y3 = " << y3 << endl;
    cout << "x4 = " << x4 << ", y4 = " << y4 << endl;
    cout << "area = " << area << endl;
    cout << "perimeter = " << perimeter << endl;
}

bool Figure::is_prug() {
    float a1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float a2 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    float b1 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float b2 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
    if ((a1 == a2 && b1 == b2) || (a1 == b2 && a2 == b1)) {
        return true;
    } else {
        return false;
    }
}

bool Figure::is_square() {
    float a1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float a2 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    float b1 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float b2 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
    if (a1 == a2 && a2 == b1 && b1 == b2) {
        return true;
    } else {
        return false;
    }
}

bool Figure::is_romb() {
    float a1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float a2 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    float b1 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float b2 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
    if ((a1 == a2 && b1 == b2) || (a1 == b1 && a2 == b2) || (a1 == b2 && a2 == b1)) {
        return true;
    } else {
        return false;
    }
}

bool Figure::is_in_circle() {
    float d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float d2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float d3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    float d4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
    float maxd = max(max(d1, d2), max(d3, d4));
    float R = maxd / 2;
    float a1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float a2 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    float b1 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float b2 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
    float c1 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    float c2 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));

    if (a1 > R || a2 > R || b1 > R || b2 > R || c1 > R || c2 > R) {
        return false;
    } else {
        return true;
    }
}

bool Figure::is_out_circle() {
    float a1 = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    float a2 = sqrt(pow(x4-x3,2) + pow(y4-y3,2));
    float b1 = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
    float b2 = sqrt(pow(x1-x4,2) + pow(y1-y4,2));

    float s = (a1 + a2 + b1 + b2) / 2;
    float A = sqrt((s-a1) * (s-a2) * (s-b1) * (s-b2));

    float R = (a1 * a2 * b1 * b2) / (4 * A);

    float d1 = sqrt(pow((x2+x4)/2 - (x1+x3)/2, 2) + pow((y2+y4)/2 - (y1+y3)/2, 2));
    float d2 = sqrt(pow((x3+x1)/2 - (x2+x4)/2, 2) + pow((y3+y1)/2 - (y2+y4)/2, 2));
    if (d1 <= R && d2 <= R) {
        return true;
    }
    else {
        return false;
    }
}