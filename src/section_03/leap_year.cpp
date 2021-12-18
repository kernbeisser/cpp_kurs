#include <iostream>

int main()
{

    int year;
    std::cout << "enter a year: ";
    std::cin >> year;

    bool ly = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

    if (ly)
    {
        std::cout << year << " is a leap year\n";
    }
    else
    {
        std::cout << year << " is not a leap year\n";
    }

    return 0;
}
