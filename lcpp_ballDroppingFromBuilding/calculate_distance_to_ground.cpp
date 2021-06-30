#include "calculate_distance_to_ground.h"

#include <chrono>

double calculate_distance_to_ground(double height, int seconds)
{
    constexpr double gravity{9.8};
    double distance  = gravity * (seconds * seconds) / 2;
    return height - distance;
}
