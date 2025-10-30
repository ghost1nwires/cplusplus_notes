#include <iostream>

template <typename T>
T max(T x, T y)
{
    return (x < y) ? y : x;
}

int main()
{
    std::cout << max(2, 3.5) << '\n';  // compile error

    return 0;
}

// compile error: no matching function for call to 'max(int, double)'

// In our function call max(2, 3.5), we’re passing arguments of two different types: one int and one double. Because we’re making a function call without using angled brackets to specify an actual type, the compiler will first look to see if there is a non-template match for max(int, double). It won’t find one.

// There is no type for T that would allow the compiler to instantiate function template max<T>(T, T) into a function with two different parameter types. Put another way, because both parameters in the function template are of type T, they must resolve to the same actual type.

// You might wonder why the compiler didn’t generate function max<double>(double, double) and then use numeric conversion to type convert the int argument to a double. The answer is simple: type conversion is done only when resolving function overloads, not when performing template argument deduction. 

