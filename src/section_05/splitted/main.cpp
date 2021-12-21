#include <iostream>

#include "user_input.h"
#include "even_odd.h"

int main()
{
    int n = user_input();
    if (is_even(n))
    {
        std::cout << "your number " << n << " is even" << std::endl;
    }
    else
    {
        std::cout << "your number " << n << " is odd" << std::endl;
    }

    return 0;
}
