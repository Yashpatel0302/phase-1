#include<iostream>
using namespace std;

int main()
{
	int p,r,t;
	cout<<"Principal:";
	cin>>p;
	
	cout<<"Rate:";
	cin>>r;
	
	cout<<"Time:";
	cin>>t;
	
	float s;
	
	s=(p*r*t)/100;
	
	cout<<"Simple Intrest is:"<<s;
	
	return 0;
}
