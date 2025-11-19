# Chapter 12.6 Pass by const lvalue reference 

This folder contains materials for Chapter 12.6 Pass by const lvalue reference .


> kinda giveup tho learning this chapter, but i found a video

<a href="http://www.youtube.com/watch?feature=player_embedded&v=lj1O_GH7SGs
" target="_blank"><img src="http://img.youtube.com/vi/lj1O_GH7SGs/0.jpg" 
alt="Should I pass by const reference or by value" width="240" height="180" border="10" /></a>

> p/s I still couldnt get it :(

Unlike a reference to non-const (which can only bind to modifiable lvalues), a reference to const can bind to modifiable lvalues, non-modifiable lvalues, and rvalues. Therefore, if we make a reference parameter const, then it will be able to bind to any type of argument:

```c++
#include <iostream>

void printRef(const int& y) // y is a const reference
{
    std::cout << y << '\n';
}

int main()
{
    int x { 5 };
    printRef(x);   // ok: x is a modifiable lvalue, y binds to x

    const int z { 5 };
    printRef(z);   // ok: z is a non-modifiable lvalue, y binds to z

    printRef(5);   // ok: 5 is rvalue literal, y binds to temporary int object

    return 0;
}
```

From this code, why `const int&` works with `x`
- `x` is modifiable lvalue (int, not constant int)
- `y` is a constant reference, meaning
→ “I will refer to some int, but promise not to change it.”
- The C++ type system allows binding a non-const lvalue to a const& — it’s a safe implicit conversion (adding const is safe; removing it would not be).
So inside `printRef`, `y` is an alias for `x`,

however, it will violates when 

```c++
void addOne(const int& ref)
{
    ++ref; // not allowed: ref is const
}
```
 because u are trying to change the value of `ref` but if u want to edit `ref` value, do this

```c++
void addOne(int& ref) {  // ← NO "READ-ONLY" STICKY NOTE
    ++ref;  // Now it's allowed!
}
```

> with help, explained by Qwen