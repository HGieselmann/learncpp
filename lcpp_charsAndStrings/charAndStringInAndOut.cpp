#include "charAndStringInAndOut.h"
#include <iostream>
#include <string>

void runCode()
{
    char a { 'a'};
    std::cout << "Please, enter a character: ";
    char userDefinedChar {};
    std::cin >> userDefinedChar;
    std::cout << a << " and " << userDefinedChar << '\n';

    std::string b {"string:"};
    std::string userDefinedString {};

    std::getline(std::cin >> std::ws, userDefinedString);
    std::cout << b << "\n";
    std::cout << userDefinedString << " \n";
    std::cout << userDefinedString << " contains " << userDefinedString.length() << " characters. \n";
}
