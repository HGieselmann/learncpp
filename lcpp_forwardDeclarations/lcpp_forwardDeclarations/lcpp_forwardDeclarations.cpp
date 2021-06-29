#include <iostream>

int getInput();
int calculateSum(int x, int y);
void printResult(int x, int y, int sum);

int main()
{
    int x { getInput() };
    int y { getInput() };
    printResult(x, y, calculateSum(x, y));       
}

int getInput()
{
    std::cout << "Please enter an integer Number: ";
    int x{};
    std::cin >> x;
    return x;
}

int calculateSum(int x, int y)
{
    return x + y;
}

void printResult(int x, int y, int sum)
{
    std::cout << "The sum of x: " << x << " and y: " << y << " is: " << sum << ".";
}