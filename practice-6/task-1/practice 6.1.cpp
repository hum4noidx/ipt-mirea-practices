#include <iostream>
#include "Cone.h"
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

// Creating static objects
    Cone cone1(5, 10); // A cone with the center at the origin, radius 5, and height 10
    Cone cone2(2, 3, 4, 6, 8); // An arbitrary cone

// Computing and displaying the surface area and volume of each cone
    cout << "Cone 1 surface area: " << cone1.surfaceArea() << endl;
    cout << "Cone 1 volume: " << cone1.volume() << endl;

    cout << "Cone 2 surface area: " << cone2.surfaceArea() << endl;
    cout << "Cone 2 volume: " << cone2.volume() << endl;

// Creating a default dynamic object
    Cone *cone3 = new Cone();

// Inputting data for the dynamic object
    cone3->input();

// Displaying data and computing the surface area and volume
    cone3->output();
    cout << "Surface area: " << cone3->surfaceArea() << endl;
    cout << "Volume: " << cone3->volume() << endl;

// Freeing the memory allocated for the dynamic object
    delete cone3;

// Creating an array of 2 cones
    Cone cones[2];

// Assigning values to the array
    cones[0] = Cone(1, 2, 3, 4, 5);
    cones[1] = Cone(6, 7, 8, 9, 10);

// Displaying data and computing the surface area and volume for each cone in the array
    for (int i = 0; i < 2; i++) {
        cones[i].output();
        cout << "Surface area: " << cones[i].surfaceArea() << endl;
        cout << "Volume: " << cones[i].volume() << endl;
    }

    return 0;

}