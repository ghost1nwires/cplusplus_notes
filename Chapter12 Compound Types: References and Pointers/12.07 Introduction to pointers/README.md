# Chapter 12.7 Introduction to pointers

This folder contains materials for Chapter 12.7 Introduction to pointers.


Pointers should be nothing to be scared of. Pointers are famous creatures in C. They arent that complex, but they were often abused in weird ways to use pointers make them hard to use. If you avoid stupid ways to use pointers, they are fairly easy/ 

```c++
char x{}
```

When code genereated for this definition is executed, piece of memory of RAM will be assigned to this object. For the sake of example lets say `x` is assigned to memory address `160`. Whenever we use variable `x` in an expression, the program will go to memory address `160` to access the value stored there.

