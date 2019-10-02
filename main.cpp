#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "hello there user" << std::endl;

    //creating ints and getting a user to enter a number
    int a = 0;
    int b = 3;

    std::cout <<"Please enter a number: ";

    //read in users number into a variable
    std::cin >> a;

    std::cout <<"Please enter a  second number: ";
    std::cin >> b;
    int c = a + b;

    //output the users number into a variable
    std::cout<<" adding your two numbers, your new number is " << c << std::endl;
    return 0;
}