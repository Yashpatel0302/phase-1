#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string n;
	cout<<"Enter string:";
	cin>>n;
	
	int vowel=0,cons=0;
	int i;
	
	for(i=0;n[i]!='\0';i++)
	{
		if(n[i]>='A' && n[i]<='Z' || n[i]>='a' && n[i]<='z')
		{
			if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u' || n[i]=='A' || n[i]=='E' || n[i]=='I' || n[i]=='O' || n[i]=='U')
				vowel++;	
			else
				cons++;
		}
	}
	
	cout<<"vowel:"<<vowel<<endl;
	cout<<"constant:"<<cons;
	
	return 0;
}
