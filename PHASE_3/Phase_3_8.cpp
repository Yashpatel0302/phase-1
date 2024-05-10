#include <iostream>
#include <string>
using namespace std;

int isVowel(char c) 
{
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
	{
        return 1;
    } 
    
	else 
	{
        return 0;
    }
}

int main() 
{
    string word;
    cout << "Enter a word: ";
    cin >> word;

    int vowelCount = 0;
    int totalAsciiValue = 0;

    for (char c : word) 
	{
        if (isVowel(c)) 
		{
            vowelCount++;
            totalAsciiValue += int(c);
        }
    }

    double averageAsciiValue = 0;
    if (vowelCount != 0) 
	{
        averageAsciiValue = static_cast<double>(totalAsciiValue) / vowelCount;
    }

    string level;
    if (averageAsciiValue >= 10 && averageAsciiValue <= 31) 
	{
        level = "SOBER";
    }
	
    else if (averageAsciiValue > 31) 
	{
   		level = "HARER";
    }
     
	else if (averageAsciiValue > 0 && averageAsciiValue < 10) 
	{
       level = "SMOOHER";
    } 
    
	else
	{
        level = "GORGEOUS";
    }

    cout << "Total vowels: " << vowelCount << endl;
    if (vowelCount > 0) 
	{
        cout << "Vowels: ";
        for (char c : word) 
		{
            if (isVowel(c)) 
			{
                cout << c << " ";
            }
        }
        
        cout << endl;
        cout << "Average ASCII value of vowels: " << averageAsciiValue << endl;
    }
    cout << "Word level: " << level << endl;

    return 0;
}

