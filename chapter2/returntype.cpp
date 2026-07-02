#include <iostream>

int returnFive()
{
    return 5;
}

int main()
{
    int x{returnFive()};
    std::cout << x << '\n';
    std::cout << x + 5 << '\n';
}