#include <iostream>

int main()
{
    double earthWeight;
    int planetNumber;

    std::cout << "Please, enter the weight of the object on the Earth: ";
    std::cin >> earthWeight;

    std::cout << "   1. Venus   2. Mars    3. Jupiter\n";
    std::cout << "   4. Saturn  5. Uranus  6. Neptune\n\n";

    std::cout << "Then enter the number of a planet, weight on what you want to know: ";
    std::cin >> planetNumber;

    switch (planetNumber)
    {
    case 1:
        std::cout << "You choose Mercury.\n";
        std::cout << "Weight on Mercury will be " << earthWeight * 0.38;
        break;
    case 2:
        std::cout << "You choose Venus.\n";
        std::cout << "Weight on Venus will be " << earthWeight * 0.91;
        break;
    case 3:
        std::cout << "You choose Mars.\n";
        std::cout << "Weight on Mars will be " << earthWeight * 0.38;
        break;
    case 4:
        std::cout << "You choose Jupiter.\n";
        std::cout << "Weight on Jupiter will be " << earthWeight * 2.34;
        break;
    case 5:
        std::cout << "You choose Saturn.\n";
        std::cout << "Weight on Saturn will be " << earthWeight * 1.06;
        break;
    case 6:
        std::cout << "You choose Uranus.\n";
        std::cout << "Weight on Uranus will be " << earthWeight * 0.92;
        break;
    case 7:
        std::cout << "You choose Neptune.\n";
        std::cout << "Weight on Neptune will be " << earthWeight * 1.19;
        break;
    default:
        std::cout << "Wrong planet number!!!";
        break;
    }
    return 0;
}