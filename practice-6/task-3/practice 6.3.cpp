#include "iostream"
#include "windows.h"
#include "Ocean.h"
#include "Sea.h"
#include "Bay.h"


int main () {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

        Ocean* arctic_ocean = new Ocean("Arctic Ocean", "Arctic", 14056000, 1205, 14894000);
        arctic_ocean->show_info();
        std::cout << std::endl;

        Sea* laptev_sea = new Sea("Laptev Sea", "Arctic", 563300, 574, 662100, arctic_ocean);
        laptev_sea->show_info();
        std::cout << std::endl;

        Sea* caspian_sea = new Sea("Caspian Sea", "Central Asia", 143000, 1025, 371000, nullptr);
        caspian_sea->show_info();
        std::cout << std::endl;

        Sea* baltic_sea = new Sea("Baltic Sea", "Northern Europe", 393000, 55, 415400, nullptr);
        Bay* botnic_gulf = new Bay("Botnic Gulf", "Northern Europe", 117000, 50, 357400, baltic_sea);
        botnic_gulf->show_info();


        delete arctic_ocean;
        delete laptev_sea;
        delete caspian_sea;
        delete baltic_sea;
        delete botnic_gulf;

        return 0;
}