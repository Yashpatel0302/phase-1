#include <iostream>
using namespace std;

int  average(const int arr[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; ++i) 
	{
        sum =sum+arr[i];
    }
    return sum / n;
}


string determineKind(const int arr[], int n) 
{
    float avg = average(arr, n);
    
    if (avg >= 22 && avg <= 35) 
	{
		return "HIGH";
	}
	
    else if (avg > 35 && avg <= 50) 
    {
    	return "BALANCED";
	}
	
    else if (avg > 50) 
    {
    	return "TOXIC";
	}
	
    else 
    {
    	return "LOOSE";
	}
}

int main() 
{
    int arr[] = {100,s200,300,400,500,600,700,800,900,1000};
    int size = sizeof(arr) / sizeof(arr[0]);

    string kind = determineKind(arr, size);
    cout << "Array is " << kind << endl;

    return 0;
}

