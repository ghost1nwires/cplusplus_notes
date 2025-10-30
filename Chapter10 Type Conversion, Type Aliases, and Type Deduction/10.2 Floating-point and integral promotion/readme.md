## Floating-point and integral promotion

⚙️ Why data type sizes can change

C++ guarantees a minimum size for types (like int, double, etc.),
but their actual size depends on your CPU and compiler.

This flexibility lets each system choose the size that runs fastest on its hardware.

💻 Example:

On a 32-bit CPU, the processor handles 32 bits of data at once.
So, int is usually 32 bits because that’s the “natural” size — it runs faster.

🧩 What about smaller types?

If the CPU is 32-bit but you use smaller data like char (8 bits) or short (16 bits):

Some CPUs can handle those directly, but slower.

Others can’t handle them directly at all — they must first convert them to 32-bit values.

🧠 Key idea:

CPUs like working with data the same width as themselves.
Smaller types may need to be promoted to the CPU’s natural size to work efficiently.

### Numeric promotion
Sometimes small data types like char or short are too small for the CPU to handle efficiently.
So, C++ automatically converts these small types into bigger types (like int or double) when doing calculations.

This automatic conversion is called a numeric promotion.

It’s always safe — no data is lost — so the compiler does it automatically without warning you.

🧠 Example:
```c++
char c = 5;
int result = c + 2;  // 'c' is promoted to int automatically
```



Here, `char` → `int` is a numeric promotion.

### Numeric promotion reduced redundancy 
```c++
#include <iostream>

void printInt(int x)
{
    std::cout << x << '\n';
}
```

