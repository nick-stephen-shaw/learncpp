#include <iostream>

const double gravity{9.8}; // might as well define here for use where ever (unless optimization required)
// Note for multi-file programs a future approach will be explored


int main(){
    std::cout << "Gravity is " << gravity << " meters per second^2\n";
    std::string hello{"Hello, World!"};

    std::cout << hello << '\n';
}