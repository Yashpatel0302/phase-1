#include <iostream>
#include <string>
using namespace std;

string processString(const string& str) 
{
    if (str.length() > 3 && str.length() < 9) 
	{
        string reversedStr = str;
        reverse(reversedStr.begin(), reversedStr.end());
        return reversedStr;
    } 
	
	else 
	{
        int sum = 0;
        for (char ch : str) 
		{
            sum += int(ch);
        }
        return to_string(sum);
    }
}

int main() 
{
    string inputString;
    cout << "Enter a string: ";
    cin >> inputString;

    string result = processString(inputString);

    cout << "Result: " << result << endl;

    return 0;
}

