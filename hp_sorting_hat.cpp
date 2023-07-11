#include <iostream>

using namespace std;

int main()
{

    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0; 
    int slytherin = 0;

    int answer1, answer2, answer3, answer4;

    int max = 0;

    string house;

    cout << "The Sorting Hat Quiz!\n\n";

    cout << "Q1) When I'm dead, I want people to remember me as: \n\n";
    cout << "1) The Good\n";
    cout << "2) The Great\n";
    cout << "3) The Wise\n";
    cout << "4) The Bold\n";

    cin >> answer1;

    switch (answer1)
    {
    case 1:
        hufflepuff++;
        break;
    case 2:
        slytherin++;
        break;
    case 3:
        ravenclaw++;
        break;
    case 4:
        gryffindor++;
        break;
    default:
        cout << "Wrong answer";
        break;
    }

    cout << "Q2) Dawn or Dusk?\n\n";
    cout << "1) Dawn\n";
    cout << "2) Dusk\n";

    cin >> answer2;

    switch (answer2)
    {
    case 1:
        gryffindor++;
        ravenclaw++;
        break;
    case 2:
        hufflepuff++;
        slytherin++;
        break;
    default:
        cout << "Wrong answer";
        break;
    }

    cout << "Q3) Which kind of insrument most pleases your ear? \n\n";
    cout << "1) The violin\n";
    cout << "2) The trumpet\n";
    cout << "3) The piano\n";
    cout << "4) The drum\n";

    cin >> answer3;

    switch (answer3)
    {
    case 1:
        slytherin++;
        break;
    case 2:
        hufflepuff++;
        break;
    case 3:
        ravenclaw++;
        break;
    case 4:
        gryffindor++;
        break;
    default:
        cout << "Wrong answer";
        break;
    }

    cout << "Q4) Which road tempts you most? \n\n";
    cout << "1) The wide, sunny grassy lane\n";
    cout << "2) The narrow, dark, lantern-lit alley\n";
    cout << "3) The twisting, leaf-strewn path through woods\n";
    cout << "4) The cobbled street lined (ancient buikdings)\n";

    cin >> answer4;

    switch (answer4)
    {
    case 1:
        hufflepuff++;
        break;
    case 2:
        slytherin++;
        break;
    case 3:
        gryffindor++;
        break;
    case 4:
        ravenclaw++;
        break;
    default:
        cout << "Wrong answer";
        break;
    }

    if (max < gryffindor)
    {
        max = gryffindor;
        house = "Gryffindor";
    }
    else if (max < slytherin)
    {
        max = slytherin;
        house = "Slytherin";
    }
    else if (max < hufflepuff)
    {
        max = hufflepuff;
        house = "Hufflepuff";
    }
    else
    {
        max = ravenclaw;
        house = "Ravenclaw";
    }
    cout << house << "!!!\n";
    return 0;
}