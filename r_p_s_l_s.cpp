// Rock, Paper, Scissors, Lizard, Spock
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

    srand(time(NULL));
    int computer = rand() % 3 + 1;
    int user = 0;

    cout << computer << "\n";
    cout << "rock paper scissors!\n";
    cout << "1) rock\n";
    cout << "2) paper\n";
    cout << "3) scissors\n";
    cout << "4) lizard\n";
    cout << "5) Spock\n";

    cin >> user;

    switch (user)
    {
    case 1:
        if (computer == 3 || computer == 4)
        {
            cout << "User win this time!";
        }
        else
        {
            cout << "Computer wins!";
        }
        break;
    case 2:
        if (computer == 5 || computer == 1)
        {
            cout << "User win this time!";
        }
        else
        {
            cout << "Computer wins!";
        };
        break;
    case 3:
        if (computer == 2 || computer == 4)
        {
            cout << "User win this time!";
        }
        else
        {
            cout << "Computer wins!";
        }
        break;
    case 4:
        if (computer == 2 || computer == 5)
        {
            cout << "User win this time!";
        }
        else
        {
            cout << "Computer wins!";
        }
        break;
    case 5:
        if (computer == 1 || computer == 3)
        {
            cout << "User win this time!";
        }
        else
        {
            cout << "Computer wins!";
        }
        break;
    default:
        cout << "Error.";
        break;
    }
    return 0;
}