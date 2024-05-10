#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Enter number:";
	cin>>n;
	
	int i;
	
	for(i=0;i<=10;i++)
	{
		cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
	}
	
	return 0;
}
