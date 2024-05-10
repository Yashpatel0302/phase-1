#include <iostream>
using namespace std;

void extractPureUsername(char* username, char* pureUsername) 
{
    int index = 0;
    for (int i = 0; username[i] != '\0'; i++) 
	{
        if ((username[i] >= 'a' && username[i] <= 'z') || (username[i] >= 'A' && username[i] <= 'Z')) 
		{
            pureUsername[index++] = username[i];
        }
    }
    pureUsername[index] = '\0';
}

int main() 
{
    char username[100];
    char pureUsername[100];

    cout << "Enter your username: ";
    cin.getline(username, 100);

    extractPureUsername(username, pureUsername);

    cout << "Pure username: " << pureUsername << endl;

    return 0;
}

