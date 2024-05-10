#include<iostream>
using namespace std;

class facto
{
	int n;
	int i;
	
	public:
		

	int factorial(int n) 	
	{
		if (n == 0 || n == 1)
        {
        	return 1;
		}
        else
    	{
    		return n * factorial(n - 1);
		}
    }
    
    void calculateFactorials(int a,int b) 
	{
    	if (a > b) 
    	{
    		cout << "Invalid ...." << endl;
            return;
    	}

        for(i=a;i<=b;i++)
        {
			cout<<"Factorial :  "<<factorial(i)<<endl;	
	    }
	}
 	
};
int main()
{
	
	int a;
	int b;
	
	cout<<"Enter any number"<<endl;
	cin>>a;
	
	cout<<"Enter any number"<<endl;
	cin>>b;

	facto f;
	f.calculateFactorials(a,b);
	
	return 0;	
}
