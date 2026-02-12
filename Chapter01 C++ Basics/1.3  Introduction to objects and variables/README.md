# Introduction of objects and variables

**Functions** are groups of statements that execute sequentially. 

The **statements** inside the function perform actions that (hopefully) generate whatever result the program was designed to produce.

In computing, **data** is any information that can be moved, processed, or stored by a computer.

In programming, a single piece of data is called a value (sometimes called a data value). Common examples of values include:

- `Numbers` (e.g. `5` or `-6.7`).
- `Characters`, which are placed between single-quotes (e.g. `'H'` or `'$'`). Only a single symbol may be used.
- `Text`, which must be placed between double-quotes (e.g. `"Hello"` or `"H"`). Text can contain 0 or more characters.

Meanwhile, **literals** are values that are stored directly into the source code.

For example,

```c++
#include <iostream> // for std::cout

int main()
{
    std::cout << 5;       // print the literal number `5`
    std::cout << -6.7;    // print the literal number `-6.7`
    std::cout << 'H';     // print the literal character `H`
    std::cout << "Hello"; // print the literal text `Hello`

    return 0;
}
```

## Objects and variables

Direct memory access is denied, so we must access memory idirectly. An **object** represents a region of storage (typically RAM or CPU register)

We often name our object as identifir, also known as **variable**.

## Variable definition

In order to use variable in our program, we need to tell the compiler that we want one. Most common wy is use special declaraion called **definition**

For example

```c++
int x; // define a variable named x (of type int)
```

## Variable creation

At runtime (when the program is loaded into memory and run), each object is given an actual storage location (such as RAM, or a CPU register) that it can use to store values. The process of reserving storage for an object’s use is called allocation. Once allocation has occurred, the object has been created and can be used.

For the sake of example, let’s say that variable x is instantiated at memory location 140. Whenever the program uses variable x, it will access the value in memory location 140.