#include <iostream>


double getDouble()
{
    std::cout << "Enter a decimal number: ";
    double x{};
    std::cin >> x;
    return x;
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

// Enter a decimal number: 5*7
// Enter one of the following: +, -, *, or /: Enter a decimal number: 5 * 7 is 35
//The program prints the right answer, but the formatting is all messed up. Let’s take a closer look at why.

// When the user enters 5*7 as input, that input goes into the buffer. Then operator>> extracts the 5 to variable x, leaving *7\n in the buffer. Next, the program prints “Enter one of the following: +, -, *, or /:”. However, when the extraction operator was called, it sees *7\n waiting in the buffer to be extracted, so it uses that instead of asking the user for more input. Consequently, it extracts the ‘*’ character, leaving 7\n in the buffer.

// After asking the user to enter another decimal number, the 7 in the buffer gets extracted without asking the user. Since the user never had an opportunity to enter additional data and hit enter (causing a newline), the output prompts all run together on the same line.

// Although the above program works, the execution is messy. It would be better if any extraneous characters entered were simply ignored. Fortunately, it’s easy to ignore characters:
// 
}