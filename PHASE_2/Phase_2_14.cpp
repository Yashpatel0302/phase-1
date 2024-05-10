#include <iostream>
using namespace std;

float calculateIncomeTax(float income) {
    float tax = 0;

    const float bracket1 = 250000;
    const float bracket2 = 500000;
    const float bracket3 = 1000000;
    const float percentage1 = 0.05;
    const float percentage2 = 0.1;
    const float percentage3 = 0.2;

    if (income <= bracket1) 
	{
        tax = income * percentage1;
    }
	
	 else if (income <= bracket2) 
	{
        tax = bracket1 * percentage1 + (income - bracket1) * percentage2;
    } 
	
	else if (income <= bracket3) 
	{
        tax = bracket1 * percentage1 + (bracket2 - bracket1) * percentage2 + (income - bracket2) * percentage3;
    } 
	
	else 
	{
        tax = bracket1 * percentage1 + (bracket2 - bracket1) * percentage2 + (bracket3 - bracket2) * percentage3 + (income - bracket3) * 0.3;
    }

    return tax;
}

int main() 
{
    float income;

    cout << "Enter the annual income: $";
    cin >> income;

    float tax = calculateIncomeTax(income);

    cout << "Income tax: $" << tax << endl;

    return 0;
}

