#define RUNTESTS

#include <iostream>

#include "calculator.h"
#include "userInput.h"
#include "unittests.h"

int main()
{
#ifdef RUNTESTS
    run_all_tests();
#endif

    int x{get_user_integer()};
    int y{get_user_integer()};
    char operation{get_user_operation()};

    int result{calculate(x, y, operation)};
    std::cout << "The result is : " << result;
    return 0;
}
