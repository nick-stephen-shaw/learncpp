#include <iostream>
/*
Extra credit: This one is a little more challenging.

Write a short program to simulate a ball being dropped off of a tower. 
To start, the user should be asked for the height of the tower in meters. 
Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). 
Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. 
The ball should not go underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds. 
The function can calculate how far the ball has fallen after x seconds using the following formula: 
distance fallen = gravity_constant * x_seconds2 / 2
*/

//Function declerations
void result(double height, double time);
double getHeight();

int main(){
    double height{getHeight()};
    result(height, 0);
    result(height, 1);
    result(height, 2);
    result(height, 3);
    result(height, 4);
    result(height, 5);
}

double getHeight(){
    std::cout << "Enter the height: ";
    double x{};
    std::cin >> x;
    return x;
}

void result(double height,double time){

    double solution{height - (9.8 * time * time)/2 };
    if (solution > 0)
        std::cout << "At " << time << " seconds, the ball is at height "
        << solution << " meters.\n";
    
    else
        std::cout << "At " << time << " seconds, the ball is on the ground.\n";
}