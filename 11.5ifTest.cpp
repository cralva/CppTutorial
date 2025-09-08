#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age > 100){
        std::cout << "You are too old for this site";
    }
    else if(age >= 18){
        std::cout << "Welcome to our site"; //this was our if statement but we had to move it since age > 100 was printing
    }
    else if(age < 0){
        std::cout << "You are not born yet";
    }
    else if(age > 100){
        std::cout << "You are too old for this site";
    }
    else{
        std::cout << "You are too young";
    }

    return 0;
}