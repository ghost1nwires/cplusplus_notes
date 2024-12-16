// stdcerr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>

int getValue()
{
    std::cerr << "getValue() called\n";
    return 4;
}

int main()
{
    std::cerr << "main() called\n";
    std::cout << getValue << '\n';

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// you can use std::cerr to send error messages to the screen, the console, or a log file, making it easier to figure out what's gone wrong in your program
