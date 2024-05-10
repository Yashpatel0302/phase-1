#include<iostream>
using namespace std;

int dimension (int win_width,int win_height)
{
	const int width =10;
	const int height =4;
	const int extra =2;
	int required_Width;
	int required_Height;
	
	required_Width = width +2 * extra;
	required_Height = height +2 *extra;
	
	if (win_width == required_Width && win_height == required_Height) 
	{
        return true;
    }
    
	else 
	{
        return false;
    }
	
}

int main()
{
	int win_width;
	int win_height;
	cout<<"Enter the width of curtain: ";
	cin>>win_width;
	
	cout<<"Enter the height of curtain: ";
	cin>>win_height;
	
	if (dimension(win_width, win_height)) 
	{
        cout << "The curtain dimensions perfectly ...." << endl;
    } 
    
	else 
	{
        cout << "The curtain dimensions do not satisfy the criteria." << endl;
    }
    
    return 0;
	
}
