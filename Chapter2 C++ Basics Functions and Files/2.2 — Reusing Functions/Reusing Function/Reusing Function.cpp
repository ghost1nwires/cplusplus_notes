#include <iostream>
/*
int main()
{
    int x{};
    std::cout << "Masuk nombor satu kali: ";
    std::cin >> x;

    int y{};
    std::cout << "Masuk nombor kali kedua: ";
    std::cin >> y;

    std::cout << x << " + " << y << " = " << x + y << '\n';

    return 0;
}

we can do this, but it is redundant*/



int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int x{ getValueFromUser() }; // first call to getValueFromUser
    int y{ getValueFromUser() }; // second call to getValueFromUser

    std::cout << x << " + " << y << " = " << x + y << '\n';

    return 0;
}