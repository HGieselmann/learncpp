#include <iostream>

void print_alphabet();

int main()
{
    print_alphabet();
    return 0;
}

void reverse_numbers()
{
}

void print_alphabet()
{
    // converting char to int works just fine, int to char would be a narrowing conversion
    char c = 'a';
    while (c < 123)
    {
        std::cout << c << ' ';
        c++;
    }
}
