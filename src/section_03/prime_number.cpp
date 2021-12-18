#include <iostream>

int main()
{

    unsigned int number{0};
    int count{0};

    std::cout << "enter a (positive) number: ";
    std::cin >> number;

    for (size_t i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        std::cout << number << " is prime\n";
    }
    else
    {
        std::cout << number << " is not prime\n";
    }

    return 0;
}
