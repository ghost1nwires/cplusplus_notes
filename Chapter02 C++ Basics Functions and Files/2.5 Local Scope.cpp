#include <iostream>

// An identifier’s scope determines where the identifier can be seen and used within the source code. 
// When an identifier can be seen and used, we say it is in scope. 
// When an identifier can not be seen, we can not use it, and we say it is out of scope.
// x is not in scope anywhere in this function
void doSomething()
{
    std::cout << "Helu Malaysian!\n";
}

int main()
{
    // x can not be used here because it's not in scope yet

    int x{ 0 }; // x enters scope here and can now be used within this function

    doSomething();

    return 0;
} // x goes out of scope here and can no longer be used