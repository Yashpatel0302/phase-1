#include<iostream>
using namespace std;

int main()
{
	int n,temp,sum=0,r;
	
	cout<<"Enter number:";
	cin>>n;
	
	temp=n;
	
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	
	if(temp==sum)
	{
		cout<<"Armstrong number...";
	}
	
	else
	{
		cout<<"Not Armstrong number...";
	}
	
	return 0;
}
