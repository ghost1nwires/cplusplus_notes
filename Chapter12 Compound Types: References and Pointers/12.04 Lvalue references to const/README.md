# Chapter 12.4 Lvalue references to const

This folder contains materials for Chapter 12.4 Lvalue references to const.

Lvalue reference can only bind to a modifiable lvalue. This means the following is illegal:

```c++
int main()
{
    const int x { 5 }; // x is a non-modifiable (const) lvalue
    int& ref { x }; // error: ref can not bind to non-modifiable lvalue

    return 0;
}
```

In 1_modifiable_lvalue.cpp, we bind const reference ref to modifiable lvalue x. We can then use ref to access x, but because ref is const, we can not modify the value of x through ref. However, we still can modify the value of x directly (using the identifier x).

Best practice

Favor lvalue references to const over lvalue references to non-const unless you need to modify the object being referenced.

## Initializing an lvalue reference to const with rvalue

```c++
#include <iostream>

int main()
{
    const int& ref { 5 }; // okay: 5 is an rvalue

    std::cout << ref << '\n'; // prints 5

    return 0;
}
```
