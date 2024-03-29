﻿#include "UserInput.h"

#include <iostream>

double get_number()
{
    std::cout << "Please a number for calculation: \n";
    // grabbing a double, as a way to get any number... kind of defeats the purpose of writing a calculator with templates
    // but this cannot work any other way, as the compiler has to know the type
    double x {}; 
    std::cin >> x;
    return x;
}

char get_operator()
{
    while (true)
    {
        if(std::cin.fail())
        {
            std::cin.clear();
            ignore_line();
        }
        
        std::cout << "Please enter a valid operator (+, -, *, /): \n";
        char op{};
        std::cin >> op;

        switch (op)
        {
        case '+':
        case '-':
        case '*':
        case '/':
            return op;
        default:
            std::cout << "Please enter a VALID operator. Try again.\n";
            ignore_line();
            break;
        }
        
    }
}

void ignore_line()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
