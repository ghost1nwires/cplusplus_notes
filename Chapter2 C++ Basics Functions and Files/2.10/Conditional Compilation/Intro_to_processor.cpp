#include <iostream>

#define PRINT_AMIRUL

int main()
{
#ifdef PRINT_AMIRUL
    std::cout << "yeyeye\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
#endif

    return 0;
}