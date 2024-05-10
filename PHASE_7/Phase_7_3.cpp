#include <iostream>
using namespace std;

class List3 
{
private:
    int arr[3];

public:
    List3(const int (&array)[3]) 
	{
        for (size_t i = 0; i < 3; ++i) 
		{
            arr[i] = array[i];
        }
    }

    double average() 
	{
        double sum = 0;
        for (size_t i = 0; i < 3; ++i) 
		{
            sum += arr[i];
        }
        return sum / 3;
    }

    int max() 
	{
        int maximum = arr[0];
        for (size_t i = 1; i < 3; ++i) 
		{
            if (arr[i] > maximum) {
                maximum = arr[i];
            }
        }
        return maximum;
    }

    int min() 
	{
        int minimum = arr[0];
        for (size_t i = 1; i < 3; ++i) 
		{
            if (arr[i] < minimum) 
			{
                minimum = arr[i];
            }
        }
        return minimum;
    }
};

class List4 
{
private:
    int arr[4];

public:
    List4(const int (&array)[4]) 
	{
        for (size_t i = 0; i < 4; ++i) 
		{
            arr[i] = array[i];
        }
    }

    double average() 
	{
        double sum = 0;
        for (size_t i = 0; i < 4; ++i) 
		{
            sum += arr[i];
        }
        return sum / 4;
    }

    int max() 
	{
        int maximum = arr[0];
        for (size_t i = 1; i < 4; ++i) 
		{
            if (arr[i] > maximum) 
			{
                maximum = arr[i];
            }
        }
        return maximum;
    }

    int min() 
	{
        int minimum = arr[0];
        for (size_t i = 1; i < 4; ++i) 
		{
            if (arr[i] < minimum) 
			{
                minimum = arr[i];
            }
        }
        return minimum;
    }
};

int main() 
{
    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6, 7};

    List3 list1(array1);
    List4 list2(array2);

    char choice;
    do {
        cout << "Choose an operation:" << endl;
        cout << "A. Average value of the list" << endl;
        cout << "M. Max value in the list" << endl;
        cout << "N. Min value in the list" << endl;
        cout << "E. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (toupper(choice)) 
		{
            case 'A':
                cout << "Average value of the list: " << list1.average() << endl;
                break;
            case 'M':
                cout << "Max value in the list: " << list1.max() << endl;
                break;
            case 'N':
                cout << "Min value in the list: " << list1.min() << endl;
                break;
            case 'E':
                cout << end <<"Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
	
	while (toupper(choice) != 'E');

    return 0;
}

