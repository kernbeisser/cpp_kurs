#include <iostream>

// Aufgabe 1
double array_sum(double *p_array, const unsigned int &length)
{
    double summe = 0.0;
    for (size_t i = 0; i < length; i++)
    {
        summe += p_array[i];
    }

    return summe;
}

int main()
{
    double* d = new double[100];

    for (size_t i = 0; i < 100; i++)
    {
        d[i] = i+1;
    }
    
    std::cout << array_sum(d, 100) << std::endl;

    delete [] d;
    d = nullptr;

    return 0;
}
