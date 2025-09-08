#include <iostream>

int main() {
    std::string kids;
    std::string name;
    std::string full_name;
    std::string address;
    int age;

    std::cout << "How many kids do you have: ";
    std::getline(std::cin, kids); //example of what to do when we have have getline() above a cin. we dont need to use std::cin >> std::ws

    std::cout << "What is your first name: ";
    std::cin >> name;

    std::cout << "What is your full name: ";
    std::getline(std::cin >> std::ws, full_name); //if this was above our name cin then we would only need std::getline(std::cin, full_name)

    std::cout << "What is your address: ";
    std::getline(std::cin >> std::ws, address);
    

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "You have " << kids << " kids." << std::endl;
    std::cout << "Hello " << name << std::endl;
    std::cout << "Your full name is " << full_name << std::endl;
    std::cout << "You live on " << address << std::endl;
    std::cout << "You are currently " << age << " years old";


    return 0;
}