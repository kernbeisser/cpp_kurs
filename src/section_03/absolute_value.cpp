#include <iostream>

int main()
{

    int number;
    std::cout << "enter a number: ";
    std::cin >> number;

    if (number <= 0)
    {
        std::cout << (-1 * number) << "\n";
    }
    else
    {
        std::cout << number << "\n";
    }
    
    //11std::cout << (number >= 0) ? number : (-1 * number);

    return 0;
}
