# Task 1

## Circle Class

The Circle class is a C++ class for working with circles. It has the following properties:

    radius: the radius of the circle
    x_center: the x coordinate of the center of the circle
    y_center: the y coordinate of the center of the circle

And the following methods:

    Circle(float r, float x, float y): constructor for creating Circle objects with given radius, x_center, and y_center values.
    set_circle(float r, float x, float y): method for setting the radius, x_center, and y_center values for Circle objects.
    square(): method for calculating the area of a circle.
    triangle_around(float a, float b, float c): method for checking if a circle can be described around a triangle with sides a, b, and c.
    triangle_in(float a, float b, float c): method for checking if a triangle with sides a, b, and c can be inscribed in the circle.
    check_circle(float r, float x_cntr, float y_cntr): method for checking if a circle of radius r with the center at (x_cntr, y_cntr) intersects with the given circle.
    get_radius(): method for retrieving the radius value of a Circle object.
    get_x_center(): method for retrieving the x_center value of a Circle object.
    get_y_center(): method for retrieving the y_center value of a Circle object.

To use the Circle class, include the circle.h header file in your C++ program and create Circle objects with the Circle constructor. You can then use the set_circle method to set the radius, x_center, and y_center values for the Circle objects, and use the other methods to perform various calculations and checks with the circles.


## Tests

| Input      | Test                      |
|:-----------|:--------------------------|
| `3, 4, 5`  | `Triangle 1 is valid`     |
| `6, 8, 10` | `Triangle 2 is valid`     |
| `1, 2, 3`  | `Triangle 3 is not valid` |
