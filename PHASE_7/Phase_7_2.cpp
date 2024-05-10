#include <iostream>
using namespace std;

class Calculator 
{
public:
    int add(int a, int b) 
	{
        return a + b;
    }

    int subtract(int a, int b) 
	{
        return a - b;
    }

    int multiply(int a, int b) 
	{
        return a * b;
    }

    int divide(int a, int b) 
	{
        if (b == 0) 
		{
            cout << "Error: Division by zero!" << std::endl;
            return 0;
        }
        return a / b;
    }

    int modulus(int a, int b) 
	{
        if (b == 0) {
            cout << "Error: Modulus by zero!" << std::endl;
            return 0;
        }
        return a % b;
    }
};

int main() 
{
    char choice;
    Calculator calc;

    do {
        cout << "Choose an operation:" << endl;
        cout << "A. Addition" << endl;
        cout << "S. Subtraction" << endl;
        cout << "M. Multiplication" << endl;
        cout << "D. Division" << endl;
        cout << "O. Modulus" << endl;
        cout << "E. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (toupper(choice)) {
            case 'A': {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << calc.add(a, b) << endl;
                break;
            }
            case 'S': {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << calc.subtract(a, b) << endl;
                break;
            }
            case 'M': {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << calc.multiply(a, b) << endl;
                break;
            }
            case 'D': {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << calc.divide(a, b) << endl;
                break;
            }
            case 'O': {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << calc.modulus(a, b) << endl;
                break;
            }
            case 'E':
                cout << endl << "Exiting..." << std::endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (toupper(choice) != 'E');

    return 0;
}

