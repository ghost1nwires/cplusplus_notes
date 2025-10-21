#include <iostream>

int main()
{
    int x{ 1 };
    int y{ 2 };

    std::cout << (++x, ++y) << '\n'; // Evaluate x then y, returns value of y
    int a{ 5 };
    int b{ 6 };

    ++a;
    std::cout << ++b << '\n';

    return 0;
}