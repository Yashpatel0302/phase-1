#include <iostream>
using namespace std;

int main() 
{
    const int capacity = 5;
    int jar[capacity];

    cout << "Enter the labels of the tennis balls:" << endl;
    for (int i = 0; i < capacity; ++i) 
	{
        cin >> jar[i];
    }

    for (int i = 0; i < capacity / 2; ++i) 
	{
        int temp = jar[i];
        jar[i] = jar[capacity - 1 - i];
        jar[capacity - 1 - i] = temp;
    }

    cout << "Balls in the jar in reverse order:" << endl;
    for (int i = 0; i < capacity; ++i) 
	{
        cout << jar[i] << " ";
    }
    cout << endl;

    return 0;
}

