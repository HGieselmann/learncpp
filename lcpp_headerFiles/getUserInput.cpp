#include <iostream>
#include "getUserInput.h"

int getUserInput()
{
    std::cout << "Please enter an integer number: ";
    int x{};
    std::cin >> x;
    return x;
}