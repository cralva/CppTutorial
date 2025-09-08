#include <iostream>
#include <cmath> //inlcudes pow()

int main() {
    double x = 3;
    double y = 4;
    double t = 3.14;
    double z;

    //z = std::max(x, y); //will print the max of the two
    
    //z = std::min(x, y); //prints the min of the numbers
    
    //z = pow(2, 3); //first number is base and second is the power

    //z = sqrt(9); //will be 3. finds the square root of the number in the parentheses

    //z = abs(-15); //will print the absolute value so it will be 15

    //z = round(t); //will round the decimal either up or down

    //z = ceil(t); //will always round up

    z = floor(t); //will always round down

    std::cout << z;

    return 0;
}