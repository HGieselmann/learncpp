#include "getUserInteger.h"
#include "mathOperations.h"
#include <iostream>


int main()
{
    int x{getUserInteger()};
    int y{getUserInteger()};

    std::cout << "The sum of both is: " << add(x,y);
    
    return 0;
}