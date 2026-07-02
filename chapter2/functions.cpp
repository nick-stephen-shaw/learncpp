#include <iostream>

void print()
{
    std::cout << "Message" << '\n';
}

int main()
{
    std::cout << "Start" << '\n';
    print();
    print();
    std::cout << "End" << '\n';
    return 0;
}