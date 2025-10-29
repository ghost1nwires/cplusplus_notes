## Type deduction for initialized variables

Type deduction (also sometimes called type inference) is a feature that allows the compiler to deduce the type of an object from the object’s initializer. When defining a variable, type deduction can be invoked by using the auto keyword can be used in place of the variable’s type:

```
int main()
{
    auto d { 5.0 }; // 5.0 is a double literal, so d will be deduced as a double
    auto i { 1 + 2 }; // 1 + 2 evaluates to an int, so i will be deduced as an int
    auto x { i }; // i is an int, so x will be deduced as an int

    return 0;
}
```
### Type deduction must have something to deduce from

Type deduction will not work for objects that either do not have initializers or have empty initializers. It also will not work when the initializer has type void (or any other incomplete type). 

```
    auto a;           // The compiler is unable to deduce the type of a
    auto b { };       // The compiler is unable to deduce the type of b
    auto c { foo() }; // Invalid: c can't have type incomplete type void

```
