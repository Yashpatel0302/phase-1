#include <iostream>
#include <string>
using namespace std;

	string findAndReplace(const std::string& input, char find, char replace) 
	{
   		string result = input;
	    for (char& c : result) 
		{
	        if (c == find) 
			{
	            c = replace;
	        }
    }
    return result;
}

int main() 
{
    string message = "Find and Replace mechanism for any given message or string.";
    cout << "Original message: " << message << endl;
    string replacedMessage = findAndReplace(message, '2', 'X');
    cout << "After replacement: " << replacedMessage << endl;
    return 0;
}
