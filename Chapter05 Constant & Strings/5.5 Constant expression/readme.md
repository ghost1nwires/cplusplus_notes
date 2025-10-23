## Constant expression

By default, expression evaluate at runtime. For example,

```
std::cin >> x;
std::cout << 5 >> '\n\;

````
In 5.4 we discuss as-if rule and compile optimization,  and how compiler can optimize programs by shifting work from runtime to compile-time. 

Some other stories, C++ requires expression that can be evaluated at compile-time. For instance, constexpr variables require an initializer that can be evaluated at compile-time:

```
int main()
[
    constexpr int x {expr}; // because variable x is constantexpr, expr must be evaluate at compile-time

]
```

C++ standard barely mentions “compile-time” at all. Instead, the standard defines a “constant expression”, which is an expression that must be evaluatable at compile-time, along with rules that determine how the compiler should handle these expressions. Constant expressions form the backbone of compile-time evaluation in C++

A *constant expression* is a non-empty sequence of literals, constant variables, operators, and function calls, all of which must be evaluatable at compile-time. The key difference is that in a constant expression, each part of the expression must be evaluatable at compile-time.

### What can be in a constant expression?

Constane expression can be quite complex but here is the common constant expresion contains the following:

- Literals
- Most operators
- Const integral variables with constants initializer (const int x {5};)
- Constexpr variables (Chapter 5.6)
- Constexpr function calls with constant expression arguments. (Chapter F.1)

## Why on earth that compile-time expression must be constant?

Ok, so why compile-time expression can only contain constant objects?

Because constants cannot have their values changed, a constant variable whose initializer is evaluatable at compile-time will always have a value that is known at compile-time. This keeps things simple.


