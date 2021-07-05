#include <iostream>

#include "calculator.h"
#include "inputReader.h"

int main()
{
    int x{inputreader::readNumber()};
    int y{inputreader::readNumber()};
    char operation{inputreader::readOperation()};

    if (operation != '+' || operation != '-' ||
        operation != '*' || operation != '/' ||
        operation != '%')
    {
        std::cout << "The operation you provided is not supported. \nAborting... \n";
        return 1;
    }

    int result {calculate(x, y, operation)};
    std::cout << "The result is: " << result << '\n';

    return 0;
}