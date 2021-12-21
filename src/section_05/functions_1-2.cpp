#include <iostream>

int user_input()
{
    int number;
    std::cout << "enter a number: ";
    std::cin >> number;

    return number;
}

void foo()
{
    return;
}

bool is_even(int number)
{
    return number % 2 == 0;
}

int main()
{
    int n = user_input();
    if (is_even(n))
    {
        std::cout << "your number " << n << " is even" << std::endl;
    }
    else
    {
        std::cout << "your number " << n << " is odd" << std::endl;
    }

    return 0;
}
