#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    string input = "hi, human";

    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    vector<char> result;

    for (int i = 0; i < input.size(); i++)
    {
        for (int k = 0; k < vowels.size(); k++)
        {
            if (input[i] == vowels[k])
            {
                if (input[i] == vowels[1] || input[i] == vowels[4])
                {
                    result.push_back(input[i]);
                }
                result.push_back(input[i]);
            }
        }
    }

    for (int j = 0; j < result.size(); j++)
    {
        cout << result[j];
    }
}