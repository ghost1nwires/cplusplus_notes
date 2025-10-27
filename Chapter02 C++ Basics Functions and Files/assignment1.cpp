//// This program prompts the user to enter their name and then greets them by name.


#include <iostream>
#include <string>

int main()
{
    std::string myName;
    std::cout << "Please enter your name "<< '\n';

    std::cin >> myName; // read in value of x from user
    // x is no longer known to the compiler
    std::cout << "My Name is " << myName << '\n';
    return 0;
}