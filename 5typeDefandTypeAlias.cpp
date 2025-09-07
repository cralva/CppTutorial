#include <iostream>
#include <vector> 
/* typedef = reserved keyword used to create an additional name (alias) for another data type

- new identifier for an existing type
- helps with readability and reduces typos
- use when there is a clear benefit
- replaced with 'using' (word better w/ templates)
*/

// typedef std::vector<std::pair<std::string, int>> pairlist_t //when using typedef we can replace whatever is in it and then put the name that we want to use right after it, we call this the 'alias'


// int main() {
//     //std::vector<std::pair<std::string, int>> pairlist instead of having to do this we can do ....
//     pairlist_t pairlist; 'pairlist_t' is the alias and 'pairlist' is the data type

//     return 0;
// }


//typedef std::string text_t; //replces the std::string with text_t

//typedef int number_t; //can replace data type keywords as well. so we dont have to use int

using text_t = std::string;
using number_t = int; //we can use using instead of typedef

int main() {
    //std::string firstName; instead of using this i can use text_t
    text_t firstname = "Cristian";
    number_t age = 21;

    std::cout << firstname << std::endl;
    std::cout << age << std::endl;

    return 0;
}