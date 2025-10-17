#include <iostream>

int add(int x, int y)
{
    return x + y;
}

void printResult(int z)
{
    std::cout << "The answer is: " << z << '\n';
}

int getUserInput()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    int x{ getUserInput() };
    int y{ getUserInput() };

    std::cout << x << " + " << y << '\n';

    int z{ add(x, 5) };
    printResult(z);

    return 0;
}