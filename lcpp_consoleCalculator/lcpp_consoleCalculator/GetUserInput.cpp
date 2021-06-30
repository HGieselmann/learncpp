#include "GetUserInput.h"

#include <iostream>

double get_user_number()
{
    std::cout << "Please enter a double value: " ;
    double user_number;
    std::cin >> user_number;
    return user_number;
}

char get_user_operation()
{
    std::cout << "Please enter one of the following operation signs: +, -, *, / : ";
    char user_char;
    std::cin >> user_char;
    return user_char;
}
