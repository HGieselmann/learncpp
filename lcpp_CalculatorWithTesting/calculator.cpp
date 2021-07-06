#include "calculator.h"

#include <iostream>

int calculate(int x, int y, char operation)
{
    switch (operation)
    {
    case '+':
        return add(x, y);
    case '-':
        return subtract(x, y);
    case '*':
        return multiply(x, y);
    case '/':
        return divide(x, y);
    default:
        return 0;
    }
}


int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    if(y != 0)
    {
        return x / y;
    }else
    {
        std::cerr << "Error - can not divide by zero.";
        std::exit(1);
    }
}
