#include <iostream>
using namespace std;

int main() 
{
    cout << "Player 1, enter your dare work: ";
    
    char player1_dare[100];
    
    cin.getline(player1_dare, 100);
    cout << "Player 2, enter your dare work: ";
    
    char player2_dare[100];
    cin.getline(player2_dare, 100);

    char temp[100];
    strcpy(temp, player1_dare);
    strcpy(player1_dare, player2_dare);
    strcpy(player2_dare, temp);

    cout << "\nDare for Player 1: " << player1_dare << endl;
    cout << "Dare for Player 2: " << player2_dare << endl;

    return 0;
}

