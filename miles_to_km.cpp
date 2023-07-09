#include <iostream>

int main()
{

    double miles;

    std::cout << "Enter how much miles do you want to convert: ";
    std::cin >> miles;

    double km = miles / 0.621371;
    std::cout << miles << " miles are " << km << " in kilometers.\n";
    return 0;
}