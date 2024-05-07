#include <iostream>
using namespace std;

int main()
{
    pair<int,int> player1;
    pair<int,int> player2;
    
    cin >> player1.first >> player1.second >> player2.first >> player2.second;
    
    while(player1.second > 0 && player2.second > 0)
    {
        player1.second -= player2.first;
        player2.second -= player1.first;
    }
    
    if(player1.second <= 0 && player2.second <= 0)
    {
        cout << "DRAW";
    }
    else if(player1.second <= 0)
    {
        cout << "PLAYER B";
    }
    else if(player2.second <= 0)
    {
        cout << "PLAYER A";
    }
}