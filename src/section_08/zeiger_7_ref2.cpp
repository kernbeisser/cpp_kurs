#include <iostream>

void print_blah1(int b)
{
    b++;
}

void print_blah2(int &b)
{
    b++;
}

int print_blah3(int b)
{
    return ++b;
}

int main()
{
    int blah {73};

    std::cout << "blah vanilla: ";
    std::cout << blah << "\n";
    
    std::cout << "print_blah1 (changing only local): ";
    print_blah1(blah); std::cout << blah << "\n";
    
    std::cout << "print_blah2 (reference): ";
    print_blah2(blah); std::cout << blah  << "\n";
    
    std::cout << "print_blah3 (return of local): ";
    std::cout << print_blah3(blah) << "\n";
    
    return 0;
}
