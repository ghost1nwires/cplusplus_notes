#include <iostream>

int getValue()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int getClassSize(bool inBigClassroom)
{
    if (inBigClassroom)
        return 30;
    else
        return 20;
}

int main()
{
    int x { getValue() };
    int y { getValue() };
    int max { (x > y) ? x : y };
    std::cout << "The max of " << x <<" and " << y << " is " << max << ".\n";
    // condition ? expression1 : expression2;
// If condition evaluates to true, then expression1 is evaluated, otherwise expression2 is evaluated. The : and expression2 are not optional. //

    const int classSize { getClassSize(true) };
    std::cout << "The class size is: " << classSize << '\n';

    int s { 2 };
    int t { 1 };
    int u { 10 - s > t ? s : t };
    std::cout << u;

    return 0;
}