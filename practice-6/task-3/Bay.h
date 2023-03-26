#ifndef PRACTICE_BAY_H
#define PRACTICE_BAY_H

#include "Sea.h"

class Bay : public Ocean {
protected:
    Ocean* parentWaterBody;
public:
    Bay();
    Bay(std::string name, std::string location, double size, double depth, double surfaceArea, Ocean* parentWaterBody);
    std::string get_name();
    void show_info();
    void show_parent_info();
};


#endif //PRACTICE_BAY_H
