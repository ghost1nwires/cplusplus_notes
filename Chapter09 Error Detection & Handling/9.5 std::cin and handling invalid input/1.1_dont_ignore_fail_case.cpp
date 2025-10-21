#include <iostream>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool hasUnextractedInput()
{
    return std::cin.peek() != '\n' && std::cin.peek() != EOF;
}

double getDouble()
{
    while (true)
    {
    std::cout << "Enter a decimal number: ";
    double x{};
    std::cin >> x;
     if (hasUnextractedInput())
        {
            ignoreLine(); // remove extraneous input
            continue;
        }
    return x;
}
}

char getOperator()
{
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char operation{};
    std::cin >> operation;
    
    switch (operation)
    {
    case '+':
    case '-':
    case '*':
    case '/':
        return operation;
    default:
        std::cout << "Invalid operator. Please try again.\n";
}
}

void printResult(double x, char operation, double y)
{
    std::cout << x << ' ' << operation << ' ' << y << " is ";

    switch (operation)
    {
    case '+':
        std::cout << x + y << '\n';
        return;
    case '-':
        std::cout << x - y << '\n';
        return;
    case '*':
        std::cout << x * y << '\n';
        return;
    case '/':
        std::cout << x / y << '\n';
        return;
    }
}

int main()
{
    double x{ getDouble() };
    char operation{ getOperator() };
    double y{ getDouble() };

    printResult(x, operation, y);

    return 0;


    // What do you think happens next?


}