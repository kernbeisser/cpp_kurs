#include <iostream>

int main()
{
    unsigned int length;
    std::cout << "enter a side length: ";
    std::cin >> length;

    std::cout << "your square has an area of " << length * length << " sqrft\n";

    return 0;
}
