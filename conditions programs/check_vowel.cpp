#include <iostream>
using namespace std;
main()
{
    char c;
    cout << "Enter a alphabet: " << endl;
    cin >> c;
    char lowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    char uppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (lowercaseVowel || uppercaseVowel)
    {
        cout << "Vowel" << endl;
    }
    else
    {
        cout << "Consonant" << endl;
    }
}