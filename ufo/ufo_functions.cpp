#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

std::string select_codeword(std::vector<std::string> codewords)
{
    srand(time(NULL));
    int random = rand() % codewords.size();
    std::string codeword = codewords[random];
    return codeword;
}

std::vector<std::string> codewords = {"codecademy", "literature", "permission", "volleyball"};
std::string answer = "__________";
std::string codeword = select_codeword(codewords);
int misses = 0;
std::vector<char> incorrect;
bool guess = false;
char letter;



void greet()
{
    cout << "=============\n"
         << "UFO: The Game\n"
         << "=============\n"
         << "Instructions: save your friend from alien abduction by guessing the letters in the codeword.\n";
}

void end_game(string answer, string codeword)
{
    if (answer == codeword)
    {
        cout << "\nHooray! You saved the person and earned a medal of honor!\n";
        cout << "Codeword was: " << codeword << "\n";
    }
    else
    {
        cout << "\nOh no! The UFO just flew away with another person!\n";
        cout << "Codeword was: " << codeword << "\n";
    }
}

void display_status(std::vector<char> incorrect, string answer)
{
    cout << "Incorrect Guesses:\n";
    for (unsigned int i = 0; i < incorrect.size(); i++)
    {
        cout << incorrect[i] << " \n";
    }
    cout << "Codeword:";
    for (unsigned int k = 0; k < answer.length(); k++)
    {
        cout << answer[k] << " ";
    }
}

void display_misses(int misses)
{

    if (misses == 0 || misses == 1)
    {

        cout << "                 .                            \n";
        cout << "                 |                            \n";
        cout << "              .-\"^\"-.                       \n";
        cout << "             /_....._\\                       \n";
        cout << "         .-\"`         `\"-.                  \n";
        cout << "        (  ooo  ooo  ooo  )                   \n";
        cout << "         '-.,_________,.-'    ,-----------.   \n";
        cout << "              /     \\        (  Send help! ) \n";
        cout << "             /   0   \\      / `-----------'  \n";
        cout << "            /  --|--  \\    /                 \n";
        cout << "           /     |     \\                     \n";
        cout << "          /     / \\     \\                   \n";
        cout << "         /               \\                   \n";
    }
    else if (misses == 2)
    {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /  0  \\        (  Send help! ) \n";
        std::cout << "             / --|-- \\      / `-----------'  \n";
        std::cout << "            /    |    \\    /                 \n";
        std::cout << "           /    / \\    \\                    \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";
    }
    else if (misses == 3)
    {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /--|--\\        (  Send help! ) \n";
        std::cout << "             /   |   \\      / `-----------'  \n";
        std::cout << "            /   / \\   \\    /                \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";
    }
    else if (misses == 3)
    {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /--|--\\        (  Send help! ) \n";
        std::cout << "             /   |   \\      / `-----------'  \n";
        std::cout << "            /   / \\   \\    /                \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";
    }
    else if (misses == 4)
    {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /  |  \\        (  Send help! ) \n";
        std::cout << "             /  / \\  \\      / `-----------' \n";
        std::cout << "            /         \\    /                 \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";
    }
    else if (misses == 5)
    {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              / / \\ \\        (  Send help! )\n";
        std::cout << "             /       \\      / `-----------'  \n";
        std::cout << "            /         \\    /                 \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";
    }
    else if (misses == 6)
    {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /     \\        (  Send help! ) \n";
        std::cout << "             /       \\      / `-----------'  \n";
        std::cout << "            /         \\    /                 \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";
    }
}

void play_game()
{
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
}

void play_again(char letter, bool play_again)
{
    if (letter == 'y')
    {
        codeword = select_codeword(codewords);
        misses = 0;
        incorrect = {};
        guess = false;
        answer = "__________";

        greet();
        play_game();
    }
    else
    {
        cout << "Bye bye!\n";
        play_again = false;
    }
}