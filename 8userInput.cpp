#include <iostream>
/*
cout << (insertion operator) output. output info
cin >> (extraction operator) input. accept input
*/

int main() {
    std::string name; //because this is a 'string' keyword it will only take the the first word. it will stop when it hits the first space. so if we type in a full name, only the first name will be taken. we need to use getline() to get the full name
    std::string full_name;
    int age;

    std::cout << "What is your first name: ";
    std::cin >> name;

    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, full_name); //when there is a regular cin above getline then we need to add std::ws so it can work properly. this only applies when there is a cin above getline(). if getline is above the cin then all we need is std::getline(std::cin, full_name)

    std::cout << "What is your age: ";
    std::cin >> age;

    std::cout << "Hello " << name << std::endl;
    std::cout <<"Your full name is " << full_name << "." << std::endl;
    std::cout << "You are " << age << " years old";
    return 0;
}