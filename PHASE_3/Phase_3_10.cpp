#include <iostream>
#include <string>
using namespace std;

string reverseString(const string& str) 
{
    string reversed = str;
    int left = 0, right = reversed.length() - 1;
    
    while (left < right) 
	{
        char temp = reversed[left];
        reversed[left] = reversed[right];
        reversed[right] = temp;
        left++;
        right--;
    }
    return reversed;
}

int main() 
{
    cout << "Enter the historical words from the philosopher's diary (type 'exit' to end):\n";

    string word;
    while (true) 
	{
        cout << "> ";
        cin >> word;

        if (word == "exit") 
		{
            break;
        }

        string mirroredWord = reverseString(word);
        cout << "Mirrored word: " << mirroredWord << endl;
    }

    return 0;
}

