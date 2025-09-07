#include <iostream>
//using namespace std; //this is so we dont have to use std whenever we want to do a cout or cin but this is not recommended since there are so many variables and could lead to ocnflicts

//using std::cout;
///using std::string; //this is better since it will save time on putting these is. we only need to use cout and string

// namespace = provides a solution for preventing name conflicts in large projects. each entity needs a unique name
//a namespace allows for identically named entities as long as the namespaces are different

namespace first{
    int x = 1; //this will work because its in its own namespace
}

namespace second{ //need to use the keyword 'namespace' first and then the name of our new namespace
    int x = 2;

}

int main() {
    //using namespace first; //this means that we are using the namespace 'first' so the variables in first will be accessible

    int x = 0;
    //int x = 1; would break the code since we already have a variable 'x' declared. we need a namespace to be able to use a variable under the same name
    std::cout << x; //this will output the local version of x which is one

    std::cout << first::x; //if we want to use a variable from a different namespace then all we have to do it prefix which namespace::variable

    std::cout << second::x;



    return 0;
}