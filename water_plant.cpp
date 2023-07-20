#include <iostream>

using namespace std;

string needs_water(int days, bool is_succulent)
{
    if (!is_succulent && days > 3)
    {
        return "Time to water the plant.";
    }
    else if (days <= 12)
    {
        return "Don't water the plant!";
    }
    else if (days >= 13)
    {
        return "Go ahead and give the plant a little water.";
    }
    else
    {
        return "Don't water the plant!";
    }
}

int main()
{
    cout << needs_water(13, true) << "\n";
    cout << needs_water(10, false) << "\n";
    cout << needs_water(10, true) << "\n";
    return 0;
}