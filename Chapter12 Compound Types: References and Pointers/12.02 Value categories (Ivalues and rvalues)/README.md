# Chapter 12.2 Value categories (Ivalues and rvalues)

This folder contains materials for Chapter 12.2 Value categories (Ivalues and rvalues).

As we know, expressions, is "a combination of iterals, variables, operators, and function calls that can be executed to produce a singular value"

```c++
#include <iostream>

int main()
{
    std::cout << 2 + 3 << '\n'; // The expression 2 + 3 produces the value 5

    return 0;
}
```

### Properties of an expression

Expression in c++ have 2 properties: type and value category

### Type of an expression

Type of an expression is always equivalent to value, object, or function that resulted from evaluated expression:

```c++
#include <iostream>

void print(int x)
{
    std::cout << x << '\n';
}

int main()
{
    print("foo"); // error: print() was expecting an int argument, we tried to pass in a string literal

    return 0;
}
```

In  v2   the `int` is coverted to `double`. So `double` is the type for this expression

The value category of an expression (or subexpression) indicates whether an expression resolves to a value, a function, or an object of some kind.

Prior to C++11, there were only two possible value categories: lvalue and rvalue.

In C++11, three additional value categories (glvalue, prvalue, and xvalue) were added to support a new feature called move semantics.

### Lvalue and rvalue expressions

***Lvalue*** or known as **ell-value** is short for "left value" or "locator value" 

Entities with identities can be accessed via an identifier, reference, or pointer, and typically have a lifetime longer than a single expression or statement.

```c++
int main()
{
    int x { 5 };
    int y { x }; // x is an lvalue expression

    return 0;
}
```

lvalues come in two subtypes: a **modifiable lvalue** is an lvalue whose value can be modified. A non-modifiable lvalue is an lvalue whose value **can’t be modified** (because the lvalue is const or constexpr).

```c++

int main()
{
    int x{};
    const double d{};

    int y { x }; // x is a modifiable lvalue expression
    const double e { d }; // d is a non-modifiable lvalue expression

    return 0;
}
```

**Rvalues** aren’t identifiable (meaning they have to be used immediately), and only exist within the scope of the expression in which they are used.

### Lvalue-to-rvalue conversion

```c++
int main()
{
    int x{ 1 };
    int y{ 2 };

    x = y; // y is not an rvalue, but this is legal

    return 0;
}
```

### How to diff lvalue and rvalue?

A rule of thumb to identify lvalue and rvalue expressions:

Lvalue expressions are those that evaluate to functions or identifiable objects (including variables) that persist beyond the end of the expression.

Rvalue expressions are those that evaluate to values, including literals and temporary objects that do not persist beyond the end of the expression.

