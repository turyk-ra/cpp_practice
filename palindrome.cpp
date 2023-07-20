#include <iostream>

using namespace std;

bool is_palindrome(string text)
{
    if (text[0] == text.back())
    {
        return true;
    }
    return false;
}

int main()
{

    cout << is_palindrome("madam") << "\n";
    cout << is_palindrome("ada") << "\n";
    cout << is_palindrome("lovelace") << "\n";
    return 0;
}