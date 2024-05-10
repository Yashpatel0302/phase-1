#include <iostream>
using namespace std;

void convertSeconds(int seconds) 
{
    int hours, minutes, remainingSeconds;

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    remainingSeconds = (seconds % 3600) % 60;

    cout << "Time: " << hours << " hours, " << minutes << " minutes, " << remainingSeconds << " seconds" << endl;
}

int main() 
{
    int seconds;

    cout << "Enter the number of seconds: ";
    cin >> seconds;

    convertSeconds(seconds);

    return 0;
}

