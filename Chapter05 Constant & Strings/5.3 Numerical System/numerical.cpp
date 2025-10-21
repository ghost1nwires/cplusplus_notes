#include <iostream>

int main()
{
    int x{ 012 }; // 0 before the number means this is octal
    std::cout << x << '\n'; //it will print 10

    int y{ 0xF }; // 0x before the number means this is hexadecimal
    std::cout << y << '\n'; 
    return 0;
}
