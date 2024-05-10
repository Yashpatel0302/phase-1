#include <iostream>
using namespace std;

int main() 
{
    int a,b,c;
    float avg;
    int pmarks=30;
    
    cout << "Enter the marks of three subjects: ";
    cin >> a >> b >> c;
    
    avg = (a + b + c) / 3;
    
    cout << "Average marks: " << avg << endl;
    
    if (avg >= pmarks) 
	{
        cout << "Congratulations! Priyank has passed." << endl;
    } 
	
	else
	{
        cout << "Sorry! Priyank has failed." << endl;
    }
    
    return 0;
    
}

