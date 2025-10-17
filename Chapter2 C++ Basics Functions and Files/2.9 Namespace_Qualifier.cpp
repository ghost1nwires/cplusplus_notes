#include <iostream>

/*
A namespace is a region that allows you to declare names inside of it for the purpose 
of disambiguation. The namespace provides a scope region (called namespace scope) to 
the names declared inside of it -- which simply means that any name declared inside 
the namespace won’t be mistaken for identical names in other scopes.

The most straightforward way to tell the compiler that we want to use cout from 
the std namespace is by explicitly using the std:: prefix.
*/
int main()
{
    std::cout << "Hello world!"; // when we say cout, we mean the cout defined in the std namespace
    return 0;
}


/*
The :: symbol is an operator called the scope resolution operator

The word std at the left of :: is the identifier of the namespace the name at the right of ::

If there was no identifier to the left of :: provided, global namespace is assumed
*/