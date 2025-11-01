#include <iostream>

int main()
{
    std::cout << 1 + 2; // 1 and 2 are rvalues, operator+ returns an rvalue

    return 0;
}