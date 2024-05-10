#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	
	cout<<"Enter first:";
	cin>>a;
	
	cout<<"Enter second:";
	cin>>b;
	
	cout<<"Enter third:";
	cin>>c;
	
	cout<<"Enter fourth:";
	cin>>d;

	if(a>b)	
	{
		if(a>c)
		{
			if(a>d)
			{
				cout<<"First number is largest number...";
			}
			
			else
			{
				
				cout<<"Forth number is largest number...";
			}
		}
		
		else
		{
			if(c>d)
			{
				cout<<"Third number is largest number...";
			}
			
			else
			{
				cout<<"Forth number is largest number...";
			}
		}
	}
	
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				cout<<"Second number is largest number...";
			}
			
			else
			{
				cout<<"Forth number is largest number...";
			}
		}
		
		else
		{
			if(c>d)
			{
				cout<<"Third number is largest number...";
			}
			
			else
			{
				cout<<"Fourth number is largest number...";
			}
		}
	}
	
	return 0;
}
