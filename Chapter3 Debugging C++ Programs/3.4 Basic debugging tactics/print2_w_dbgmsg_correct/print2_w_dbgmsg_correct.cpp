#include <iostream>

int add(int x, int y)
{
    std::cerr << "add() called (x=" << x << ", y=" << y << ")\n";
    return x + y;
}

void printResult(int z)
{
    std::cerr << "printResult() called (z=" << z << ")\n";
    std::cout << "The answer is: " << z << '\n';
}

int getUserInput()
{
    std::cerr << "getUserInput() called\n";
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cerr << "getUserInput::x = " << x << '\n';
    return x; // removed -- before x
}

int main()
{
    std::cerr << "main() called\n";
    int x{ getUserInput() };
    std::cerr << "main::x = " << x << '\n';
    int y{ getUserInput() };
    std::cerr << "main::y = " << y << '\n';

    int z{ add(x, y) };
    std::cerr << "main::z = " << z << '\n';
    printResult(z);

    return 0;
}

// The program is now working correctly. Even without understanding what -- was doing, we were able to identify the specific line of code causing the issue, and then fix the issue.