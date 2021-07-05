#include "inputReader.h"

#include <iostream>

namespace inputreader
{
    int readNumber()
    {
        std::cout << "Please enter an integer number: ";
        int input{};
        std::cin >> input;
        return input;
    }

    char readOperation()
    {
        std::cout << "Please enter an operation sign (+,-,*,/,%): ";
        char input{};
        std::cin >> input;
        return input;
    }
}