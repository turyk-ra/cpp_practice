#include <iostream>
#include <vector>

using namespace std;

vector<int> first_three_multiples(int num)
{
    vector<int> mult;
    for (int i = 1; i < 4; i++)
    {
        mult.push_back(num * i);
    }
    return mult;
}

int main()
{
    for (int element : first_three_multiples(8))
    {
        cout << element << "\n";
    }
    return 0;
}