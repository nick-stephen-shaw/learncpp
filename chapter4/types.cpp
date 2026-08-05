#include <iostream>

int main() {

    // boolean type
    bool myBool{true};

    // character types
    char myChar{'f'};
    wchar_t myWChar{L'w'};
    char16_t myChar16{u'b'};
    char32_t myChar32{U'c'};

    // integer types
    short myShort{1};
    int myInt{2};
    long myLong{3};
    long long myLongLong{4};

    // unsigned integer types
    unsigned short myUnsignedShort{1};
    unsigned int myUnsignedInt{2};
    unsigned long myUnsignedLong{3};
    unsigned long long myUnsignedLongLong{4};

    // floating point types
    float myFloat{1.1f};
    double myDouble{2.2};
    long double myLongDouble{3.3L};

    // null pointer type
    std::nullptr_t myNullptr{nullptr};

    // void (no value, used e.g. as a function return type)
    // void myVoid; // illegal -- void cannot be instantiated

    std::cout << myBool << '\n';
    std::cout << myChar << '\n';
    std::cout << static_cast<int>(myWChar) << '\n';
    std::cout << static_cast<int>(myChar16) << '\n';
    std::cout << static_cast<int>(myChar32) << '\n';
    std::cout << myShort << '\n';
    std::cout << myInt << '\n';
    std::cout << myLong << '\n';
    std::cout << myLongLong << '\n';
    std::cout << myUnsignedShort << '\n';
    std::cout << myUnsignedInt << '\n';
    std::cout << myUnsignedLong << '\n';
    std::cout << myUnsignedLongLong << '\n';
    std::cout << myFloat << '\n';
    std::cout << myDouble << '\n';
    std::cout << myLongDouble << '\n';
    std::cout << (myNullptr == nullptr) << '\n';

}