#include <iostream>

//Void functions don’t need a return statement

//below function is called void early return
void print1() // note: void return type
{
    std::cout << "A\n";

    return; // the function will return to the caller here (note: no return value)

    std::cout << "B"; // this will never be printed. So, the output only A
}

int print2() // note: return type of int
{
    std::cout << "A"; 

    return 5; // the function will return to the caller here

    std::cout << "B"; // this will never be printed. So, the output is A5 only
}

void printHi()
{
    std::cout << "Hi" << '\n';

    // This function does not return a value so no return statement is needed
}

int main()
{
    print1();
    std::cout << print2() << '\n';
    printHi();

    return EXIT_SUCCESS;
}