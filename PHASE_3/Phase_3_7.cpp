#include <iostream>
using namespace std;

void toLowerCase(char str[]) 
{
    for (int i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] >= 'A' && str[i] <= 'Z') 
		{
            str[i] = str[i] + 32;
        }
    }
}

void toUpperCase(char str[]) 
{
    for (int i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] >= 'a' && str[i] <= 'z') 
		{
            str[i] = str[i] - 32;
        }
    }
}

void toTitleCase(char str[]) 
{
    for (int i = 0; str[i] != '\0'; i++) 
	{
        if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '.') 
		{
            if (str[i] >= 'a' && str[i] <= 'z') 
			{
                str[i] = str[i] - 32;
            }
        }
    }
}

void toToggleCase(char str[]) 
{
    for (int i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] >= 'A' && str[i] <= 'Z') 
		{
            str[i] = str[i] + 32;
        } else if (str[i] >= 'a' && str[i] <= 'z') 
		{
            str[i] = str[i] - 32;
        }
    }
}

int main() 
{
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);

    int choice;
    cout << "Choose an option:\n";
    cout << "1. Convert to lowercase\n";
    cout << "2. Convert to uppercase\n";
    cout << "3. Convert to title case\n";
    cout << "4. Convert to toggle case\n";
    cin >> choice;

    switch (choice) 
	{
        case 1:
            toLowerCase(input);
            break;
        case 2:
            toUpperCase(input);
            break;
        case 3:
            toTitleCase(input);
            break;
        case 4:
            toToggleCase(input);
            break;
        default:
            cout << "Invalid choice.";
            return 1;
    }

    cout << "Converted string: " << input << endl;

    return 0;
}

