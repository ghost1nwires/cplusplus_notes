## Non-type template parameters

So we've learn create function templates that use type template parameters.  

### Non-type parameters

A ***non-type template parameter*** is a template parameter with a fixed type that serves as a placeholder for a constexpr value passed in as a template argument.

A non-type template parameter can be any of the following types:

- An integral type
- An enumeration type
- std::nullptr_t
- A floating point type (since C++20)
- A pointer or reference to an object
- A pointer or reference to a function
- A pointer or reference to a member function
- A literal class type (since C++20)

### Defining our own non-type template parameters

```c++
#include <iostream>

template <int N> // declare a non-type template parameter of type int named N
void print()
{
    std::cout << N << '\n'; // use value of N here
}

int main()
{
    print<5>(); // 5 is our non-type template argument

    return 0;
}
```

>Here, N is a non-type template parameter — it’s a value known at compile time.

### What are non-type template parameters useful for?

Because sometimes you want to give a function or class a number, a pointer, or something constant at compile time, not at runtime.

As of C++20, function parameters cannot be constexpr. This is true for normal functions, constexpr functions (which makes sense, as they must be able to be run at runtime), and perhaps surprisingly, even consteval functions.

### Implicit conversions for non-type template arguments

```c++
#include <iostream>

template <int N> // int non-type template parameter
void print()
{
    std::cout << N << '\n';
}

int main()
{
    print<5>();   // no conversion necessary
    print<'c'>(); // 'c' converted to type int, prints 99

    return 0;
}
```

this prints:
```
5
99
```


