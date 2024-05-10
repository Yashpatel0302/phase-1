#include <iostream>
using namespace std;

int joinRopes(int rope1, int rope2) 
{
    return rope1 + rope2;
}

float joinRopes(float rope1, float rope2) 
{
    return rope1 + rope2;
}

int main() 
{
    int length1 = 5;
    int length2 = 7;

    int totalLengthInt = joinRopes(length1, length2);

    cout << "Total length after joining (int): " << totalLengthInt << endl;

    float length3 = 5.5;
    float length4 = 7.3;

    float totalLengthFloat = joinRopes(length3, length4);

    cout << "Total length after joining (float): " << totalLengthFloat << endl;

    return 0;
}

