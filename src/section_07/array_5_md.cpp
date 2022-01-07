#include <iostream>

int main()
{
    int feld_1[3][2]{{1, 2}, {3, 4}, {5, 6}};

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            std::cout << feld_1[i][j] << " ";
        }
        std::cout << "\n";
    }

    for (size_t i = 0; i < 3; i++)
    {
        std::cout << "(" << feld_1[i][0] << ", " << feld_1[i][1] << ")\n";
    }

    return 0;
}
