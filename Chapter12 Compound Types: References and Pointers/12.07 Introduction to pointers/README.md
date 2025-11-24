# Chapter 12.7 Introduction to pointers

This folder contains materials for Chapter 12.7 Introduction to pointers.


Pointers should be nothing to be scared of. Pointers are famous creatures in C. They arent that complex, but they were often abused in weird ways to use pointers make them hard to use. If you avoid stupid ways to use pointers, they are fairly easy/ 

## What are pointers?

Pointers in C++ is special type of variable that holds or stores memory address of another variable instead of storing a direct value. Rather than hold actual data like `int` and `char`, a pointer **points** to the location in memory where that data is located.

Every variable in a program is stored at a unique memory address, and pointers give us a way to directly work with those addresses. This makes them extremely powerful for tasks like dynamic memory allocation, efficient array traversal, and giving functions the ability to modify data stored elsewhere. Conceptually, this is similar to pass-by-reference, but it is done explicitly using memory addresses.

## Declaring pointerd and initialization of pointer

We must both declare and initialize pointer in a correct way. A declared pointer but not initialized, may point to an undefined memory location, often called garbage memory, which indicates leftover or unpredictable values dtored in location. If we access such memory it will lead to unpredicatable behavior and program crashed.

### Declaring pointer
The arterisk (*) has 2 diff meaning in C++

```c++
data_type* ptr_name;
```

or

```c++
data_type *ptr_name;
```

- When used in a declaration (int* ptr;), it informs the compiler that this variable is a pointer.

- When used in an expression (*ptr), it dereferences the pointer—i.e., accesses the value stored at the memory address the pointer holds.

### Initializing pointer in C++




```c++
char x {};
```

When code genereated for this definition is executed, piece of memory of RAM will be assigned to this object. For the sake of example lets say `x` is assigned to memory address `160`. Whenever we use variable `x` in an expression, the program will go to memory address `160` to access the value stored there.

