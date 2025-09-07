#include <iostream>

int main() {
    const int MONEY_IN_BANK = 1900;
    const double RATE = 5.5;
    std::string address = "I live on 9505 Wolf river pl";

    std::cout << "I have three accounts and they have " << MONEY_IN_BANK << " and the rate is " << RATE << std::endl;
    std::cout << address;

    return 0;

}