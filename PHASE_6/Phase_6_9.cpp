#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int base,raise;
	
	cout<<"Enter number:";
	cin>>base;
	cout<<"raise";
	cin>>raise;
	
	int result;
	
	result=pow(base,raise);
	cout<<"number is:"<<result;
	
	return 0;
}
