#include <iostream>
using namespace std;

int main() 
{
    float amount, rate, gst;

    
    cout << "Enter the amount: ";
    cin >> amount;
    cout << "Enter the GST rate (%): ";
    cin >> rate;


    gst = (amount * rate) / 100;
    cout << "GST amount: " << gst << endl;

    return 0;
}

