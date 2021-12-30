#include <iostream>

int main()
{
    int feld_1[10] = {};

    for (size_t i = 0; i < 10; i++)
    {
        feld_1[i] = i * 10;
    }
    
    for (auto &i : feld_1)
    {
        std::cout << i << "\n";
    }

    return 0;
}
