#include "Cone.h"
#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    Cone cone1(1, 2, 3, 4, 5);

    std::cout << "Конус 1:" << std::endl;
    std::cout << cone1 << std::endl;
    std::cout << "Площадь поверхности: " << cone1.surfaceArea() << std::endl;
    std::cout << "Объём: " << cone1.volume() << std::endl;

    Cone cone2(6, 7, 8, 9, 10);

    std::cout << "Конус 2:" << std::endl;
    std::cout << cone2 << std::endl;
    std::cout << "Площадь поверхности: " << cone2.surfaceArea() << std::endl;
    std::cout << "Объём: " << cone2.volume() << std::endl;

    TruncatedCone truncatedCone1(4,5, 2,1);

    std::cout << "Усечённый конус 1:" << std::endl;
    std::cout << truncatedCone1 << std::endl;
    std::cout << "Площадь поверхности: " << truncatedCone1.surfaceArea() << std::endl;
    std::cout << "Объём: " << truncatedCone1.volume() << std::endl;

    TruncatedCone truncatedCone2(9, 10, 4, 2);

    std::cout << "Усечённый конус 2:" << std::endl;
    std::cout << truncatedCone2 << std::endl;
    std::cout << "Площадь поверхности: " << truncatedCone2.surfaceArea() << std::endl;
    std::cout << "Объём: " << truncatedCone2.volume() << std::endl;

    if (cone1 == cone2)
        std::cout << "Конус 1 и конус 2 равны" << std::endl;
    else
        std::cout << "Конус 1 и конус 2 не равны" << std::endl;

    if (truncatedCone1 == truncatedCone2)
        std::cout << "Усечённый конус 1 и усечённый конус 2 равны" << std::endl;
    else
        std::cout << "Усечённый конус 1 и усечённый конус 2 не равны" << std::endl;

    //динамический массив усечённых конусов с пользовательским вводом
    int n;
    std::cout << "Введите количество усечённых конусов: ";
    std::cin >> n;
    TruncatedCone* truncatedCones = new TruncatedCone[n];
    for (int i = 0; i < n; i++)
    {
        std::cout << "Введите данные для усечённого конуса " << i + 1 << std::endl;
        truncatedCones[i].input();
    }

    //вывод данных о усечённых конусах
    for (int i = 0; i < n; i++)
    {
        std::cout << "Усечённый конус " << i + 1 << ":" << std::endl;
        std::cout << truncatedCones[i] << std::endl;
        std::cout << "Площадь поверхности: " << truncatedCones[i].surfaceArea() << std::endl;
        std::cout << "Объём: " << truncatedCones[i].volume() << std::endl;
    }

    //количество усечённых конусов образованных от одного конуса
    std::cout << "Введите данные для конуса с которым хотите сверить усеченные конусы" << std::endl;
    Cone cone;
    cone.input();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (cone.output("r") == truncatedCones[i].output("r") && cone.output("h") == truncatedCones[i].output("h"))
            count++;
    }
    std::cout << "Количество усечённых конусов образованных от одного конуса: " << count << std::endl;
    //pause for exit
    std::cout << "Press enter to exit...";
    std::cin.get();
    return 0;
}