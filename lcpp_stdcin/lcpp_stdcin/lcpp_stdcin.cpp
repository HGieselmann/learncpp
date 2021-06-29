#include <iostream>

int main()
{
    std::cout << "Please enter a number: ";

    int x{};
    std::cin >> x;
    std::cout << "You entered a value of " << x << ". \n";

    std:: cout << "Please enter two numbers seperated by a 'space': ";
    int y {};
    std::cin >> x >> y;
    std::cout << "You entered the values " << x << " and " << y << ".";

    return 0;
    
}