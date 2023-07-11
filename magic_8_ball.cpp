#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

    srand(time(NULL));
    int answer = rand() % 10;

    cout << "ASK THE MAGIC 8-BALL: ";
    cout << answer << "\n";

    switch (answer)
    {
    case 0:
        cout << "It is certain.";
        break;
    case 1:
        cout << "It is decidedly so.";
        break;
    case 2:
        cout << "Without a doubt.";
        break;
    case 3:
        cout << "As I see it, yes.";
        break;
    case 4:
        cout << "Outlook good.";
        break;
    case 5:
        cout << "Signs point to yes.";
        break;
    case 6:
        cout << "Ask again later.";
        break;
    case 7:
        cout << "Cannot predict now.";
        break;
    case 8:
        cout << "Don't count on it.";
        break;
    case 9:
        cout << "My sources say no.";
        break;
    case 10:
        cout << "Very doubtful.";
        break;
    default:
        cout << "Error";
        break;
    }

    return 0;
}