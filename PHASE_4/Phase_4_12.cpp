#include <iostream>
using namespace std;

void upper(int matrix[][5], int size) 
{
    for (int i = 0; i < size; ++i) 
	{
        for (int j = 0; j <= i; ++j) 
		{
            cout << "Student " << matrix[i][j] << " throws hat." << endl;
        }
    }
}

void lower(int matrix[][5], int size) 
{
    for (int i = 1; i < size; ++i) 
	{
        for (int j = i; j < size; ++j) 
		{
            cout << "Student " << matrix[i][j] << " throws hat." << endl;
        }
    }
}

int main() 
{
    int students[5][5] = 
	{
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    cout << "Upper half hat throwing ceremony:" << endl;
    upper(students, 5);

    cout << "\nLower half hat throwing ceremony:" << endl;
    lower(students, 5);

    return 0;
}

