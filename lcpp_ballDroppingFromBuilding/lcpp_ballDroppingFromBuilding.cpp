#include <iostream>

#include "get_user_input.h"
#include "calculate_distance_to_ground.h"

void printResult(double building_height, int seconds);

int main()
{
    const double building_height{get_building_height()};
    printResult(building_height, 0);
    printResult(building_height, 1);
    printResult(building_height, 2);
    printResult(building_height, 3);
    printResult(building_height, 4);
    printResult(building_height, 5);
}

void printResult(double building_height, int seconds)
{
    double distance_to_ground{calculate_distance_to_ground(building_height, seconds)};
    if (distance_to_ground > 0)
        std::cout << "At 0 seconds, the ball is at height: " << distance_to_ground << "\n";
    else
        std::cout << "The ball is at the ground.";
}
