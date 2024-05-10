#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter the starting value (n1) : ";
    cin >> n1;

    cout << "Enter the ending value (n2) : ";
    cin >> n2;

    if (n1 <= n2)
    {
    	cout << endl << "Multiplication Tables between " << n1 << " and " << n2 << ":" << endl
        << endl;

        for (int i = n1; i <= n2; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                cout << i << " x " << j << " = " << i * j << endl;
            }
        }
    }
    else
    {
        cout << endl << "Invalid input. The starting value (n1) should be less than or equal to the ending value (n2)." << endl;
    }

    return 0;
}
