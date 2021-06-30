#include <iostream>

void print_value_and_size(double x)
{
    std::cout << "value: " << x << '\n';
    std::cout << "size: " << sizeof(x) << " bits " <<  '\n';
}

int main()
{    
    int x {5};                      // initializes a basic integer
    std::int_fast8_t y {5};         // initializes a fast integer of at least 8 bit
    std::int_least8_t z {5};        // initializes a memory efficient integer of at least 8 bit

    print_value_and_size(x);
    print_value_and_size(y);
    print_value_and_size(z);
    
    float a {0.1f};                  // initializes a float value
    double b {0.1};                 // initializes a float value with double precision

    print_value_and_size(a);
    print_value_and_size(b);

    bool boolean {true};            // initializes a boolean
    print_value_and_size(boolean);
}
