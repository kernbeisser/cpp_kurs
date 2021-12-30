#include <iostream>

int main()
{
    int feld_1[]{1, 2, 3, 4, 5};

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << feld_1[i] << ": ";
        std::cout << &feld_1[i] << "\n";
    }
    

    return 0;
}
