## Chapter 7 summary 

A compound statement or block is a group of zero or more statements that is treated by the compiler as if it were a single statement. Blocks begin with a { symbol, end with a } symbol, with the statements to be executed placed in between. Blocks can be used anywhere a single statement is allowed. No semicolon is needed at the end of a block. Blocks are often used in conjunction with if statements to execute multiple statements.

User-defined namespaces are namespaces that are defined by you for your own declarations. Namespaces provided by C++ (such as the global namespace) or by libraries (such as namespace std) are not considered user-defined namespaces.

You can access a declaration in a namespace via the scope resolution operator (::). The scope resolution operator tells the compiler that the identifier specified by the right-hand operand should be looked for in the scope of the left-hand operand. If no left-hand operand is provided, the global namespace is assumed.

Local variables are variables defined within a function (including function parameters). Local variables have block scope, meaning they are in-scope from their point of definition to the end of the block they are defined within. Local variables have automatic storage duration, meaning they are created at the point of definition and destroyed at the end of the block they are defined in.

A name declared in a nested block can shadow or name hide an identically named variable in an outer block. This should be avoided.

Global variables are variables defined outside of a function. Global variables have file scope, which means they are visible from the point of declaration until the end of the file in which they are declared. Global variables have static duration, which means they are created when the program starts, and destroyed when it ends. Avoid dynamic initialization of static variables whenever possible.

An identifier’s linkage determines whether other declarations of that name refer to the same object or not. Local variables have no linkage. Identifiers with internal linkage can be seen and used within a single file, but are not accessible from other files. Identifiers with external linkage can be seen and used both from the file in which they are defined, and from other code files (via a forward declaration).

Avoid non-const global variables whenever possible. Const globals are generally seen as acceptable. Use inline variables for global constants if your compiler is C++17 capable.

Local variables can be given static duration via the static keyword.

A qualified name is a name that includes an associated scope (e.g. std::string). An unqualified name is a name that does not include a scoping qualifier (e.g. string).

Using statements (including using declarations and using directives) can be used to avoid having to qualify identifiers with an explicit namespace. A using declaration allows us to use an unqualified name (with no scope) as an alias for a qualified name. A using directive imports all of the identifiers from a namespace into the scope of the using directive. Both of these should generally be avoided.

Inline expansion is a process where a function call is replaced by the code from the called function’s definition. A function that is declared using the inline keyword is called an inline function.

Inline functions and variables have two primary requirements:

The compiler needs to be able to see the full definition of an inline function or variable in each translation unit where the function is used (a forward declaration will not suffice on its own). The definition can occur after the point of use if a forward declaration is also provided.
Every definition for an inline function or variable must be identical, otherwise undefined behavior will result.
In modern C++, the term inline has evolved to mean “multiple definitions are allowed”. Thus, an inline function is one that is allowed to be defined in multiple files. C++17 introduced inline variables, which are variables that are allowed to be defined in multiple files.

Inline functions and variables are particularly useful for header-only libraries, which are one or more header files that implement some capability (no .cpp files are included).

Finally, C++ supports unnamed namespaces, which implicitly treat all contents of the namespace as if it had internal linkage. C++ also supports inline namespaces, which provide some primitive versioning capabilities for namespaces