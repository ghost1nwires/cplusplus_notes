## Using function templates in multiple files

Observe these two files below, it will not work properly

main.cpp:
```c++
#include <iostream>

template <typename T>
T addOne(T, x); //func template declaration

int main ()
{
    std::cout << addOne(1) << '\n';
    std::cout << addOne(2.3) << '\n';
    return 0;
}
```

add.cpp:
```c++
template <typename T>
T addOne(T x);
{
    return x + 1;
} 

```

When you put a **template function** like `addOne` in a separate `.cpp` file, the compiler only sees it as a **blueprint**, not real code. Templates only become real functions (like `addOne<int>` or `addOne<double>`) when the compiler sees both the **blueprint** *and* the **place it’s used** at the same time. Since `main.cpp` just knows the function’s name but not its body, and `add.cpp` has the body but never uses it, no real function gets created — so at link time, there’s nothing to run. That’s why it doesn’t print anything.
