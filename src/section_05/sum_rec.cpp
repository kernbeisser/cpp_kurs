#include <iostream>

unsigned long sum(unsigned int n)
{
    if (n > 1)
    {
        return n + sum(n - 1);
    }
    else
    {
        return n;
    }
}

int main()
{
    std::cout << sum(100) << std::endl;

    return 0;
}
