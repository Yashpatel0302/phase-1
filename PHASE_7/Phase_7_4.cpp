#include <iostream>
using namespace std;

int shorterRoute(int routeA, int routeB) 
{
    if (routeA < routeB)
        return routeA;
        
    else
        return routeB;
}

int main() 
{
    int routeA = 212;
    int routeB = 213;
    int shortestRoute = shorterRoute(routeA, routeB);
    cout << "Shortest route distance: " << shortestRoute << " KM" << endl;
    
    return 0;
}

