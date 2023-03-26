#include "Bay.h"

#include <iostream>

Bay::Bay() {
    this->parentWaterBody = nullptr;
}

Bay::Bay(std::string name, std::string location, double size, double depth, double surfaceArea, Ocean* parentWaterBody)
        : Ocean(name, location, size, depth, surfaceArea), parentWaterBody(parentWaterBody) {}

std::string Bay::get_name() {
    return name;
}

void Bay::show_info() {
    Ocean::show_info();
    std::cout << "Parent water body: " << parentWaterBody->get_name() << std::endl;
}

void Bay::show_parent_info() {
    if (parentWaterBody != nullptr)
        parentWaterBody->show_info();
    else
        std::cout << "Parent doesn't exist" << std::endl;
}