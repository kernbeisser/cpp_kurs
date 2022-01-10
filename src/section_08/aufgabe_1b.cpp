#include <iostream>

// Aufgabe 2
int *array_constructor(const int &value, const unsigned int &length)
{
    int *feld = new int[length];

    for (size_t i = 0; i < length; i++)
    {
        feld[i] = value;
    }

    return feld;
}

int main()
{
    const int value{5};
    const unsigned int length{3};

    for (size_t i = 0; i < length; i++)
    {
        std::cout << array_constructor(value, length)[i] << " ";
    }

    return 0;
}
