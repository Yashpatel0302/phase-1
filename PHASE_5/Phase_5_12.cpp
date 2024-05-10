#include<iostream>
using namespace std;

class bus
{
	public:
		float distanc;
		float time;

		bus(float d, float t) 
		{
	        distanc = d;
	        time = t;
    	}
    	
 	float velocity()
	{
		return distanc/time;
	}
};

int main()
{
	float distanc=1933.0;
	
	bus busb1(distanc, 40.0); 
    bus busb2(distanc, 46.0); 	 

	float velocityB1;
	float velocityB2;
	
	velocityB1=busb1.velocity();
	velocityB2=busb2.velocity();
	
	cout<<"Velocity of Bus B1: "<<velocityB1<<endl;
	cout<<"Velocity of Bus B2: "<<velocityB2<<endl;
	
	return 0;
}
