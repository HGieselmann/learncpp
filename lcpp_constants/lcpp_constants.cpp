#include <iostream>

// different declaration for constants, see header files for explainations
#include "constants.h" // using the header way
#include "cppFileConstants.h" // using the cpp file way using external

int main()
{
    std::cout << "The constant value for gravity we are using is:\t" << constants::gravity << '\n';
    std::cout << "The approximation value for PI we are using is:\t" << constants::pi << '\n';
    std::cout << "----------------------------------------------------------" << '\n';
    std::cout << "The constant value for gravity we are using is:\t" << cppConstants::gravity << '\n';
    std::cout << "The approximation value for PI we are using is:\t" << cppConstants::pi << '\n';
    return 0;
}