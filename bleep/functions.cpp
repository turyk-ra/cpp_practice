#include "functions.hpp"
#include <iostream>
#include <string>

using namespace std;

//TODO 
// Write a bleep() function that takes in the word and text and replace each word with asterisks *.
// And make sure to use pass-by-reference so you can modify the text.
void bleep(string word, string &text)
{
    if(text.find(word)){
        word = "*";
    }
}