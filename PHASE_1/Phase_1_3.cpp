#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout<<"quotient:";
	cin>>a;
	
	cout<<"remainder.:";
	cin>>b;
	
	int quotient,remainder;
	
	quotient=a/b;
	remainder=a%b;
	
	cout<<"quotient is:"<<quotient<<endl;
	cout<<"remainder is:"<<remainder;
	
	return 0;
}
