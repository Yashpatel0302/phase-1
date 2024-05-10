#include <iostream>
#include <string>
using namespace std;

string encodeMessage(const string& message, int shift) 
{
    string encodedMessage = "";
    for (char ch : message) 
	{
        if (isupper(ch)) 
		{
            encodedMessage += char(int(ch + shift - 65) % 26 + 65);
        }
        
        else if (islower(ch)) 
		{
            encodedMessage += char(int(ch + shift - 97) % 26 + 97);
        }
        
        else 
		{
            encodedMessage += ch;
        }
    }
    return encodedMessage;
}

string decodeMessage(const string& encodedMessage, int shift) 
{
    return encodeMessage(encodedMessage, 26 - shift);
}

int main() 
{
    int choice;
    cout << "Choose an option:\n";
    cout << "1. Encode\n";
    cout << "2. Decode\n";
    cin >> choice;

    if (choice == 1) 
	{
        string message;
        int shift;
        cout << "Enter the message to encode: ";
        cin.ignore();
        getline(cin, message);
        cout << "Enter the shift value: ";
        cin >> shift;
        cout << "Encoded Message: " << encodeMessage(message, shift) << endl;
    } 
    
    else if (choice == 2) 
	{
        string encodedMessage;
        int shift;
        cout << "Enter the message to decode: ";
        cin.ignore();
        getline(cin, encodedMessage);
        cout << "Enter the shift value: ";
        cin >> shift;
        cout << "Decoded Message: " << decodeMessage(encodedMessage, shift) << endl;
    } 
    
    else 
	{
        cout << "Invalid choice! Exiting...\n";
    }

    return 0;
}

