#include <iostream> //iostream is a header file that contains functions for basic input and output operations
//include is including the header file

// int main(){ //starting a main function
//     std::cout << "I like pizza!"; //std::count is important because this means that we are doing a standard character output (std::cout)
//     std::cout <<"I like drinking coke when I eat pizza!"; //causing issues because the second line is in the same line as the first when we are getting the output
//     return 0; 
//}


//the correct way to print out two lines and have them not be on the same line
int main(){
    std::cout << "I like pizza!" << std::endl; //<< means output and we add ; at the end of a statement
    std::cout <<"I like to drink coke when I eat pizza" << '\n'; //we can either use std::endl or "\n" to create a new line. without adding one of these two end line commands then these two lines would be on one
    return 0;
}