#include <iostream>

int getUserInput();
int add(int x, int y);

int main()
{
    int x{getUserInput()};
    int y{getUserInput()};

    std::cout << "The sum is: " << add(x, y) << ".";
    return 0;
}
