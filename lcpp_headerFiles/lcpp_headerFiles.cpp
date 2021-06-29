#include <iostream>
#include "getUserInput.h"
#include "mathOperations.h"

int main()
{
    int x{getUserInput()};
    int y{getUserInput()};

    std::cout << "The sum of x: " << x << " and y: " << y << " is: " << add(x, y) << '\n';
    std::cout << "x: " << x << " minus " << "y: " << y << " is : " << subtract(x, y) << '\n';
    std::cout << "The product of x: " << x << " and " << y << " is: " << multiply(x, y) << '\n';

    return 0;
}
