#include <iostream>
#include <string>

// We can create objects of type std::string just like other objects:

int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // read a full line including spaces

    std::cout << "Hello, " << name << "!\n";
    std::cout << "Your fav theme for wedding? ";
    std::string theme{};
    
    std::getline(std::cin >> std::ws, theme); // The std::ws input manipulator tells std::cin to ignore any leading whitespace before extraction. Leading whitespace is any whitespace character (spaces, tabs, newlines) that occur at the start of the string.
    std::string myID{ "45aawe" }; // "45" is not the same as integer 45!
    std::cout << "My ID is " << myID << '\n';   
    return 0;

    // In string form, numbers are treated as text, not as numbers, and thus they can not be manipulated as numbers (e.g. you can’t multiply them). C++ will not automatically convert strings to integer or floating point values or vice-versa (though there are ways to do so that we’ll cover in a future lesson).

}