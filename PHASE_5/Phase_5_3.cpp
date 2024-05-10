#include <iostream>
using namespace std;

class Bowls 
{
	private:
	    int bowl1;
	    int bowl2;
		int temp;
	public:
	    
	    Bowls() : bowl1(1), bowl2(1) {}
	
	       void transferCoins()  
		   {
		        temp = bowl1;
		   		bowl1 = bowl2;
		   		bowl2 = temp;
		   }
	
	      void displayState() 
		  {
	       		cout << "Bowl 1 has " << bowl1 << " coin and Bowl 2 has " << bowl2 << " coins." << endl;
	      }
};

int main() {
    
    Bowls bowls;

    bowls.displayState();
    bowls.transferCoins();
    bowls.displayState();

    return 0;
}

