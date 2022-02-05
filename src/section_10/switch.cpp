#include <iostream>

enum acl
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4
};

void check_acl(acl access_level)
{
    switch (access_level)
    {
    case acl::ADMIN:
        std::cout << "Howdy, Admin!"
                  << "\n";
        break;

    case acl::INSTRUCTOR:
        std::cout << "Morsche, Instructor!"
                  << "\n";
        break;

    case acl::TUTOR:
        std::cout << "Tach, Tutor!"
                  << "\n";
        break;

    case acl::STUDENT:
        std::cout << "Ei, ein Student..."
                  << "\n";
        break;

    default:
        std::cout << "go away!"
                  << "\n";
        break;
    }
}

int main()
{
    acl harry = acl::STUDENT;
    acl hermione = acl::INSTRUCTOR;
    acl ronald = acl::STUDENT;
    acl neville = acl::STUDENT;

    check_acl(harry);
    check_acl(hermione);
    check_acl(ronald);
    check_acl(neville);

    return 0;
}
