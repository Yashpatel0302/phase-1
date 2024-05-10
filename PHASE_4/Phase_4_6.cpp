#include <iostream>

using namespace std;

int main() 
{
    int years[] = {1994, 1947, 2002, 1996, 1994, 2005, 1947, 1996, 2010};
    int size = sizeof(years) / sizeof(years[0]);

    const int max_year = 3000;
    int max[max_year + 1] = {0};

    for (int i = 0; i < size; ++i) 
	{
        max[years[i]]++;
    }

    int duplicateYears[max_year + 1];
    int duplicateCount = 0;

    for (int year = 0; year <= max_year; ++year) 
	{
        if (max[year] > 1) 
		{
            duplicateYears[duplicateCount++] = year;
        }
    }

    cout << "Duplicate Years:" << endl;
    for (int i = 0; i < duplicateCount; ++i) 
	{
        cout << duplicateYears[i] << " ";
    }
    cout << endl;

    return 0;
}

