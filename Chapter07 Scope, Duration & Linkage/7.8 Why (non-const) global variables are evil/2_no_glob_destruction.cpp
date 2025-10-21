#include <iostream>

namespace constants
{
    constexpr double gravity { 9.8 }; // will not collide with other global variables named gravity
}

int main()
{
    std::cout << constants::gravity << '\n'; // clear this is a global variable (since namespaces are global)

    return 0;
}