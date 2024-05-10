#include <iostream>
using namespace std;

int main() 
{
    float n;
    
    cout << "Enter a number: ";
    cin >> n;
    
    float x = n;
    float precision = 0.00001;
    
	while ((x * x - n) > precision) 
	{
        x = (x + n / x) / 2;
    }

    cout << "Square root is:"<< x <<endl;
    
    return 0;
}

