#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isPalindrome(string word)
{
    // Using the erase, remove_if, and ::isspace functions.
    word.erase(remove_if(word.begin(), word.end(), ::isspace),
               word.end());

    word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());

    // convert to lower case
    for (auto &x : word)
    {
        x = tolower(x);
    }

    string original_word = word;

    reverse(word.begin(), word.end());

    cout << "original: " << original_word << "\n";
    cout << "reversed: " << word << "\n";

    return word == original_word;
}

int main()
{
    string hi = "A man, a plan, a canal, Panama";
    bool res = isPalindrome(hi);
    if (res)
    {
        cout << "the word is a palindrome"
             << "\n";
    }
    else
    {
        cout << "the word is not a palindrome"
             << "\n";
    }
    return 0;
}
