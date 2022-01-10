#include <iostream>
#include <iomanip>

int main()
{
    const unsigned int SIZE = 10;
    int *a = new int[SIZE];

    for (size_t i = 0; i < SIZE; i++)
    {
        a[i] = (i + 1) * (i + 1);
    }

    for (size_t i = 0; i < SIZE; i++)
    {
        std::cout << std::setw(3) << a[i] << "\n";
    }

    std::cout << "Abbuzze...\n";
    delete[] a;

    return 0;
}
