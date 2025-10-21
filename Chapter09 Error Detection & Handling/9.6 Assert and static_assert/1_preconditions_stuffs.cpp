#include <iostream>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double getDouble(const std::string& prompt)
{
    while (true)
    {
        std::cout << prompt;
        double value{};
        std::cin >> value;

        if (!std::cin) // extraction failed
        {
            std::cin.clear(); // reset fail state
            ignoreLine();     // remove bad input
            std::cout << "Invalid input. Please try again.\n";
            continue;
        }

        ignoreLine(); // discard extra input
        return value;
    }
}

void printDivision(double x, double y)
{
    if (y == 0)
    {
        std::cerr << "Error: Cannot divide by zero.\n";
        return;
    }

    std::cout << "Result: " << (x / y) << '\n';
}

int main()
{
    double x = getDouble("Enter a decimal number for x: ");
    double y = getDouble("Enter a decimal number for y: ");

    printDivision(x, y);
    return 0;
}
