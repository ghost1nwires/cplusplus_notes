#include <iostream>

// preferred version
int main()
{
    std::cout << "Enter an integer: ";

    int num{ };
    std::cin >> num;

    std::cout << "Double that number is: " << num * 2 << '\n'; // use an expression to multiply num * 2 at the point where we are going to print it
    std::cout << "Double that number is: " << num * 3 << '\n'; // use an expression to multiply num * 2 at the point where we are going to print it

    return 0;
}