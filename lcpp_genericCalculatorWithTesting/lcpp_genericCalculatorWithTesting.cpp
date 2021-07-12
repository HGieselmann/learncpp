#include <iostream>

#include "calculator.h"
#include "UserInput.h"

int main()
{
    double x {get_number()};
    char op {get_operator()};
    double y {get_number()};
    double result{};

    switch (op)
    {
        case '+':
            result = add(x, y);
            break;
        case '-':
            result = subtract(x, y);
            break;
        case '*':
            result = multiply(x, y);
            break;
        case '/':
            result = divide(x, y);
            break;
        default:
            std::cerr << "Error occured. Could not determine calculation operation.";
            return 1;
    }

    std::cout << x << ' ' << op << ' ' << y << " = " << result;
    
    return 0;
}
