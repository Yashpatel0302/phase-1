#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter number:";
	cin>>n;
	
	int i,count=0;
	while(n!=0)
	{
		n/=10;
		count++;
	}
	cout<<"Total digit is:"<<count;
	return 0;
}
