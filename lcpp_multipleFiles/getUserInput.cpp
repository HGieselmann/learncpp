#include <iostream>

int getUserInput()
{
    std::cout << "Please enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}