#include <iostream>
using namespace std;

int main()
{
	int n;
	int i;
	int first=0;
	int second=1;
	int temp;

	cout << "Enter the number : ";
	cin >> n;



	for (i=0;i<n;i++) 
	{
		cout << first <<endl;
		temp=first+second;
		first=second;
		second=temp;
	}

	return 0;

}
