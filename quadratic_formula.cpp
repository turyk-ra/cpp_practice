#include <iostream>
#include<cmath>

int main()
{

    double a, b, c;

    std::cout << "Enter a-number: ";
    std::cin >> a;

    std::cout << "Enter b-number: ";
    std::cin >> b;

    std::cout << "Enter c-number: ";
    std::cin >> c;

    double root1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    double root2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    std::cout << "Root 1 is " << root1 << "\n";
    std::cout << "Root 2 is " << root2 << "\n";
    return 0;
}