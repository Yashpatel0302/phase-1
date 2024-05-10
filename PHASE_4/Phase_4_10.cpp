#include <iostream>
using namespace std;

int sumOfDiagonals(int matrix[][5], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; ++i) 
	{
        sum += matrix[i][i]; 
        sum += matrix[i][size - i - 1]; 
    }
    if (size % 2 == 1) 
	{
        sum -= matrix[size / 2][size / 2];
    }
    return sum;
}

int main() 
{
    int puzzle[5][5] = 
	{
        {2, 4, 5, 8, 9},
        {1, 3, 6, 7, 9},
        {8, 2, 4, 3, 6},
        {5, 4, 7, 1, 2},
        {9, 6, 3, 4, 5}
    };

    int size = 5;

    int diagonalSum = sumOfDiagonals(puzzle, size);

    cout << "Sum of diagonally aligned numbers: " << diagonalSum << endl;

    return 0;
}

