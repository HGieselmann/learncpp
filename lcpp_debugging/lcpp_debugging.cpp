#include "Debug.h"
#include <iostream>

#include "get_user_number.h"
#include "mathOperations.h"

void run_tests(); // forward declaration of another function in this file

int main()
{
#ifdef ENABLE_DEBUG
std::cerr << "*debug* Starting main() \n";
run_tests();
#endif

    int x{get_user_number()};
    std::cout << "You entered: " << x << "\n"; // Refactor this
    int y{get_user_number()};
    std::cout << "You entered: " << y << "\n";

    std::cout << "The sum of both is: " << add(x, y) << ". \n";
    std::cout << "The product of both is: " << multiply(x, y) << ". \n";
    std::cout << "Subracting these results in: " << subtract(x, y) << ". \n";
}

void run_tests()
{
    std::cout << "Test 1 + 1 - should be 2, is: " << add(1,1) << "\n";
    std::cout << "Test 1000 + 1000 - should be 2000, is: " << add(1000,1000) << "\n";
    std::cout << "Test 1 +  -1 - should be 0, is: " << add(1,-1) << "\n";
}
