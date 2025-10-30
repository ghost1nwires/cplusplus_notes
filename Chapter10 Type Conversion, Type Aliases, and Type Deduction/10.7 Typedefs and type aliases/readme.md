## Type aliases 

`using`   is keyword that will create an alias for data type. Create alias data type by put `using` in front of data type followed by equals sign and existing data type. For example,  

```c++
using Distance = double; // defines Distance as an alias to double
```

When the compiler encounters a type alias name, it will substitute in the aliased type. For example:

```c++
#include <iostream>

int main()
{
    using Distance = double; // define Distance as an alias for type double

    Distance milesToDestination{ 3.4 }; // defines a variable of type double

    std::cout << milesToDestination << '\n'; // prints a double value wicis 3.4

    return 0;
}
```

this alias can be templated, will cover in chapter13 -- Class template argument deduction (CTAD) and deduction guides

### Naming type aliases

There are 3 common naming conventions
1. Type aliases that end in a "_t" suffix ("_t" short for type) Often used by standard library or global use. Like `size_t` or `nullptr_t`

POSIX used this, so if we used this, it will caused type naming conflix in POSIX systems

2. Type aliases that end with `_type` suffix. This convention used by standard library like `std::string` to name nested aliases `std::string::size_type`

3. Type aliases that has no suffix 

In modern C++ convention is to name type aliases (or any other type) that you define yourself starting with a capital letter, and using no suffix. 

```c++
void printDistance(Distance distance); // Distance is some defined type
```

### Scope of type alias

So, where should we defined? 

A type alias defined inside a block has block scope and is usable only within that block, whereas a type alias defined in the global namespace has global scope and is usable to the end of the file. 

If you need to use one or more type aliases across multiple files, they can be defined in a header file and #included into any code files that needs to use the definition:


```c++
#ifndef MYTYPES_H
#define MYTYPES_H

    using Miles = long;
    using Speed = long;

#endif
```

### Typedefs

A typedef (which is short for “type definition”) is an older way of creating an alias for a type. To create a typedef alias, we use the typedef keyword:

```c++
typedef Distance double; // incorrect (typedef name first)
typedef double Distance; // correct (aliased type name first)
```

```c++
typedef int (*FcnType)(double, char); // FcnType hard to find
using FcnType = int(*)(double, char); // FcnType easier to find
```
### Ok, so for what we use type aliases?

One of the primary uses for type aliases is to hide platform specific details. On some platforms, an int is 2 bytes, and on others, it is 4 bytes. Thus, using int to store more than 2 bytes of information can be potentially dangerous when writing platform independent code. 

- Independant coding
Because char, short, int, and long give no indication of their size, it is fairly common for cross-platform programs to use type aliases to define aliases that include the type’s size in bits. For example, int8_t would be an 8-bit signed integer, int16_t a 16-bit signed integer, and int32_t a 32-bit signed integer. Using type aliases in this manner helps prevent mistakes and makes it more clear about what kind of assumptions have been made about the size of the variable.

- type aliases make complex types easier to read
- type aliases to document meaning of a value
- Using type aliases for easier code maintenance