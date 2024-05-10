#include <iostream>
#include <string>
using namespace std;

int a(const string& word) 
{
    for (int i = 0; i < word.length(); ++i) 
	{
        char ch = word[i]; 

        if ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64)) 
		{
            return 1; 
        }
    }
    return 0; 
}

int main() 
{
    string word;

    cout << "Enter a word: ";
    cin >> word;

    if (a(word)) 
	{
        cout << "The word contains a character between the SHIFT keys.\n";
    } 
	else 
	{
        cout << "The word does not contain a character between the SHIFT keys.\n";
    }

    return 0;
}

