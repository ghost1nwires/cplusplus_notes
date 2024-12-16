// treat_warning.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int getValue()
{
    return 4;
}

int main()
{
    std::cout << getValue << '\n';

    return 0;
}

// Although we expect this program to print the value 4, it should print the value:

// 1
// On Visual Studio(and possibly some other compilers), it may print the following instead :
// 00101424 