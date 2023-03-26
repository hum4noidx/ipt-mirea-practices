#ifndef PRACTICE_OCEAN_H
#define PRACTICE_OCEAN_H

#include <iostream>

class Ocean {
protected:
    std::string name;
    std::string location;
    int size;
    int depth;
    int surface_area;
public:
    Ocean() {}
    Ocean(std::string name, std::string location, int size, int depth, int surface_area);
    std::string get_name();
    void show_info();
};

#endif //PRACTICE_OCEAN_H
