#include "get_user_input.h"

#include <iostream>

double get_building_height()
{
    std::cout << "Please enter the height of the building in meters: ";
    double building_height;
    std::cin >> building_height;
    return building_height;
}
