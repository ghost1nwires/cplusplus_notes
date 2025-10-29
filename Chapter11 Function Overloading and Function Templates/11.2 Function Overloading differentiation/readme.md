## Function Overload differentiation

In the prior lesson (11.1 -- Introduction to function overloading), we introduced the concept of function overloading, which allows us to create multiple functions with the same name, so long as each identically named function has different parameter types (or the functions can be otherwise differentiated).

In this lesson, we’ll take a closer look at how overloaded functions are differentiated. Overloaded functions that are not properly differentiated will cause the compiler to issue a compile error.

## Overload based on number of parameters

```
int add(int x, int y)
{
    return x + y;
}

int add(int x, int y, int z)
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

