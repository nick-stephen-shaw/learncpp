#include <iostream>

int main()
{
    std::cout << "Enter a Number: ";

    int num{};
    std::cin >> num;

    int doubleNum{};
    doubleNum = num * 2;

    std::cout << "Double the Number is: " << doubleNum << '\n';

    return 0;
}