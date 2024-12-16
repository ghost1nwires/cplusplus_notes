#include <iostream> // handled by preprocessor

// All of the following statements are part of the global namespace
void foo();    // okay: function forward declaration in the global namespace
int x;         // compiles but strongly discouraged: uninitialized variable definition in the global namespace
int y{ 5 };   // compiles but discouraged: variable definition with initializer in the global namespace
x = 5;         // compile error: executable statements are not allowed in the global namespace

int main()     // okay: function definition in the global namespace
{
    return 0;
}

void goo();    // okay: another function forward declaration in the global namespace

/* Notes
A namespace is a region that allows you to declare names inside of it for the purpose
of disambiguation. The namespace provides a scope region (called namespace scope) to 
the names declared inside of it -- which simply means that any name declared inside 
the namespace won’t be mistaken for identical names in other scopes.

Global namespace

In C++, any name that is not defined inside a class, function, or a namespace is 
considered to be part of an implicitly defined namespace called the global namespace 
(sometimes also called the global scope).

*/