#include "userInput.h"

#include <iostream>

int get_user_integer()
{
    std::cout << "Please enter an integer number: ";
    int x{};
    std::cin >> x;
    return x;
}

char get_user_operation()
{
    std::cout << "Please enter a sign for operation (+, -, *, /): ";
    char c{};
    std::cin >> c;
    return c;
}