#include <iostream>

int getUserInteger()
{
    std::cout << "Please enter an integer number: ";
    int x{};
    std::cin >> x;
    return x;
}