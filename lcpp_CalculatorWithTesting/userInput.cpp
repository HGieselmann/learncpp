#include "userInput.h"

#include <iostream>

int get_user_integer()
{
    while (true)
    {
        std::cout << "Please enter an integer number: ";
        int x{};
        std::cin >> x;

        if(std::cin.fail())
        {
            std::cerr << "Please enter valid input.\n";
            std::cin.clear();
            ignore_line();
        }else
        {
            ignore_line();
            return x;
        }
    }
}

char get_user_operation()
{
    while (true)
    {
        std::cout << "Please enter a sign for operation (+, -, *, /): ";
        char c{};
        std::cin >> c;
        ignore_line();
        switch (c)
        {
            case '+':
            case '-':
            case '*':
            case '/':
                return c;
            default:
                std::cout << "Please enter a valid Operator.\n";
                break;
        }
    }
}

void ignore_line()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
