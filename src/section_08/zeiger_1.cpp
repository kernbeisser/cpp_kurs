#include <iostream>

int main()
{
    int blah {73};
    int* p_blah {&blah};
    
    std::cout << "Wert: " << blah << " an der Adresse: ";
    std::cout << p_blah << "\n";
    std::cout << "Zeiger dereferenziert (*zeiger): " << *p_blah << std::endl;

    return 0;
}
