#include <iostream>

int main()
{
    double tempf;

    std::cout << "Enter the temperature in Fahreinheit: ";
    std::cin >> tempf;

    double tempc = (tempf - 32) / 1.8;

    std::cout << "The temp is " << tempc << " degrees Celsius.\n";
    return 0;
}