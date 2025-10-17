#include <cstdint>
#include <iostream>

int main()
{
    std::uint_fast16_t sometype{ 0 };
    sometype = sometype - 1; // intentionally overflow to invoke wraparound behavior

    std::cout << sometype << '\n';

    return 0;
}