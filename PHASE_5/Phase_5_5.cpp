#include <iostream>
using namespace std;

class ScientificCalculator 
{
public:
    double findMax(double a, double b, double c) 
	{
        return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    }

    double square(double num) 
	{
        return num * num;
    }

    double squareRoot(double num) 
	{
        if (num < 0) 
		{
            cout << "Error: Cannot calculate square root of a negative number." << endl;
            return 0;
        }
        
        double guess = num / 2.0;
        double prevGuess;
        do 
		{	
            prevGuess = guess;
            guess = (guess + num / guess) / 2.0;
        } 
		
		while (abs(prevGuess - guess) >= 0.00001);
		
        return guess;
    }

    void findComponents(double num) 
	{
        cout << "Components of " << num << " are: ";
        for (int i = 1; i <= num; ++i) 
		{
            if (fmod(num, i) == 0) 
			{
                cout << i << " ";
            }
        }
    }
};

int main() 
{
    double num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    ScientificCalculator calculator;

    double max = calculator.findMax(num1, num2, num3);
    cout << "Maximum number is: " << max << endl;
    cout << "Square of " << num1 << " is: " << calculator.square(num1) << endl;
    cout << "Square root of " << num2 << " is: " << calculator.squareRoot(num2) << endl;

    calculator.findComponents(num3);

    return 0;
}

