# Chapter 12.5 Pass by lvalue reference

This folder contains materials for Chapter 12.5 Pass by lvalue reference.

U may think that why we need reference when u can just use the variable itself

In this chapter u will learn that reference is called regularly

### Some objects are very expensive to copy

Most of types by standard library such as `std::string` are class types. Class types are expensive to copy. Whenever possible,  we want to avoid making unnnecessary copies of objects that are expensiveto copy.. especially when we will destroy those copies immediately.

### Pass by reference

So to avoid making expensive copy of an argument when calling a function is to use `pass by reference` intead of `pass by value`.When using **pass by reference** we declare a function as a reference parameter is bound to the appropriate argument. Because the reference acts as an alias for an argument, no copy of the argument is made. 

```c++
#include <iostream>

void printAddresses(int val, int& ref)
{
    std::cout << "The address of te value parameter is: " << &val << '/n';
    std::cout << "The address of te reference parameter is: " << &ref << '/n';
}

int main ()
{
    int x { 5 } ;
    std::cout << "The address of x is : " '\n';
    printAddress(x, x);

    retun 0;
}
```

the output is:
```
The address of x is: 0x7ffd16574de0
The address of the value parameter is: 0x7ffd16574de4
The address of the reference parameter is: 0x7ffd16574de0
```

We can see, argument has different address than value parameter, meaning value parameter is a diff obj. Since they have separate memory addresses,  in order for the value parameter to have the same value as the argument, the argument’s value must be copied into memory held by the value parameter.

Value parameter is separate object from argument, while reference is same treated as if it were arguments.

### Pass by reference allows us to change the value of an argument

> haaa cane boleh jadi gitu pulak en


```c++
#include <iostream>

void addOne(int& y) // y is bound to the actual object x
{
    ++y; // this modifies the actual object x
}

int main()
{
    int x { 5 };

    std::cout << "value = " << x << '\n';

    addOne(x);

    std::cout << "value = " << x << '\n'; // x has been modified

    return 0;
}
```

It print
```
value = 5
value = 6
```

In the above example, x initially has value 5. When addOne(x) is called, reference parameter y is bound to argument x. When the addOne() function increments reference y, it’s actually incrementing argument x from 5 to 6 (not a copy of x). This changed value persists even after addOne() has finished executing.

### Pass by reference can only accept modifiable lvalue arguments

Because a reference to a non-const value can only bind to a modifiable lvalue (essentially a non-const variable), this means that pass by reference only works with arguments that are modifiable lvalues. In practical terms, this significantly limits the usefulness of pass by reference to non-const, as it means we can not pass const variables or literals. 

> yea mek sens raite?

```c++
#include <iostream>

void printValue(int& y) // y only accepts modifiable lvalues
{
    std::cout << y << '\n';
}

int main()
{
    int x { 5 };
    printValue(x); // ok: x is a modifiable lvalue

    const int z { 5 };
    printValue(z); // error: z is a non-modifiable lvalue

    printValue(5); // error: 5 is an rvalue

    return 0;
}
```