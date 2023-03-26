#include "Sea.h"

#include <iostream>

Sea::Sea() {
    this->parent_ocean = nullptr;
}

Sea::Sea(std::string name, std::string location, double size, double depth, double surfaceArea, Ocean* ocean)
        : Ocean(name, location, size, depth, surfaceArea), parent_ocean(ocean) {}

std::string Sea::get_name() {
    return name;
}

void Sea::show_info() {
  Ocean::show_info();
  if (parent_ocean != nullptr)
      std::cout << "Parent body of water: " << parent_ocean->get_name() << std::endl;
  else
      std::cout << "Parent body of water: None" << std::endl;

}

void Sea::show_parent_info() {
    if (parent_ocean != nullptr)
        parent_ocean->show_info();
    else
        std::cout << "Parent doesn't exist" << std::endl;
}