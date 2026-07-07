// Used now for function parameters lesson
#include <iostream>


int doubleNum(int x)
{
    return x * 2;
}


int main()
{
    std::cout << "Enter the number: ";

    int num{};
    std::cin >> num;
    std::cout << doubleNum(num) << '\n';

    return 0;
}