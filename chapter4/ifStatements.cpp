// In later lessons, better concepts will be introduced to create 
// a better solution to this problem (cases or || operator)
#include <iostream>

bool isPrime(int x);
bool isPrime2(int x);
int main(){
    std::cout << "Enter an integer between 0-9: ";
    int x{};
    std::cin >> x;
    if (isPrime2(x))
        std::cout << x << " is a prime value between 0-9.\n";
    else
        std::cout << x << " is not a prime value between 0-9.\n";
}

bool isPrime(int x){
    if (x == 2)
        return true;
    else if (x == 3)
        return true;
    else if (x ==5)
        return true;
    else if (x == 7)
        return true;
    else
        return false;
}

// A better way to write isPrime(), using ||
bool isPrime2(int x){
    return x == 2 || x == 3 || x == 5 || x ==7;
}