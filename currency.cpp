#include <iostream>

int main()
{

    double pesos, reais, soles, dollars, byn, euro, zloty;

    std::cout << "Enter number of Colombian Pesos: ";
    std::cin >> pesos;

    std::cout << "Enter number of Brazilian Reais: ";
    std::cin >> reais;

    std::cout << "Enter number of Peruvian Soles: ";
    std::cin >> soles;

    std::cout << "Enter number of BYN: ";
    std::cin >> byn;

    std::cout << "Enter number of EURO: ";
    std::cin >> euro;

    std::cout << "Enter number of Zloty: ";
    std::cin >> zloty;

    dollars = (pesos / 4196.22) + (reais / 4.87) + (soles / 3.61);
    std::cout << "Total $ " << dollars << "\n"; 
    std::cout << "BYN: " << byn / 2.50 << " --- Euro: " << euro / 0.91 << " --- Zloty: " << zloty / 4.06 << "\n";
    return 0;
}