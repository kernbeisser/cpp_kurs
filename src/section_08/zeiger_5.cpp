#include <iostream>

void print_blah(int *p)
{
    std::cout << "(print_ref) Adresse auf dem Heap: " << p << "\n";
    std::cout << "(print_ref) Adresse auf dem (localen) Stack: " << &p << "\n";
}

int main()
{
    int *p_blah = new int{73};

    std::cout << "(main) Adresse auf dem Heap: " << p_blah << "\n";
    std::cout << "(main) Adresse auf dem Stack: " << &p_blah << "\n";

    print_blah(p_blah);

    delete p_blah;
    p_blah = nullptr;

    return 0;
}
