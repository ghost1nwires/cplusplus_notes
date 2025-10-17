#include <iostream>

int add(int x, int y); // forward declaration of add() (using a function declaration)

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
    return 0;
}

int add(int x, int y) // even though the body of add() isn't defined until here
{
    return x + y;
}

/*
Now when the compiler reaches the call to add in main, it will know what add looks like (a function that takes two integer parameters and returns an integer), 
and it won’t complain.

It is worth noting that function declarations do not need to specify the names of the parameters (as they are not considered to be part of the 
function declaration).*/