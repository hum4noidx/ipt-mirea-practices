# Task 1

## Triangle Class

This is a C++ class for representing triangles and performing various operations on them.

The Triangle class has the following properties:

    side1: length of the first side of the triangle
    side2: length of the second side of the triangle
    side3: length of the third side of the triangle

And the following methods:

    Triangle(): default constructor that initializes all sides to 0.
    Triangle(side1, side2, side3): constructor that takes the lengths of the three sides as arguments.
    getSide1(), getSide2(), getSide3(): getter methods for the three sides.
    setSide1(side1), setSide2(side2), setSide3(side3): setter methods for the three sides.
    isTriangle(): method that returns true if the three sides form a valid triangle, false otherwise.
    getPerimeter(): method that returns the perimeter of the triangle.
    getArea(): method that returns the area of the triangle.

## Files

The implementation is divided into three files:

    Triangle.h: header file that defines the Triangle class and member function prototypes.
    Triangle.cpp: implementation file that contains the definitions of the Triangle class member functions.
    main.cpp: main file that creates a Triangle object and prints out its side lengths, perimeter, and area using the member functions.

## Tests

| Input      | Test                      |
|:-----------|:--------------------------|
| `3, 4, 5`  | `Triangle 1 is valid`     |
| `6, 8, 10` | `Triangle 2 is valid`     |
| `1, 2, 3`  | `Triangle 3 is not valid` |
