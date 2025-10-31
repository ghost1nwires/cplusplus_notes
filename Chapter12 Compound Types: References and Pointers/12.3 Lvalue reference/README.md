# Chapter 12.3 Lvalue reference

This folder contains materials for Chapter 12.3 Lvalue reference.

A **reference** is an alias of existing object. Once reference has been defined, any operation on the reference applied to the object being referenced. This means, we can use a reference to read or modify the object being referenced. 

### Lvalues references types

An lvalue reference (commonly just called a “reference” since prior to C++11 there was only one type of reference) acts as an alias for an existing lvalue (such as a variable).

```c++

// regular types
int        // a normal int type (not an reference)
int&       // an lvalue reference to an int object
double&    // an lvalue reference to a double object
const int& // an lvalue reference to a const int object
```



#### 2 type of lvalue references

An lvalue reference to a non-const is commonly just called an “lvalue reference”, but may also be referred to as an **lvalue reference to non-const** or a **non-const lvalue reference** (since it isn’t defined using the const keyword).

An lvalue reference to a const is commonly called either an **lvalue reference to const** or a **const lvalue reference**.

>peningggg nyah

```c++
#include <iostream>

int main()
{
    int x { 5 };    // x is a normal integer variable
    int& ref { x }; // ref is an lvalue reference variable that can now be used as an alias for variable x

    std::cout << x << '\n';  // print the value of x (5)
    std::cout << ref << '\n'; // print the value of x via ref (5)

    return 0;
}
```

> yea mcm sama je nyah, belum nampak sangat usecase ni

### Modifying values through a non-const lvalue reference

refer to the cpp file, 1.cpp, Both x and ref refer to the same value (5).
So it prints 55.

### References can’t be reseated (changed to refer to another object)

Once initialized, a reference in C++ cannot be **reseated**, meaning it cannot be changed to reference another object.

```c++
#include <iostream>

int main()
{
    int x { 5 };
    int y { 6 };

    int& ref { x }; // ref is now an alias for x

    ref = y; // assigns 6 (the value of y) to x (the object being referenced by ref)
    // The above line does NOT change ref into a reference to variable y!

    std::cout << x << '\n'; // user is expecting this to print 5

    return 0;
}
```
this print `6`

### References arent objects

Perhaps surprisingly, references are not objects in C++. A reference is not required to exist or occupy storage. If possible, the compiler will optimize references away by replacing all occurrences of a reference with the referent. However, this isn’t always possible, and in such cases, references may require storage.

quiz

```c++

    int y{ 2 };
    ref = y;
    y = 3;
```

solution: `22` because line ref = y assigns the value of y (2) to ref -- it does not change ref to reference y.