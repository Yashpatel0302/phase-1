#include <iostream>
using namespace std;

int main() 
{
    int currentTime = static_cast<int>(time(nullptr));
    
    int seed = (currentTime & 0xFFFF) | ((currentTime >> 16) << 16);
    
    srand(seed);
    
    int randomNumber = rand() % 900000 + 100000;
    
    cout << "Random Number: " << randomNumber << endl;
    
    return 0;
}

