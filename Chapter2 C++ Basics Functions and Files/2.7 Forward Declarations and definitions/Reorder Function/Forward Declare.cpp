#include <iostream>
/*
* 
* 
int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}

int add(int x, int y)
{
    return x + y;
}


This program will not run because it has error 
The reason this program doesn’t compile is because the compiler compiles the contents of code files sequentially. When the compiler reaches the function 
call to add on line 7 of main, it doesn’t know what add is, because we haven’t defined add until line 9! That produces the error, identifier not found.
*/

// therefore, we must reorder function definitions

#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}

//That way, by the time main calls add, the compiler will already know what add is. Because this is such a simple program, this change is relatively easy to do. However, in a larger program, it can be tedious trying to figure out which functions call which other functions (and in what order) so they can be declared sequentially.

/* Furthermore, this option is not always possible.Let’s say we’re writing a program that has two functions Aand B.If function A calls function B,  
and function B calls function A, then there’s no way to order the functions in a way that will make the compiler happy. (sike!)
If you define A first, the compiler will complain it doesn’t know what B is.If you define B first, the compiler will complain that it doesn’t know what A is.*/