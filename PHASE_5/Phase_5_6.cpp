#include<iostream>
using namespace std;

int main()
{
	int n;
	int rev=0;
	int temp;
	cout<<"Enter number : ";
	cin>>n;
	
	temp=n;
	while(temp !=0)
	{
		rev=rev*10;
		rev=rev+temp%10;
		temp=temp/10;
	}
	cout<<rev<<endl;
	
	return 0;	
} 
