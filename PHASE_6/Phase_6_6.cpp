#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(0));
    
    int randomNumber = rand() % 900000 + 100000;
    
    cout << "Random Number: " << randomNumber << endl;
    
    return 0;
}
