## Introduction to function overloading

Fortunately, C++ has an elegant solution to handle such cases. Function overloading allows us to create multiple functions with the same name, so long as each identically named function has different parameter types (or the functions can be otherwise differentiated). Each function sharing a name (in the same scope) is called an overloaded function (sometimes called an overload for short).

> Operators can also be overloaded in a similar manner. We’ll discuss operator overloading in 21.1 -- Introduction to operator overloading.

### Introduction to overload resolution

When function has been overloaded, the compiler will try to match the function based on the arguments used in the function call

