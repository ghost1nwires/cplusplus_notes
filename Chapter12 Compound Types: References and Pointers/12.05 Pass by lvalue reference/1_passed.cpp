#include <iostream>

void printValue(int y)
{
    std::cout << y << '\n';
} // y is destroyed here

void printValue1(std::string& n)
{
    std::cout << n << '\n';
} // y is destroyed here


int main()
{
    int x { 2 };

    printValue(x); // x is passed by value (copied) into parameter y (inexpensive) and it will print 2

   std::string m { "Hello, my lovve"};

   printValue1(m); // m is passed by lvalue reference into parameter n (no copy, efficient) and it will print "Hello, my lovve"

   // this program is identical to the prior one, except the type of parameter y has been changed from std::string to std::string& (an lvalue reference). Now, when printValue(x) is called, lvalue reference parameter y is bound to argument x. Binding a reference is always inexpensive, and no copy of x needs to be made. Because a reference acts as an alias for the object being referenced, when printValue() uses reference y, it’s accessing the actual argument x (rather than a copy of x).


   
    return 0;
}