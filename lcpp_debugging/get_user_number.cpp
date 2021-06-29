#include "get_user_number.h"
#include <iostream>

int get_user_number()
{
    std::cout << "Please, enter an integer number: ";
    int number{};
    std::cin >> number;
    return number;
}