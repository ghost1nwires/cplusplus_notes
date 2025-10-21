#include <iostream>

int main()
{
    int x { 5 };
    // x is known to the compiler at this point

    std::cout << "put value of x: "; // prompt user for input
    std::cin >> x; // read in value of x from user
    // x is no longer known to the compiler
    std::cout << "value of x is " << x << '\n';
    return 0;
}