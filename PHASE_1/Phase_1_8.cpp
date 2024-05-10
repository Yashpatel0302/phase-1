#include <iostream>
using namespace std;

int main() 
{
    int inch,feet,remaining;
    
    cout << "Enter height in inche: ";
    cin >> inch;
    
    feet=inch/12;
    remaining=inch%12;
    
    cout<< "Height: "<<feet<<endl;
	cout<<" feet "<<remaining;
	
    return 0;
}

