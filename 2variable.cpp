#include <iostream>

int main(){
    //the back story pt 1
    // int x; //declaration
    // x = 5; //assignment

    //easier way to do pt 1
    // int x = 5;
    // int y = 6;
    // int sum = x + y;

    // std::cout << x << '\n';
    // std::cout << y << '\n';
    // std::cout << sum << '\n';

    //integer int (whole number)
    int age = 21;
    int year = 2025;
    int days = 7.5; // if we use a decimal (like 7.5) for an integer data type then the decimal will dropped at the output so it will only return 7

    //double (its a float but double is the name for cpp its a decimal)..
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout <<price <<'\n';


    //single character
    char grade = 'A';
    char initial = 'B'; //if we do 'BC' for this variable its not going to work since char only works for single characters. The ouput will only display the last character
    char currency = '$'; //symbols work for this too

    std::cout << initial << '\n';;
    
    //booleans (true or false)
    bool student = true; //can be false too, its like a light switch, its either on or off t/f
    bool power = false;
    bool forSale = true;

    //string (object that represents a sequence of text)
    std::string name = "Cristian";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "9505 Wolf River Pl";
    
    
    std::cout << name << "\n";
    std::cout << "Hello " << name << '\n'; //pay attention to the spacing. added a space after hello so we can
    std::cout << "You are " << age << " years old and live on " << address;



    return 0;
}