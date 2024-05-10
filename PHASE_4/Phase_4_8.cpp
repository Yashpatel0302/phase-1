#include <iostream>
using namespace std;

void transposeMatrix(int mat[][10], int rows, int cols) 
{
    int transposedMat[10][10];

    for (int i = 0; i < cols; ++i) 
	{
        for (int j = 0; j < rows; ++j) 
		{
            transposedMat[i][j] = mat[j][i];
        }
    }

    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < cols; ++i) 
	{
        for (int j = 0; j < rows; ++j) 
		{
            cout << transposedMat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    int mat[10][10];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) 
	{
        for (int j = 0; j < cols; ++j) 
		{
            cin >> mat[i][j];
        }
    }

    transposeMatrix(mat, rows, cols);

    return 0;
}

