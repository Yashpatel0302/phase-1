#include <iostream>
using namespace std;

double calculateBMI(double weight, double height) 
{
    return weight / (height * height);
}

int main() 
{
    double weight, height;

    cout << "Enter weight (in kilograms): ";
    cin >> weight;

    cout << "Enter height (in meters): ";
    cin >> height;

    double bmi = calculateBMI(weight, height);

    cout << "BMI: " << bmi << endl;

    if (bmi < 18.5) 
	{
        cout << "Underweight" << endl;
    } 
	
	else if (bmi >= 18.5 && bmi < 25) 
	{
        cout << "Normal weight" << endl;
    } 
	
	else if (bmi >= 25 && bmi < 30) 
	{
        cout << "Overweight" << endl;
    } 
	
	else 
	{
        cout << "Obese" << endl;
    }

    return 0;
}

