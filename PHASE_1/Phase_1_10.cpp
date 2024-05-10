#include <iostream>
using namespace std;

int main() 
{
    int total_days;
    
    cout << "Enter total days: ";
    cin >> total_days;
    
    int year,week,remaining_days;
    
    year = total_days / 365;
    
    remaining_days = total_days % 365;
    
    week = remaining_days / 7;
    
    remaining_days = remaining_days % 7;
    
    cout << "Years: " << year << endl;
    cout << "Weeks: " << week << endl;
    cout << "Days: " << remaining_days << endl;
    
    return 0;
}

