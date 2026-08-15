#include <iostream>

int converter(int x);

int main(){
    std::cout << "Enter a character: ";
    char ch{};
    std::cin >> ch;
    std::cout << "You entered '" << ch << "', ";
    std::cout << "which has an ASCII code " << converter(ch) << '\n';
}

int converter(int x){
    return x;
}

// Note that this is bad programming; explicit is preferred here. 
// This is just to test understanding of implicit type 