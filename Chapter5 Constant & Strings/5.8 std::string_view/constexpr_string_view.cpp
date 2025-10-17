#include <iostream>
#include <string_view>

int main()
{
    constexpr const char s[] = "Hello, world!"; // s is a string literal constant
    std::cout << s << '\n'; // s will be replaced with "Hello, world!" at compile-time

    return 0;
}