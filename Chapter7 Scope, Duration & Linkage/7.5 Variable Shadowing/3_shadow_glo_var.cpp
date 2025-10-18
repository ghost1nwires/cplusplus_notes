#include <iostream>
int value { 5 }; // global variable

void foo()
{
    std::cout << "global variable value: " << value << '\n'; // value is not shadowed here, so this refers to the global value
}

int main()
{
    int value { 7 }; // hides the global variable value (wherever local variable value is in scope)

    ++value; // increments local value, not global value

    std::cout << "local variable value: " << value << '\n';

    foo();

    return 0;
} // local value is destroyed