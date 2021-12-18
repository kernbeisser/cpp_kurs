#include <iostream>

int main()
{
    unsigned short number;
    std::cout << "enter a number: ";
    std::cin >> number;

    if (number >= 0 && number <= 10)
    {
        if (number == 4)
            std::cout << "you did it! \n";
        else
            std::cout << "nope! \n";
    }
    else
        std::cout << "Booh!\n";

    return 0;
}
