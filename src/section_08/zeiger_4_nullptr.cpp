#include <iostream>

int main()
{
    int *p_blah = new int{73};

    std::cout << "Adresse auf dem Heap: " << p_blah << "\n";
    std::cout << "Adresse auf dem Stack: "  << &p_blah << "\n";

    delete p_blah;
    // jetzt kommt es ...
    std::cout << "Adresse nach 'delete': "  << p_blah << "\n";
    p_blah = nullptr;
    std::cout << "Adresse nach 'nullptr': "  << p_blah << "\n";

    return 0;
}
