#include <iostream>
#include "GetUserInput.h"
#include "mathCalculations.h"

int main ()
{
    double first_number {get_user_number()};
    double second_number {get_user_number()};
    char user_operation {get_user_operation()};

    double result{};
    if (user_operation == '+')
        result = add(first_number, second_number);
    else if (user_operation == '-')
        result = subtract(first_number, second_number);
    else if (user_operation == '*')
        result = multiply(first_number, second_number);
    else if (user_operation == '/')
        result = divide(first_number, second_number);
    else
    {
        std::cout << "Could not recognize operation, please try again.";
        return 127;
    }

    std::cout << first_number << " " << user_operation << " " << second_number << " = "<< result << '\n';
    return 0;
}