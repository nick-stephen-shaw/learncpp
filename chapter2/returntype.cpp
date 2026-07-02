#include <iostream>

int getInput()
{
    int input{};
    std::cout << "Enter your Number: ";
    std::cin >> input;
    return input;
}

int main()
{
    int num{getInput()};
    std::cout << "Your number is: " << num << '\n';

    return 0;
}