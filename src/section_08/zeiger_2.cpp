#include <iostream>

int main()
{
    int *p_blah = new int{73};

    std::cout << "Zeiger-Adresse: " << &p_blah << "\n";
    std::cout << "Heap-Adresse: " << p_blah << "\n";
    std::cout << "Wert auf dem Heap: " << *p_blah << std::endl;

    delete p_blah;
    // ich greife vor...
    p_blah = nullptr;

    return 0;
}
