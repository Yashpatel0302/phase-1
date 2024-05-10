#include <iostream>
using namespace std;

int main() 
{
    int totalDays;
    cout << "Enter total days: ";
    cin >> totalDays;
    
    int year,week,remainingDays;
    
    year = totalDays / 365;
    remainingDays = totalDays % 365;
    week = remainingDays / 7;
    remainingDays = remainingDays % 7;
    
    cout << "Years: " << year << endl;
    cout << "Weeks: " << week << endl;
    cout << "Days: " << remainingDays << endl;
    
    return 0;
}

