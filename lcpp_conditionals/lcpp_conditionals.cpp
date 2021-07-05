// This solution explores conditional statements in C++17

#include <iostream>


bool isVowel(char c);


int main()
{
    using std::cout; // using declaration should be safe
    using std::cin; // using declaration should be safe

    isVowel('l');

    // switch example including fall through!
    int a{1};
    switch (a)
    {
        case 1:
            cout << "One" << '\n';
            // no break/return statement, will lead to fall-through !!!
        case 2:
            cout << "Two" << '\n'; // will execute as well
            // no break again.
        case 3:
            cout << "Three" << '\n'; // will execute as well
            break; // break will stop further execution
        default:
            cout << "Unknown number." << '\n';
            break;
    }   
    
    return 0;
}


bool isVowel(char c)
{
    switch (c){
        case 'a':
        case 'e': 
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}