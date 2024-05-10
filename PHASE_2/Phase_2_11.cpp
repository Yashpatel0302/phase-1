#include <iostream>
using namespace std;

float celsiusToFahrenheit(float celsius) 
{
    return (celsius * 9 / 5) + 32;
}

float fahrenheitToCelsius(float fahrenheit) 
{
    return (fahrenheit - 32) * 5 / 9;
}

float celsiusToKelvin(float celsius) 
{
    return celsius + 273.15;
}

float kelvinToCelsius(float kelvin) 
{
    return kelvin - 273.15;
}

float fahrenheitToKelvin(float fahrenheit) 
{
    return (fahrenheit + 459.67) * 5 / 9;
}

float kelvinToFahrenheit(float kelvin) 
{
    return kelvin * 9 / 5 - 459.67;
}

int main() 
{
    float temperature;
    char choice;

    cout << "Temperature Converter" << endl;
    cout << "Enter the temperature: ";
    cin >> temperature;

    cout << "Enter the scale of temperature (C, F, K): ";
    cin >> choice;

    switch (choice) 
	{
        case 'C':
        case 'c':
            cout << "Temperature in Celsius: " << temperature << endl;
            cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << endl;
            cout << "Temperature in Kelvin: " << celsiusToKelvin(temperature) << endl;
            break;
            
        case 'F':
        case 'f':
            cout << "Temperature in Fahrenheit: " << temperature << endl;
            cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature) << endl;
            cout << "Temperature in Kelvin: " << fahrenheitToKelvin(temperature) << endl;
            break;
            
        case 'K':
        case 'k':
            cout << "Temperature in Kelvin: " << temperature << endl;
            cout << "Temperature in Celsius: " << kelvinToCelsius(temperature) << endl;
            cout << "Temperature in Fahrenheit: " << kelvinToFahrenheit(temperature) << endl;
            break;
            
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

