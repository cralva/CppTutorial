#include <iostream>

int main(){
    int teddy = 3;
    int syd = 26;
    int bella = 0;
    int cris = 28;
    int members = 4;
    double family_age;

    family_age = static_cast<double>(teddy + syd + bella + cris) / members; //we need one operand to be casted and the main variable to be what we need. ex we need a decimal so family_age needs to be age

    std::cout << family_age;

    return 0;
}