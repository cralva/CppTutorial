#include <iostream>
/*
if statements = do something if a condition is true. if not then dont do it
*/

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to the site";
    }
    else if(age < 0){
        std::cout << "You are not born yet";
    }
    else if(age > 100){
        std::cout << "You are too old"; // this wont be executed since the first if statement is true and order matters. so if the first statement is evaluated as true it will run and end the if. ORDER MATTERS. if the first was false then it would go to the next until it finds one that is true. we would need to move this else if to the top and make it our if so we can make sure it works properly
    }
    else{
        std::cout << "You are not old enough";
    }


    return 0;
}