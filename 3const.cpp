#include <iostream>

 // The const keyword specifies that a variables value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)


int main() {
    //create a program to calculate the cirucmferance of a circle
    //double pi = 3.14159;
    const double PI = 3.14159; //we can change double pi into this and it means that it cannot be changed in the program.if someone tries to change the value and runs the program then it will break the program. capitalize the variable name for const
    //pi = 420.69 //someone goes into our program and tries to change the value of pi pt1.
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";
}