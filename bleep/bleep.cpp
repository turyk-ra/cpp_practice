#include<iostream>
#include<string>
#include "functions.hpp"

using namespace std;

int main(){

    string word = "broccoli";
    string text = "I'm rolling up my broccoli, when broccoli is rolled go to broccoli king and pray the broccoli lord!";

    cout << text << "\n";

    string new_text = bleep(word,text);
    cout << new_text;

    return 0;
}