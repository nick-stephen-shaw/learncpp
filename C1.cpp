#include <iostream>

// Write a program that asks the user to enter a number, 
//and then enter a second number. 
//The program should tell the user what the result of adding and 
// subtracting the two numbers is.

int main()
{
    std::cout << "Enter an Integer: ";

    int x{};
    std::cin >> x;
    std::cout << "Enter another Integer: ";

    int y{};
    std::cin >> y;

    std::cout << x << " + " << y << " is " << x + y << ".\n";
    std::cout << x << " - " << y << " is " << x - y << ".\n";
}