#include <iostream>

int main()
{
    int x{};
    std::cout << (x = 5) << '\n';

    return 0;
}