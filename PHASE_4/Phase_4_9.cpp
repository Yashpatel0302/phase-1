#include <iostream>
using namespace std;

void min_max(int refugees[][3], int& minWeight, int& maxWeight) 
{
    minWeight = maxWeight = refugees[0][0];

    for (int i = 0; i < 3; ++i) 
	{
        for (int j = 0; j < 3; ++j) 
		{
            if (refugees[i][j] < minWeight) 
			{
                minWeight = refugees[i][j];
            }
            if (refugees[i][j] > maxWeight) 
			{
                maxWeight = refugees[i][j];
            }
        }
    }
}

int main() {
    int refugees[3][3];

    cout << "Enter the weights of the refugees in the 3x3 matrix formation:" << endl;
    for (int i = 0; i < 3; ++i) 
	{
        for (int j = 0; j < 3; ++j) 
		{
            cin >> refugees[i][j];
        }
    }

    int minWeight, maxWeight;
    min_max(refugees, minWeight, maxWeight);

    cout << "The refugee with the lowest weight weighs: " << minWeight << endl;
    cout << "The refugee with the highest weight weighs: " << maxWeight << endl;

    return 0;
}

