#include <iostream>
#include <string>

// Note that one error with this program is that it does not ignore spaces
// Instructions allowed for this

//function declarations
std::string getName();
int getAge();
void displayResult(int namePlusAge);

int main(){
    std::string name{getName()};
    int age{getAge()};
    int nameLength{static_cast<int>(name.length())};

    int namePlusAge{nameLength + age};

    displayResult(namePlusAge);
}

std::string getName(){
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge(){
    std::cout << "Enter you age: ";
    int age{};
    std::cin >> age;
    return age;
}

void displayResult(int namePlusAge){
    std::cout << "Your age + length of your name is: " << namePlusAge << '\n';
}
