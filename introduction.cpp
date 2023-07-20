#include <iostream>

using namespace std;

void introduction(string first_name, string last_name)
{
    cout << last_name << ", " << first_name << " " << last_name;
}

int main()
{
    introduction("James", "Bond");
}