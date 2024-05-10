#include <iostream>

using namespace std;

int main() 
{
    int numbers[] = {2, 7, 15, 10, 23, 8, 14, 17, 6, 9};
    
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int oddNumbers[size], evenNumbers[size];
    int oddCount = 0, evenCount = 0;

    for (int i = 0; i < size; ++i) 
	{
        if (numbers[i] % 2 == 0) 
		{
            evenNumbers[evenCount++] = numbers[i];
        } 
        
		else 
		{
            oddNumbers[oddCount++] = numbers[i];
        }
    }

    cout << "Odd Numbers:" << endl;S
    for (int i = 0; i < oddCount; ++i) 
	{
        cout << oddNumbers[i] << " ";
    }
    cout << endl;

    cout << endl << "Even Numbers:" << endl;
    for (int i = 0; i < evenCount; ++i) 
	{
        cout << evenNumbers[i] << " ";
    }
    cout << endl;
    
    return 0;
}

