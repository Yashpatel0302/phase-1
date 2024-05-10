#include <iostream>
using namespace std;

int main() 
{
    int internalMarks[] = {23, 19, 22, 28, 23};
    
    int writtenMarks[] = {65, 58, 49, 52, 64};

    float totalMarks[5];

    for (int i = 0; i < 5; ++i) 
	{
        totalMarks[i] = ((float)internalMarks[i] / 30 * 20) + ((float)writtenMarks[i] / 70 * 80);
    }

    cout << "Marks out of 100 in each subject:" << endl;
    for (int i = 0; i < 5; ++i) 
	{
        cout << "Subject " << i+1 << ": " << (int)(totalMarks[i] * 100) / 100<< endl;
    }

    float total = 0;
    for (int i = 0; i < 5; ++i) 
	{
        total += totalMarks[i];
    }
    float average = total / 5;

    cout << endl << "Final total examination marks: " << (int)(total * 100) / 100 << " out of 500" << endl;
    cout << endl << "Final total average value: " << (int)(average * 100) / 100 << " out of 100" << endl;

    return 0;
}

