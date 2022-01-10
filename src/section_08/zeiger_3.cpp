#include <iostream>

void print_blah(int* a)
{
    std::cout << "Adresse auf dem (localen) Stack: "  << &a << std::endl;
}

int main()
{
    int *p_blah = new int{73};

    std::cout << "Adresse auf dem Heap: " << p_blah << "\n";
    std::cout << "Adresse auf dem Stack: "  << &p_blah << "\n";
    print_blah(p_blah);

    delete p_blah;
    // ich greife vor...
    p_blah = nullptr;

    return 0;
}
