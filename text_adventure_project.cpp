#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{

    srand(time(NULL));

    bool game = true;
    int choose;
    int strength;
    int checking = 1 + (rand() % 5);
    int hintsNumber = 0;
    int agility = 0;
    char yes = 'y';
    char chooseChar;
    int enemyHP = 12;
    int enemyStrength = 4;
    int characterHP = 10;

    while (game != false)
    {
        cout << "Horror\n"
                "This is a little part of the story from The Arkham Horror Board Game\n\n";

        cout << "Please, choose your character:\n"
                "1) Roland Banks\n"
                "2) Amanda\n";
        cin >> choose;

        switch (choose)
        {
        case 1:
            cout << "You choose Roland\n";
            strength = 4;
            agility = 2;
            break;
        case 2:
            cout << "You choose Amanda\n";
            strength = 2;
            agility = 4;
            break;
        default:
            break;
        }

        cout << "Chapter I. The Room.\n"
                "NEW QUEST: Find to hints in the room to find out how to get out it.\n";

        cout << "You stay. There is a big desk in the center of the room."
                "Do you want to explore it?\n"
                "1) y  2) n\n";

        cin >> chooseChar;

        if (chooseChar == yes)
        {
            cout << "Stay near old desk. Its locked. You try to open it or destroy it?\n"
                    "1) Open careful 2)Punch it\n";
            cin >> choose;
            switch (choose)
            {
            case 1:
                cout << "Checking agility - " << checking << "\n";
                if (checking <= agility)
                {
                    cout << "You've unlocked and find a gun (strength +2)\n";
                    strength += 2;
                    hintsNumber++;
                }
                else
                {
                    cout << "You've tried a lot but the lock wasn't open.";
                }
                break;
            case 2:
                cout << "Checking strength - " << checking << "\n";

            default:
                break;
            }
        }

        if (hintsNumber == 1)
        {
            cout << "You find all the hints! Great! You find the door on the floor.\n"
                    "When you enter it you find youself in your house's hall.\n";
        }
        else if (hintsNumber != 1)
        {
            do
            {
                cout << "You try to find hints in closet\n"
                        "Then in the fireplace\n"
                        "Spend a lot of hours\n"
                        "But finally you've seen the door under the carpet!\n";
                hintsNumber++;
            } while (hintsNumber != 1);
        }

        cout << "Chapter II. The Hall.\n"
                "Here you see an enemy!!!\n"
                "NEW QUEST: DESTROY THE ENEMY!\n\n"

                "You can fight or run from the house!\n"
                "Fight?\n"
                "1) y 2) n\n";
        cin >> chooseChar;

        if (chooseChar == 'y')
        {
            do
            {
                int shoot = strength + ((rand() % 5) + 1);
                cout << "You shoot - " << shoot << "\n";
                enemyHP -= shoot;
                if (enemyHP <= 0)
                {
                    cout << " YOU WIN!!!\n";
                    game = false;
                    break;
                }
                cout << "Enemy hp now is " << enemyHP << "\n";
                int enemyShoot = enemyStrength + ((rand() % 5) + 1);
                cout << "Enemy shoot - " << enemyShoot << "\n";
                characterHP -= enemyShoot;
                cout << "Character hp is " << characterHP << "\n";

                if (characterHP <= 0)
                {
                    cout << "YOU LOST!\n";
                    game = false;
                    break;
                }
            } while (enemyHP > 0);
        }
        else
        {
            cout << "You run from the house and lost this game!\n";
            game = false;
            break;
        }
    };
    return 0;
}
