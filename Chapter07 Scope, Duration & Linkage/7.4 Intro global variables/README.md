## Global Variables

Local variables declare in a function body.

But if we decalre outside function it's called global variables.

### Scope of global variables

Identifiers declared in the global namespace have global namespace scope (commonly called global scope, and sometimes informally called file scope), which means they are visible from the point of declaration until the end of the file in which they are declared.

Once declared, a global variable can be used anywhere in the file from that point onward! 

Global variables can also be defined inside a user-defined namespace. 

Quick summary

```c++
// Non-constant global variables
int g_x;                 // defines non-initialized global variable (zero initialized by default)
int g_x {};              // defines explicitly value-initialized global variable
int g_x { 1 };           // defines explicitly initialized global variable

// Const global variables
const int g_y;           // error: const variables must be initialized
const int g_y { 2 };     // defines initialized global const

// Constexpr global variables
constexpr int g_y;       // error: constexpr variables must be initialized
constexpr int g_y { 3 }; // defines initialized global constexpr
```