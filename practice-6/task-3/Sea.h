#ifndef PRACTICE_SEA_H
#define PRACTICE_SEA_H

#include "Ocean.h"

class Sea : public Ocean {
protected:
    Ocean* parent_ocean;
public:
    Sea();
    Sea(std::string name, std::string location, double size, double depth, double surfaceArea, Ocean* ocean);
    std::string get_name();
    void show_info();
    void show_parent_info();
};


#endif //PRACTICE_SEA_H
