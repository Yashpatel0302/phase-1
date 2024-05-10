#include<iostream>
using namespace std;

class time
{
	int hours;
	int min;
	int seco;
	
	public:
		
	void setdata()
	{

		cout<<"Enter hour "<<endl;
		cin>>hours;
		cout<<"Enter minutes "<<endl;
		cin>>min;
		cout<<"Enter seconds "<<endl;
		cin>>seco;
		
	}
	
	int getdata()
	{
		return hours * 3600 + min * 60 + seco;
	}
	
	void timedifference(time t2)
	{
		int diff=getdata()-t2.getdata();
		cout << "Time difference in seconds: " << diff << endl;
   	
	}		
};

int main()
{
	time t1,t2;
	
	int diff;
	
	t1.setdata();
	t2.setdata();
	
	t1.timedifference(t2);
	
	return 0;
		
};

