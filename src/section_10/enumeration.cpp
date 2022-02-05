#include <iostream>

enum acl
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4
};

int main()
{
    acl harry = acl::STUDENT;
    acl hermione = acl::INSTRUCTOR;
    acl ronald = acl::STUDENT;
    acl neville = acl::STUDENT;

    std::cout << "Harry: " << harry << "\n";
    std::cout << "Hermione: " << hermione << "\n";
    std::cout << "Ronald: " << ronald << "\n";
    std::cout << "Neville: " << neville << std::endl;

    return 0;
}
