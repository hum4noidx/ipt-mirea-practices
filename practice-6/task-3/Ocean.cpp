#include "Ocean.h"

#include <iostream>

Ocean::Ocean(std::string name, std::string location, int size, int depth, int surface_area) {
    this->name = name;
    this->location = location;
    this->size = size;
    this->depth = depth;
    this->surface_area = surface_area;
}

void Ocean::show_info() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Location: " << location << std::endl;
    std::cout << "Size: " << size << std::endl;
    std::cout << "Depth: " << depth << std::endl;
    std::cout << "Surface area: " << surface_area << std::endl;
}

std::string Ocean::get_name() {
    return name;
}

