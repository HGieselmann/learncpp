#include <iostream>

void print_even_numbers_up_to(int target);
int sum_to(int target);

int main()
{
    print_even_numbers_up_to(20);
    std::cout << "The sum of all numbers between 0 and 5 is: " << sum_to(5) << " .\n";
    
    return 0;
}

void print_even_numbers_up_to(int target)
{
    for(int x{}; x <= target; ++x)
    {
        if(x % 2 == 0)
        {
            std::cout << x << ' ';
        }
    }
    std::cout << '\n';
}

int sum_to(int target)
{
    int sum{};
    for (int i{1}; i <= target; ++i)
    {
        sum += i;
    }
    return sum;
}