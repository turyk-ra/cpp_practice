#include <iostream>
#include <vector>
#include <string>
#include "ufo_functions.hpp"

using namespace std;

int main()
{
    std::vector<std::string> codewords = {"codecademy", "literature", "permission", "volleyball"};
    std::string codeword = select_codeword(codewords);
    std::string answer = "__________";
    int misses = 0;
    std::vector<char> incorrect;
    bool guess = false;
    char letter;

    greet();

    while (answer != codeword && misses < 7)
    {
        display_misses(misses);
        display_status(incorrect, answer);
        cout << "Please enter your guess: ";
        cin >> letter;
        for (unsigned int i = 0; i < codeword.length(); i++)
        {
            if (codeword[i] == tolower(letter))
            {
                answer[i] = tolower(letter);
                guess = true;
            }
        }
        if (guess)
        {
            cout << "Correct!";
        }
        else
        {
            cout << "Incorrect! The tractor beam pulls the person in further.";
            incorrect.push_back(letter);
            misses++;
        }
        guess = false;
    }
    end_game(answer, codeword);

    return 0;
}
