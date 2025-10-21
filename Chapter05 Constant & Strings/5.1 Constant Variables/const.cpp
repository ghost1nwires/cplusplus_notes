#include <iostream>

int main()
{
    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    const int constAge { age }; // initialize const variable using non-const value

     std::cout << "My age is : " << constAge << '\n';
    age = 5;      // ok: age is non-const, so we can change its value
  //  constAge = 6; // error: constAge is const, so we cannot change its value

    return 0;
}