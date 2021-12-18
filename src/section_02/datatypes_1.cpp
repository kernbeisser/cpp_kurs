#include <iostream>
#include <iomanip>
#include <limits>

int main()
{
    // sizeof()
    char a = 'c';
    short b = 2;
    int c = 3;
    long long int d = 4;
    float e = 5.0;
    double f = 6.0;

    std::cout << "Short memory size in Bytes: " << sizeof(b) << std::endl;
    std::cout << "Char memory size in Bytes: " << sizeof(a) << std::endl;
    std::cout << "Integer memory size in Bytes: " << sizeof(c) << std::endl;
    std::cout << "Long memory size in Bytes: " << sizeof(d) << std::endl;
    std::cout << "Float memory size in Bytes: " << sizeof(e) << std::endl;
    std::cout << "Double memory size in Bytes: " << sizeof(f) << std::endl;

    // stl
    std::cout << std::setw(20) << std::numeric_limits<short>::max() << "\n";
    std::cout << std::setw(20) << std::numeric_limits<short>::max() << "\n";
    std::cout << std::setw(20) << std::numeric_limits<short>::max() << "\n";
    std::cout << std::setw(20) << std::numeric_limits<int>::min() << "\n";
    std::cout << std::setw(20) << std::numeric_limits<short>::min() << "\n";
    std::cout << std::setw(20) << std::numeric_limits<int>::max() << "\n";
    std::cout << std::setw(20) << std::numeric_limits<long long>::min() << "\n";
    std::cout << std::setw(20) << std::numeric_limits<long long>::max() << "\n";
    std::cout << std::setw(20) << std::numeric_limits<long>::max() << "\n";
    std::cout << std::setw(20) << std::numeric_limits<float>::min() << "\n";
    std::cout << std::setw(20) << std::numeric_limits<float>::max() << "\n";
    std::cout << std::setw(20) << std::numeric_limits<double>::min() << "\n";
    std::cout << std::setw(20) << std::numeric_limits<double>::max() << "\n";

    std::cout << LLONG_MIN << "\n";
    std::cout << CHAR_MIN << "\n";
    std::cout << CHAR_MAX << "\n";

    return 0;
}
