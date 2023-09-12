#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    bool game = true;
    int rangeAttack;
    int meleeAttack;
    int monsterAttack;
    int characterHP = 10;

    while (game)
    {
        cout << "The game of arkham night story\n\n\n\n";
        cout << "Choose the number from 1 to 10: ";
        int choose;
        cin >> choose;
        if (choose < 5)
        {
            cout << "You've lost!\n";
            game = false;
            break;
        }
        else
        {
            cout << "Let's continue...\n";
        }
        cout << "You've seen the monster in front of you!\n";
        int monsterHP = 15;
        cout << "Attack him! Right now or you are dead!\n";
        cout << "Attack range\t Attack melee\n";
        int pchoose;
        cin >> pchoose;
        switch (pchoose)
        {
        case 1:
            rangeAttack = rand() % 7 + 1;
            monsterHP -= rangeAttack;
            cout << "You've shoot in monster and caused " << rangeAttack
                 << " Monster has " << monsterHP << " hp.\n";
            break;
        case 2:
            meleeAttack = rand() % 12 + 1;
            monsterHP -= meleeAttack;
            cout << "You've shoot in monster and caused " << meleeAttack
                 << " Monster has " << monsterHP << " hp.\n";
            break;
        default:
            cout << "Error";
            break;
        }
        cout << "Now the monster attack you!\n\n Prepare yourself\n";
        monsterAttack = rand() % 10 + 1;
        characterHP -= monsterAttack;
        if (characterHP <= 0)
        {
            cout << "You are died\n";
            game = false;
            break;
        }
        else
        {
            cout << "The monster shoot you and caused " << monsterAttack
                 << " You've had " << characterHP << " hp.\n";
        }
    }

    return 0;
}