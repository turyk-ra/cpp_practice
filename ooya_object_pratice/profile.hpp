#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Profile
{
private:
    string name;
    int age;
    string city;
    string country;
    string pronouns = "they/them";
    vector<string> hobbies;

public:
    Profile(string new_name, int new_age, string new_city, string new_country, string new_pronous = "they/them");
    ~Profile();

    string view_profile();

    void add_hobby(string new_hobby);
};
