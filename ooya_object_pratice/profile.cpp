#include "profile.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Profile::Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns)
{
    name = new_name;
    age = new_age;
    city = new_city;
    country = new_country;
    pronouns = new_pronouns;
};

Profile::~Profile(){

};

string Profile::view_profile(){
    string view_profile = "";
    view_profile += name + "\n";
    view_profile += to_string(age) + "\n";
    view_profile += city + "\n";
    view_profile += country + "\n";
    view_profile += "Hobbies:\n";
    for (int i = 0; i < hobbies.size(); i++)
    {
        view_profile += hobbies[i] + "\n";
    }
    
    return view_profile;
}

void Profile::add_hobby(string new_hobby)
{
    hobbies.push_back(new_hobby);
}
