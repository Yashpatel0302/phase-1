#include<iostream>
using namespace std;

class canvas
{
	public:
		
	int width ;
	int height ;
		
	int phrase_width ;
	int phrase_height;
	
	int distance ;
	
	int horizontal_phrases;
	int vertical_phrases;
	int total_phrases;

	void A4Canvas(int width , int height, int phrase_width, int phrase_height, int distance) 
	{
       	this->width = width;
        this->height = height;
        this->phrase_width = phrase_width;
        this->phrase_height = phrase_height;
        this->distance = distance;	
	}	
	
	void total()
	{
		horizontal_phrases = (width- distance) / (phrase_width + distance);
		vertical_phrases = (height - distance) / ( phrase_height + distance);
		total_phrases = horizontal_phrases * vertical_phrases;
	}
	
	int gettotal()
	{
		return total_phrases;
	}
	
};

int main()
{	
	canvas  can;
	int total_phrases;
	can.A4Canvas(2480,3508,350,90,8);
	can.total();
	total_phrases=can.gettotal();
	
	cout<<"Total number of phrases arranged in an A4 size Canvas is : "<<total_phrases<<endl;
	
	return 0;
}

