#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter year:";
	cin>>n;
	
	if(n%4==0)
	{
		cout<<"leap year...";
	}
	else
	{
		cout<<"not leap year...";
	}
	return 0;
}
