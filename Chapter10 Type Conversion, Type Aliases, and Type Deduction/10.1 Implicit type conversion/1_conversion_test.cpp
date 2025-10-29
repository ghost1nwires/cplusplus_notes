#include <iostream>
#include <cstring>

int main()
{
    int n { 3 };                        // here's int value 3
    float f {};                         // here's our float variable
    std::memcpy(&f, &n, sizeof(float)); // copy the bits from n into f
    std::cout << f << '\n';             // print f (containing the bits from n)

    return 0;

}
