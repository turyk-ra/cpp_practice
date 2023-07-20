#include <iostream>

using namespace std;

double average(double num1, double num2)
{
    return (num1 + num2) / 2;
}

int main()
{
    cout << average(42.0, 24.0) << "\n";
    cout << average(1.0, 2.0) << "\n";
    return 0;
}