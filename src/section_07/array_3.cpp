#include <iostream>

int main()
{
    double vektor_1[3] = {};

    for (size_t i = 0; i < 3; i++)
    {
        std::cout << "enter value #" << i+1 << ": ";
        std::cin >> vektor_1[i];
    }
    
    for (size_t i = 0; i < 3; i++)
    {
        std::cout << "value #" << i+1 << " = " << vektor_1[i]  << "\n";
    }
    

    return 0;
}
