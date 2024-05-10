#include <iostream>
#include <string>
using namespace std;

char toLower(char ch) 
{
    if (ch >= 'A' && ch <= 'Z')
    {
	    return ch + ('a' - 'A');
	    return ch;
	}
}

bool isVowel(char ch) 
{
    ch = toLower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

bool isConsonant(char ch) 
{
    return isalpha(ch) && !isVowel(ch);
}

bool isDigit(char ch) 
{
    return ch >= '0' && ch <= '9';
}

bool isSpecialSymbol(char ch) 
{
    return !isalnum(ch);
}

void identifyLiterals(const string& message) 
{
    int vowels = 0, consonants = 0, digits = 0, specialSymbols = 0;

    for (char ch : message) 
	{
        if (isalpha(ch)) 
		{
            if (isVowel(ch))
        	{
        		vowels++;
			}
			
            else
            {
            	consonants++;
			}
			
        } 
        
		else if (isdigit(ch)) 
		{
            digits++;
        } 
		
		else 
		{
            specialSymbols++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special Symbols: " << specialSymbols << endl;
}

int main() 
{
    string message;
    cout << "Enter the message: ";
    getline(cin, message);

    identifyLiterals(message);

    return 0;
}

