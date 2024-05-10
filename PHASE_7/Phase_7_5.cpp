#include <iostream>
using namespace std;

void identifyCharacter(char character) 
{
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    	{
    		cout << endl << "Alphabet" << endl;
		}
        
    else if (character >= '0' && character <= '9')
        {
        	cout << endl << "Digit" << endl;
		}
		
    else
       {
       		cout << endl << "Symbol" << endl;
	   }
}

int main() 
{
    char input;
    cout << "Enter a character: ";
    cin >> input;
    identifyCharacter(input);
    
    return 0;
}

