// correct_code_after_debug.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int getValue()
{
    std::cerr << "getValue() called\n";
    return 4;
}

int main()
{
    std::cerr << "main() called\n";
    std::cout << getValue() << '\n'; // added parenthesis here

    return 0;
}

// This will print main() called
// getValue() called
// 4

// now we can remove the temporary debugging statements