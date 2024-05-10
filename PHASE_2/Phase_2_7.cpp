#include <iostream>
using namespace std;

const float PI = 3.14;

int main() 
{
    char choice;
    float radius;

    do 
	{
        cout << "\nCircle Calculator" << endl;
        cout << "1. Calculate Area" << endl;
        cout << "2. Calculate Perimeter" << endl;
        cout << "3. Convert Radius to Diameter" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) 
		{
            case '1':
                cout << "Enter radius of the circle: ";
                cin >> radius;
                cout << "Area of the circle: " << PI * radius * radius << endl;
                break;
                
            case '2':
                cout << "Enter radius of the circle: ";
                cin >> radius;
                cout << "Perimeter of the circle: " << 2 * PI * radius << endl;
                break;
                
            case '3':
                cout << "Enter radius of the circle: ";
                cin >> radius;
                cout << "Diameter of the circle: " << 2 * radius << endl;
                break;
                
            case '4':
                cout << "Exiting Circle Calculator. Goodbye!" << endl;
                break;
                
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    } 
	while (choice != '4');

    return 0;
}

