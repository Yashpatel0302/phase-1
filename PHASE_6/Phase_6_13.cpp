#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string n;
	cout<<"Enter Name:";
	cin>>n;
	
	int i;
	
	for(i=0;n[i]!='\0';i++)
	{
		if(n[i]>=65 && n[i]<=90)
		{
			cout<<"character is uppercase..."<<n[i]<<endl;
		}
		
		else if(n[i]>=97 && n[i]<=122)
		{
			cout<<"character is lowecase..."<<n[i]<<endl;
		}
		
		else if(n[i]>=48 && n[i]<=57)
		{
			cout<<"Digits..."<<n[i]<<endl;
		}
		
		else if(n[i]>=33 && n[i]<=47 || n[i]>=58 && n[i]<=64) 
		{
			cout<<"special sysmbol..."<<n[i]<<endl;
		}
	}
	return 0;
}
