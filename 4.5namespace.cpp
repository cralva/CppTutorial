#include <iostream>

namespace stink{
    int x = 2;
    int z = 1;
}


int main() {
    int x = 500;
    int z = 600;

    std::cout << x << std::endl;
    std::cout << stink::x << std::endl;

    std::cout << z << std::endl;
    std::cout << stink::z << std::endl;
}