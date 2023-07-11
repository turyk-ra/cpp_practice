#include <iostream>

int main()
{

    int year;

    std::cout << "Please enter the year: ";
    std::cin >> year;

    if (year > 999 && year < 10000)
    {

        if (year % 400 == 0 || year % 4 == 0)
        {
            std::cout << year << " is a leap year";
        }
        else if (year % 400 != 0 && year / 100 == 0)
        {
            std::cout << year << " is not a leap year";
        }
        else
        {
            std::cout << year << " is not a leap year";
        }
    }
    else
    {
        std::cout << year << " is not a 4-digit year";
    }

    return 0;
}