## Function Overload differentiation

In the prior lesson (11.1 -- Introduction to function overloading), we introduced the concept of function overloading, which allows us to create multiple functions with the same name, so long as each identically named function has different parameter types (or the functions can be otherwise differentiated).

In this lesson, we’ll take a closer look at how overloaded functions are differentiated. Overloaded functions that are not properly differentiated will cause the compiler to issue a compile error.

## Overload based on number of parameters

```
int add(int x, int y) // here 2 parameters
{
    return x + y;
}

int add(int x, int y, int z) // here are 3 parameters
{
    return x + y + z;
}
```

## Overload based on type of parameters

```
int add(int x, int y); //integer version
double add(double x, double y);
double add(int x, double y); mixed version
double add(double x, int y); mixed version

```

However yeorobun....

### The return type of a function is not considered for differentiation

A function return type is not considered when differentiating overloaded function.

because when u tempted to write like this..

```
int getRandomValue();
double getRandomValue();
```
we might face an error C2556

this makes sense because, as compiler, u saw this statement:

```
getRandomValue();
```

#### Name mangling

When the compiler compiles a function, it performs name mangling, which means the compiled name of the function is altered (“mangled”) based on various criteria, such as the number and type of parameters, so that the linker has unique names to work with.

For example, a function with prototype int fcn() might compile to mangled name __fcn_v, whereas int fcn(int) might compile to mangled name __fcn_i. So while in the source code, the two overloaded functions share the name fcn(), in compiled code, the mangled names are unique (__fcn_v vs __fcn_i).

There is no standardization on how names should be mangled, so different compilers will produce different mangled names.