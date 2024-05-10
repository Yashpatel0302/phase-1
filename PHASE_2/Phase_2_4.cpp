#include <iostream>
using namespace std;

double calculateArea(double base, double height) 
{
    return 0.5 * base * height;
}

int sumOfDigits(int number) 
{
    int sum = 0;
    while (number != 0) 
	{
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() 
{
    double base = 56.0;
    double height = 21.0;

    double area = calculateArea(base, height);

    cout << "Area of the triangle: " << area << " square units" << endl;

    int sum = sumOfDigits(static_cast<int>(area));

    cout << "Sum of all digits of the area: " << sum << endl;

    return 0;
}
