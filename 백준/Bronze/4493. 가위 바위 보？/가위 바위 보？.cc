#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        int p1Score = 0,p2Score = 0;
        char p1,p2;
        cin >> n;
        
        for(int i=0; i<n; ++i)
        {
            cin >> p1 >> p2;
            if( (p1 == 'R' && p2 == 'S' )||(p1 == 'S' && p2 == 'P' )||(p1 == 'P' && p2 == 'R' ))
            {
                p1Score += 1;
            }
            else if( (p1 == 'R' && p2 == 'P' ) || (p1 == 'S' && p2 == 'R' ) || (p1 == 'P' && p2 == 'S' ))
            {
                p2Score += 1;
            }
        }
        if(p1Score == p2Score)
        {
            cout << "TIE\n";
        }
        else if(p1Score > p2Score)
        {
            cout << "Player 1\n";
        }
        else
        {
            cout << "Player 2\n";
        }
    }
}