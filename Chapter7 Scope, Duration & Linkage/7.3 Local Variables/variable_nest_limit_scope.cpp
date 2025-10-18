#include <iostream>

int main()
{
    // do not define y here

    {
        // y is only used inside this block, so define it here
        int y { 5 };
        std::cout << y << '\n';
    }

    // otherwise y could still be used here, where it's not needed

    return 0;
}