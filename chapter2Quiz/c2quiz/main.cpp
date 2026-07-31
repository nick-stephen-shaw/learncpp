#include <iostream>
#include "io.h"
#include "io.h"

int main()
{

    int valueOne{readNumber()}; //Get the first integer
    int valueTwo{readNumber()}; //Get the second integer

    writeAnswer(valueOne + valueTwo); //Add the two user-given integers and print result
    
    return 0;
}

