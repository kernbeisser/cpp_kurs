#include <iostream>

int main()
{
    int feld_1[]{1, 2, 3, 4, 5};

    for (auto &i : feld_1)
    {
        std::cout << i << "\n";
    }

    // std::cout << feld_1[77] << std::endl;

    return 0;
}
