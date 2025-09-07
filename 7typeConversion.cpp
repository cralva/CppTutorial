#include <iostream>
/*
type conversion = conversion a value of one data type to another
- Implicit = automatic
- Explicit - precede value with new data type (int)
*/


int main() {
    //int x = 3.14; //because this is an int then it will only print the 3 and ignore the .14

    //double x = 314; this will output 3.14
    double x = (int) 3.14; //changing the double into an int 'explicitly'. will print 3
    std::cout << x << std::endl;

    char z = 100; //this is implicit casting since its done automatically. its casting into a ascii character which is 'd'
    std::cout << z << std::endl;

    std::cout << (char) 100 << std::endl; // this is explicitly casted since its not automatic

    //program that grades an online exam
    int correct = 8;
    int questions = 10;
    //double score = correct / questions * 100; this will return 0 percent since we are diving integers so we cant get the decimal

    double score = correct / (double)questions * 100; //need to explicitly cast the int questions into a double

    std::cout << score << "%";
    return 0;
}

//use static_cast<double>(variablename)