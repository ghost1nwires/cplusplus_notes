## Type decuction for functions

*(mom, help i lose motivation to study at this state)*

### Downsides of return type deduction

Functions that use an auto return type must be fully defined before they can be used (a forward declaration is not sufficient). 

For example:

```c++
#include <iostream>

auto foo();

int main()
{
    std::cout << foo() << '\n'; // the compiler has only seen a forward declaration at this point

    return 0;
}

auto foo()
{
    return 5;
}
On the author’s machine, this gives the following compile error:
```

> error C3779: 'foo': a function that returns 'auto' cannot be used before it is defined.

This makes sense: a forward declaration does not have enough information for the compiler to deduce the function’s return type. This means normal functions that return auto are typically only callable from within the file in which they are defined.

When using type deduction with objects, the initializer is always present as part of the same statement, so it’s usually not overly burdensome to determine what type will be deduced. With type deduction for functions, that is not the case -- the function’s prototype gives no indication as to what type the function actually returns. 

A good programming IDE should make clear what the deduced type of the function is, but in absence of having that available, a user would actually have to dig into the function body itself to determine what type the function returned. The odds of mistakes being made are higher. Generally we prefer to be explicit about types that are part of an interface (a function’s declaration is an interface).