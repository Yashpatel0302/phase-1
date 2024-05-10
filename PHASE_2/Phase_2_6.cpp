#include <iostream>
using namespace std;

int main() 
{
    char operation;
    float num1, num2;

    do {
        cout << "Enter the operation (+, -, *, /) or 'q' to quit: ";
        cin >> operation;

        if (operation == 'q' || operation == 'Q')

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (operation) 
		{
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
                
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
                
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
                
            case '/':
                if (num2 != 0)
                {
                	cout << "Result: " << num1 / num2 << endl;
				}
				
                else
                {
                	cout << "Error! Division by zero." << endl;
				}
				
                break;
                
            default:
                cout << "Invalid operation. Please try again." << endl;
        }
    } 
	while (true);

    cout << "Exiting calculator. Goodbye!" << endl;

    return 0;
}

