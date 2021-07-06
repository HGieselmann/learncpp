#include "unittests.h"

#include <iostream>

#include "calculator.h"

void run_all_tests()
{
    int testResult{run_calculator_tests()};
    if (testResult != 0)
    {
        std::cout << "Error occured on Test: " << testResult << '\n';
    }
    else
    {
        std::cout << "All tests passed. Let's get calculating. \n";
    }
}

int run_calculator_tests()
{
    // Add
    if (calculate(5, 5, '+') != 10) return 1;
    if (calculate(5, -5, '+') != 0) return 2;
    if (calculate(-5, 5, '+') != 0) return 3;
    if (calculate(-5, -5, '+') != -10) return 4;
    // Subtract
    if (calculate(5, 5, '-') != 0) return 5;
    if (calculate(5, -5, '-') != 10) return 6;
    if (calculate(-5, 5, '-') != -10) return 7;
    if (calculate(-5, -5, '-') != 0) return 8;
    // Multiply
    if (calculate(5, 5, '*') != 25) return 9;
    if (calculate(5, -5, '*') != -25) return 10;
    if (calculate(-5, 5, '*') != -25) return 11;
    if (calculate(-5, -5, '*') != 25) return 12;
    // divide
    if (calculate(5, 5, '/') != 1) return 13;
    if (calculate(5, -5, '/') != -1) return 14;
    if (calculate(-5, 5, '/') != -1) return 15;
    if (calculate(-5, -5, '/') != 1) return 16;

    return 0;
}
