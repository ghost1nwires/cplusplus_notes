## Local variables have block space
cut it short, local variables, which are variables that are defined inside a function (including function parameters).

Local variables have block scope, which means they are in scope from their point of definition to the end of the block they are defined within.

### All variables names within scope must be unique, gurrl

Variable names must be unique within a given scope, otherwise any reference to the name will be ambiguous. 

### Local variables have no linkage

Local variables have no linkage. Each declaration of an identifier with no linkage refers to a unique object or function.

### Variables should be defined in the most limited scope

If a variable is only used within a nested block, it should be defined inside that nested block

