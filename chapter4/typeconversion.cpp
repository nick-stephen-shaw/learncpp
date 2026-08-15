#include <iostream>

int main(){
    std::cout << "Enter a character: ";
    char ch{};
    std::cin >> ch;
    std::cout << "You entered '" << ch << "', ";
    std::cout << "which has an ASCII code " << static_cast<int>(ch) << '\n';
}