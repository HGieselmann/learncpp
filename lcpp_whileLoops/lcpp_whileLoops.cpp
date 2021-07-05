#include <iostream>

void print_alphabet();
void reverse_number_triangle();
void right_sided_number_triangle();

int main()
{
    print_alphabet();
    reverse_number_triangle();
    right_sided_number_triangle();
    return 0;
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
    std::cout << '\n';
}

void reverse_number_triangle()
{
    int iterator{25};
    while (iterator > 0)
    {
        int inner {iterator};
        while (inner > 0)
        {
            std::cout << inner << ' ';
            inner--;
        }
        std::cout << '\n';
        iterator--;
    }
}

void right_sided_number_triangle()
{
    int size{5};
    while (size > 0)
    {
        int inner {1};
        while (inner < 6)
        {
            if (inner >= size)
            {
                std::cout << inner << " ";
            }else
            {
                std::cout << "  ";
            }
            inner++;
        }
        std::cout << '\n';
        size --;
    }
}