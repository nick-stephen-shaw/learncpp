#include <iostream>

/*
Write the following program: The user is asked to enter 2 floating point numbers (use doubles). 
The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
The program computes the answer on the two numbers the user entered and prints the results. 
If the user enters an invalid symbol, the program should print nothing.
*/

// Function declarations
void add(double x, double y);
void subtract(double x, double y);
void multiply(double x, double y);
void divide(double x, double y);

int main(){
    double x{};
    double y{};
    std::cout << "Enter the first number: ";
    std::cin >> x;
    std::cout << "Enter the second number: ";
    std::cin >> y;
    char op{};
    std::cout << "Enter the operator (+, -, *, or /): ";
    std::cin >> op;

    if (op == '+')
        add(x, y);
    else if (op == '-')
        subtract(x, y);
    else if (op == '*')
        multiply(x, y);
    else if (op == '/')
        divide(x, y);
}

void add(double x, double y){
    std::cout << x << " + " << y << " is " << x+y << '\n';
}

void subtract(double x, double y){
    std::cout << x << " - " << y << " is " << x-y << '\n';
}
void multiply(double x, double y){
    std::cout << x << " * " << y << " is " << x*y << '\n';
}
void divide(double x, double y){
    std::cout << x << " / " << y << " is " << x/y << '\n';
}