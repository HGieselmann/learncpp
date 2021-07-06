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
    char operation{get_user_operation()};
    int y{get_user_integer()};

    int result{calculate(x, y, operation)};
    std::cout << x << " " << operation << " " << y << " = " << result;
    return 0;
}
