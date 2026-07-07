#include <iostream>

int add (int x, int y)
{
    //int num{x + y};
    //return num;
    // The above 2 are unnecessary lines 
    return x + y;
    // Recall that the function itself provides a return value -- It can kinda be
    // thought of as its own variable in that sense
}

int main()
{
    std::cout << "Enter Two Numbers: ";
    int num1{};
    int num2{};
    // std::cin >> num1;
    // std::cin >> num2;
    std::cin >> num1 >> num2;
    // That is the proper way to chain inputs
    std::cout << add(num1, num2) << '\n';

    return 0; // Not required but good practice
}