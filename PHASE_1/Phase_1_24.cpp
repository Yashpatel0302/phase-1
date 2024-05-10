#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char n[20],len;
	
	cout<<"Enter string:";
	cin>>n;
	
	int i,flag=0;
	len=strlen(n);
	
	for(i=0;i<len;i++)
	{
		if(n[i]!=n[len-i-1])
		{
			flag=1;
			break;
		}
	}
	
	if(flag==0)
	{
		cout<<"palindrome number...";
	}
	
	else
	{
		cout<<"not palindrome number...";
	}
	
	return 0;	
}
