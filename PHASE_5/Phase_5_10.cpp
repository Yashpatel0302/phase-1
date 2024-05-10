#include<iostream>
using namespace std;

class bomb
{
	int n;
	int temp;
	int r;
	int add;
	
	public:
	
	void setdata()
	{
		cout<<"Enter number : ";
		cin>>n;
	} 
	
	void getdata()
	{
		add=0;
		temp=n;
		while(n>0)
		{
			r=n%10;
			add=(r*r*r)+add;
			n=n/10;
		}
		
		if(temp==add)
		{
			cout<<"this number is Armstrong number....";
		}
		
		else
		{
			cout<<"this number is not Armstrong number....";
		}	
	}
};

int main()
{
	bomb arm;
	
	arm.setdata();
	arm.getdata();
	
	return 0;
}
