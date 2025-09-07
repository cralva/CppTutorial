#include <iostream>

/*
Arithmetic operators = return the result of a specific arithmetic operation (+ - * /)
*/

int main() {
    int students_add;
    students_add = 20;

    //students_add = students_add + 2; can shorten this to make is easier to read and less typing

    students_add += 2; //this is the same thing as above

    students_add ++; //this is used to only add one

    std::cout << students_add << std::endl;

    
    
    //subtraction
    int students_minus;
    students_minus = 15;

    //students_minus = students_minus - 2; faster way bebloe
    students_minus -= 2;

    students_minus--; //will subtract 1

    
    //multiplication
    int students_mult;
    students_mult = 10;

    //students_mult = students_mult * 2;
    students_mult *= 2; //faster way


    
    //division
    int students_div;
    students_div = 30;

    //students_div = students_div / 2;
    students_div /= 2;
    //if we were to divide by 4 then the answer would be  7, the actual answer is 7.5 but because this is an int then the decimal gets dropped. if we go back to change the students_div variable to 'double' then the answer would be 7.5



    //remainder
    int students_remainder;
    students_remainder = 30;

    students_remainder = students_remainder % 4; //this will print the remainder. 30/4=7... 4 * 7 = 28 so theres two left over
    std::cout << students_remainder << std::endl;

    int students_even;
    students_even = 20;
    students_even = students_even % 2; //this can show if a variable is even or odd since if theres no remainder then its even if the remainder is 1 then its odd


    /*
    Order or operations (PEMDAS)
    1. parenthesis
    2. mult and div
    3. addition and sub
    */
    int pemdas_ex = 6 - 5 + 4 * 3 / 2; //follow pemdas and if we have two then we do left to right, with the left being first. answer should be 7

    std::cout << pemdas_ex; //CORRECT



    return 0;
}