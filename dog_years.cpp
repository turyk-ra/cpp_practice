#include <iostream>

int main()
{

    std::string dog_name;
    int dog_age;
    int early_years = 21; // The first two years of a dog’s life count as 21 human years.
    int later_years;
    int human_years;

    std::cout << "Please enter the dog's name: ";
    std::cin >> dog_name;

    std::cout << "Please enter the dog's age: ";
    std::cin >> dog_age;

    later_years = (dog_age - 2) * 4;
    human_years = later_years + early_years;

    std::cout << "My name is " << dog_name << " ! Ruff ruff, I am " << human_years << " years old in human years.";
    return 0;
}