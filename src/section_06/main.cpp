#include <iostream>

#include "even_odd.h"

int main()
{
    int number;
    std::cout << "give us a number! ";
    std::cin >> number;

    if (is_even(number))
    {
        std::cout << "your number" << number << " is even\n";
    }
    else
    {
        std::cout << "your number" << number << " is odd\n";
    }

    return 0;
}
