#include<iostream>

int main(){
    double earthWeight;

    std::cout << "Please, enter the weight of the object on the Earth: ";
    std::cin >> earthWeight;

    double marsWeight = earthWeight * 3.73 / 9.81;
    std::cout << "Mars weight of the object will be " << marsWeight << " kg";
    return 0;
}