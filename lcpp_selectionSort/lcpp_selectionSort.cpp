#include <iostream>
#include <utility>

void selectionSort(int numbers[]);

int main()
{
    int numbers[] { 2, 5, 3, 9, 8, 6, 7, 1, 4, 0};

    selectionSort(numbers); // Array is passed as reference of course!

    std::cout << "\nSorted Array: ";
    for (int i{0}; i < sizeof(numbers)/sizeof(numbers[0]); ++i)
    {
        std::cout << i << ' ';
    }
    
}

void selectionSort(int numbers[])
{
    for (int i {0}; i < sizeof(numbers)/sizeof(numbers[0]); ++i)
    {
        std::cout << numbers[i] << ' ';
        int smallestValue{};
        int location{};
        for (int j {i + 1}; j < sizeof(numbers)/ sizeof(numbers[0]); ++j)
        {
            if (numbers[j] < smallestValue)
            {
                smallestValue = numbers[j];
                location = j;
            }
            std::swap(numbers[i], numbers[location]);
        }
    }
}