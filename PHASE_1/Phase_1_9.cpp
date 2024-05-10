#include<iostream>
using namespace std;

int power(int base, int raise) 
{
    int result = 1;
    for (int i = 0; i < raise; ++i) 
	{
        result *= base;
    }
    return result;
}

int main() 
{
    int base, raise;
    
    cout << "Enter number: ";
    cin >> base;
    cout << "Raise: ";
    cin >> raise;
    
    int result = power(base, raise);
    
    cout << "Number is: " << result;
    
    return 0;
}

