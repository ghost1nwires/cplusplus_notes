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
    std::cerr << "getUserInput::x = " << x << '\n'; // added this additional line of debugging
    return --x;
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

// Now we can immediately see something going wrong: The user is entering the value 4, but main’s x is getting value 3. 
// Something must be going wrong between where the user enters input and where that value is assigned to main’s variable x. 
// Let’s make sure that the program is getting the correct value from the user by adding some debug code to function getUserInput: