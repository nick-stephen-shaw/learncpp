#include <iostream>

void writeAnswer(int x) 
{
    std::cout << x <<'\n';
}

int readNumber() // Returns a user-given integer
{
    std::cout << "Enter an Integer: ";
    int x{};
    std::cin >> x;

    return x;
}