#include <iostream>
#include <string>
using namespace std;

void calculateFrequency(const string& str, int freqMap[]) 
{
    for (char ch : str) 
	{
        if (isalpha(ch)) 
		{
            if (isupper(ch))
            {
            	freqMap[ch - 'A']++;
			}
            else
            {
            	freqMap[ch - 'a']++;
			}
        }
    }
}

int main() 
{
    string inputString;
    cout << "Enter the string: ";
    getline(cin, inputString);

    int frequencyArray[26] = {0};
    calculateFrequency(inputString, frequencyArray);

    cout << "Frequency of each character:\n";
    bool winnerFound = false;
    for (int i = 0; i < 26; ++i) 
	{
        if (frequencyArray[i] != 0) 
		{
            cout << char('a' + i) << ": " << frequencyArray[i] << endl;
            winnerFound = true;
        }
    }

    string winner;
    if (winnerFound) 
	{
        winner = "Both Nayan and Dhruv win as frequency calculated!";
    } 
	
	else 
	{
        winner = "No winner, input string contains no alphabetic characters.";
    }

    cout << "\nWinner: " << winner << endl;

    return 0;
}

