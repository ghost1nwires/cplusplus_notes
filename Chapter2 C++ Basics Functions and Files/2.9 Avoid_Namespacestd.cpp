#include <iostream>

using namespace std; /* This using directive that allows us to access names in the
std name in the std namespace with no namespace prefic */

int main()
{
    cout << "Holalaysian!";
    return 0;
}

/*

#include <iostream> // imports the declaration of std::cout

using namespace std; // makes std::cout accessible as "cout"

int cout() // defines our own "cout" function in the global namespace
{
    return 5;
}

int main()
{
    cout << "Hello, world!"; // Compile error!  Which cout do we want here?  The one in the std namespace or the one we defined above?

    return 0;
}

*/

/*
The above program doesn’t compile, because the compiler now can’t tell whether we 
want the cout function that we defined,
or the cout that is defined inside the std namespace.

*/