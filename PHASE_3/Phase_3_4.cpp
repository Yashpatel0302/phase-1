#include <iostream>
#include <string>

using namespace std;

struct Name 
{
    string firstName;
    string lastName;
};

int main() 
{
    const int MAX_ENTRIES = 100;
    Name passportData[MAX_ENTRIES];

    passportData[0] = {"John", ""};
    passportData[1] = {"", "Doe"};

    for (int i = 0; i < MAX_ENTRIES; ++i) 
	{
        if (!passportData[i].firstName.empty() && !passportData[i].lastName.empty()) 
		{
            cout << "Passport ID: " << i + 1 << endl;
            cout << "Name: " << passportData[i].firstName << " " << passportData[i].lastName << endl;
        }
    }

    return 0;
}

