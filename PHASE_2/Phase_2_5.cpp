#include <iostream>
using namespace std;

char generateGrade(int math, int phy, int chem) 
{
    if (math > 80 && phy > 75 && chem > 72)
    {
    	return 'A';
	}
        
    else if (math >= 60 && phy >= 55 && chem >= 50)
    {
    	return 'B';
	}
	
    else if (math >= 40 && phy >= 35 && chem >= 35)
    {
    	return 'C';
	}
	
    else
    {
    	return 'D'; 
	}
}

int main() 
{
    int N; 
    cout << "Enter the number of students: ";
    cin >> N;

    int math, phy, chem;

    cout << "\nGrades:\n";
    
    for (int i = 0; i < N; ++i) 
	{
        cout << "Enter marks for student " << i + 1 << " (Maths Physics Chemistry): ";
        cin >> math >> phy >> chem;
        
        char grade = generateGrade(math, phy, chem);
        cout << "Student " << i + 1 << ": " << grade << endl;
    }

    return 0;
}

