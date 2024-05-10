#include <iostream>
using namespace std;

void dotProduct(int mat1[][3], int mat2[][2], int result[][2], int m, int p, int n) 
{
    for (int i = 0; i < m; ++i) 
	{
        for (int j = 0; j < n; ++j) 
		{
            result[i][j] = 0;
            for (int k = 0; k < p; ++k) 
			{
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int mat[][2], int m, int n) 
{
    for (int i = 0; i < m; ++i) 
	{
        for (int j = 0; j < n; ++j) 
		{
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int mat1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[2][2];

    int m = 2;
    int p = 3;
    int n = 2;

    dotProduct(mat1, mat2, result, m, p, n);

    cout << "Dot Product:" << endl;
    displayMatrix(result, m, n);

    return 0;
}

