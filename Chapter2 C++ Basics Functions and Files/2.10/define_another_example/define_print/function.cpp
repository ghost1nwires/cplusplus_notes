
#include <iostream>

void doSomething()
{
#ifdef PRINT
    std::cout << "Printing!\n";
#endif
#ifndef PRINT
    std::cout << "Not printing!\n";
#endif
}

//this will print 'Not printing' because it doesnt have any impact on any of the code in function.cpp. Further details will be explain in Header Guards