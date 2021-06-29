#include "Debug.h"
#include "mathOperations.h"
#include <iostream>


int add(const int x, const int y)
{
#ifdef ENABLE_DEBUG
std::cerr << "*debug* Adding values x: " << x << ", y: " << y << " *debug*";
#endif
    return x + y;
}

int subtract(const int x, const int y)
{
#ifdef ENABLE_DEBUG
std::cerr << "*debug* Subtracting values x: " << x << ", y: " << y << " *debug*";
#endif
    return x - y;
}

int multiply(const int x,const int y)
{
#ifdef ENABLE_DEBUG
std::cerr << "*debug* Multiplying values x: " << x << ", y: " << y << " *debug*";
#endif
    return x * y;
}