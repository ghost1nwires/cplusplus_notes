# Chapter 12.8 Null pointers

This folder contains materials for Chapter 12.8 Null pointers.

Pointers, which are objects that hold the address of another object. This address can be dereferenced using the dereference operator (*) to get the object at that address:

```cpp
#include <iostream>

int main()
{
    int x{ 5 };
    std::cout << x << '\n'; // print the value of variable x

    int* ptr{ &x }; // ptr holds the address of x
    std::cout << *ptr << '\n'; // use dereference operator to print the value of the object at the address that ptr is holding (which is x's address)

    return 0;
}
```