#include<iostream>
using namespace std;

int main()
{
	int t,i,n;
	int f=0,s=1;
	
	cout<<"Enter number:";
	cin>>n; 
	
	cout<<"factorial series:";
	
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
			t=i;
		}
		
		else
		{
			t=f+s;
			f=s;
			s=t;
		}
		cout<<t<<",";
	}
	
	return 0;
}
