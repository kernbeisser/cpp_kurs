#include <iostream>

#include "user_input.h"

int user_input()
{
    int number;
    std::cout << "enter a number: ";
    std::cin >> number;

    return number;
}
