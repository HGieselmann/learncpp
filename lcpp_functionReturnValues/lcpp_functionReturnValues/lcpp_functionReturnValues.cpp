#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;
    return num;
}

int doubleTheValue(const int value)
{
    return value * 2;
}

int main()
{
    int num{ getValueFromUser() };
    std::cout << "The double of that value is: " << doubleTheValue(num) ;
}


