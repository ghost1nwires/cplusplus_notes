#include <iostream>

void foo()
{
#define MY_NAME "Alex"
}

int main()
{
    std::cout << "My name is: " << MY_NAME << '\n';

    return 0;
}

/*
Even though it looks like #define MY_NAME “Alex” is defined inside function foo, the preprocessor won’t notice, as it doesn’t understand C++ concepts like functions. 
Therefore, this program behaves identically to one where #define MY_NAME “Alex” was defined either before or immediately after function foo. For general readability, 
you’ll generally want to #define identifiers outside of functions.

Once the preprocessor has finished, all defined identifiers from that file are discarded. This means that directives are only valid from the point of definition to the 
end of the file in which they are defined. Directives defined in one code file do not have impact on other code files in the same project.
*/