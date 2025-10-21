## Internal Linkage

Global variables and function identifiers can have either internal linkage or external linkage

An identifier with internal linkage (like a static variable or function at the top level)
is only visible inside the same .cpp file where it’s defined.

Other files can’t see or use it, even if they have something with the same name.

So if you have two files like this:
```
// file1.cpp
static int counter = 5;

// file2.cpp
static int counter = 10;
```

### Quick summary

```
// Internal global variables definitions:
static int g_x;          // defines non-initialized internal global variable (zero initialized by default)
static int g_x{ 1 };     // defines initialized internal global variable

const int g_y { 2 };     // defines initialized internal global const variable
constexpr int g_y { 3 }; // defines initialized internal global constexpr variable

// Internal function definitions:
static int foo() {};     // defines internal function
```
