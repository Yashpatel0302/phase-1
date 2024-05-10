#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter number:";
	cin>>n;
	
	int i,flag=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			cout<<"not prime number...";
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"prime number...";
	}
	return 0;
}
