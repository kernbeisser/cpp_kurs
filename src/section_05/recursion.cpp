#include <iostream>

unsigned long long fac_iter(unsigned int n)
{
    unsigned long long result = 1;
    for (size_t i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

unsigned long long fac_rec(unsigned int n)
{
    if (n > 1)
    {
        return n * fac_rec(n - 1);
    }
    else
    {
        return n;
    }
}

int main()
{
    std::cout << fac_iter(10) << std::endl;
    std::cout << fac_rec(10) << std::endl;

    return 0;
}
