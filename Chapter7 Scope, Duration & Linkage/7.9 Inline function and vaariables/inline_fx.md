## Inline Function and variables

Consider the case where you need to write some code to perform some discrete task, like reading input from the user, or outputting something to a file, or calculating a particular value. When implementing this code, you essentially have two options:

Write the code as part of an existing function (called writing code “in-place” or “inline”).
Create a new function (and possibly sub-functions) to handle the task.
Putting the code in a new function provides many potential benefits, as small functions:

- Are easier to read and understand in the context of the overall program.
- Are easier to reuse, as functions are naturally modular.
- Are easier to update, as the code only needs to be modified in one place.

However, one downside of using a new function is that every time a function is called, there is a certain amount of performance overhead that occurs.

However, in modern C++, the inline keyword is no longer used to request that a function be expanded inline. There are quite a few reasons for this:

Using inline to request inline expansion is a form of premature optimization, and misuse could actually harm performance.
The inline keyword is just a hint to help the compiler determine where to perform inline expansion. The compiler is completely free to ignore the request, and it may very well do so. The compiler is also free to perform inline expansion of functions that do not use the inline keyword as part of its normal set of optimizations.
The inline keyword is defined at the wrong level of granularity. We use the inline keyword on a function definition, but inline expansion is actually determined per function call. It may be beneficial to expand some function calls and detrimental to expand others, and there is no syntax to influence this.
Modern optimizing compilers are typically good at determining which function calls should be made inline -- better than humans in most cases. As a result, the compiler will likely ignore or devalue any use of inline to request inline expansion for your functions.

Best practice

Do not use the inline keyword to request inline expansion for your functions.
