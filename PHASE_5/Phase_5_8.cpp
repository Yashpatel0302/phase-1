#include<iostream>
using namespace std;

void secondsToTime(int totalsecond, int &hour, int &min, int &sec) 
{
    hour = totalsecond / 3600;
    min = (totalsecond % 3600) / 60;
    sec = totalsecond % 60;
}


int timeToSeconds(int hour, int min, int sec) 
{
    return hour * 3600 + min * 60 + sec;
}

int main()
{
    int choice;
	int hours;
	int minutes; 
	int seconds;

    do {
            cout<<"1. Convert seconds to HH:MM:SS"<<endl;
            cout<< "2. Convert HH:MM:SS to seconds"<<endl;
            cout<< "3. Exit"<<endl;
            
       		cout << "Choose operation:"<<endl;    
        	cin >> choice;

        switch (choice) 
		{
            case 1:
                cout << "Enter total seconds: ";
                cin >> seconds;
                secondsToTime(seconds, hours, minutes, seconds);
                cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
                break;
            case 2:
                cout << "Enter time in HH:MM:SS format: ";
                cin >> hours >> minutes >> seconds;
                cout << "Total seconds: " << timeToSeconds(hours, minutes, seconds) << endl;
                break;
            case 3:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } 
	
	while (choice != 3);

    return 0;
}

