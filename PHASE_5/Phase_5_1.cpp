#include<iostream>
using namespace std;

class Calculator
{

	public:
		
	int add(int x,int y)
	{
		return x+y;
	}
	int sub(int x,int y)
	{
		return x-y;
	}
	int multi(int x,int y)
	{
		return x*y;
	}
	int divi(int x,int y)
	{
		return x/y;
	}
	int modul(int x,int y)
	{
		return x%y;
	}
};

int main()
{
	Calculator cal;
	
	int x;
	int y;
	
	int choice;
		
	do
	{
		
		cout<<"1 for add"<<endl;
		cout<<"2 for sub"<<endl;
		cout<<"3 for multi"<<endl;
		cout<<"4 for divi"<<endl;
		cout<<"5 for modul"<<endl;
		cout<<"0 for Exit"<<endl;
		
		cout<<"Enter your choice : - ";
		cin>>choice;
		
		switch(choice)
		{	
		case 1:
		 
		cout<<endl<<"Enter X velue : ";
		cin>>x;
		cout<<"Enter y velue : ";
		cin>>y;
		
		cout<<" sum is "<<cal.add(x,y)<<endl;
		break;
		
		case 2:
		 
		cout<<"Enter X velue : ";
		cin>>x;
		cout<<"Enter y velue : ";
		cin>>y;
		
		cout<<" sub is "<<cal.sub(x,y)<<endl;
		break;
		
		case 3:
		 
		cout<<"Enter X velue : ";
		cin>>x;
		cout<<"Enter y velue : ";
		cin>>y;
		
		cout<<" multi is "<<cal.multi(x,y)<<endl;
		break;
		
		case 4:
		 
		cout<<"Enter X velue : ";
		cin>>x;
		cout<<"Enter y velue : ";
		cin>>y;
		
		cout<<" divi is "<<cal.divi(x,y)<<endl;
		break;
		
		case 5:
		 
		cout<<"Enter X velue : ";
		cin>>x;
		cout<<"Enter y velue : ";
		cin>>y;
		
		cout<<" modul is "<<cal.modul(x,y)<<endl;
		break;
		
		case 0:
			cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
              cout << "Invalid choice! Please try again." << endl;
	}
   }
while (choice!=0);
}
