#include "calculator.h"

int calculate(int x, int y, char c)
{
    switch (c)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        case '%':
            return x % y;
        default:
            // TODO create an error return value;
            return 0; 
    }
}
