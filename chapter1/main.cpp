#include <iostream>

int add()
{
    std::cout << "Enter an Integer: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    std::cout << add() << '\n';

    return 0;
}