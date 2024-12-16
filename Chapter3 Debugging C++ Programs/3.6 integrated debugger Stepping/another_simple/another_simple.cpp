#include <iostream>

void printValue(int value)
{
    std::cout << value << '\n';
}

int main()
{
    printValue(5);
    printValue(6);
    printValue(7);

    return 0;
}

// First, run to cursor to line 11. At this point, you should see the value of 5 in the console output window.

// Now, right click on line 12, and choose set next statement.This causes line 11 to be skipped and not execute.Then choose continue to finish executing your program.
// Jumping backwards can also be useful if we want to watch a function that just executed run again, so we can see what it is doing.

// With the same code above, run to cursor to line 12. Then set next statement on line 11, and continue.