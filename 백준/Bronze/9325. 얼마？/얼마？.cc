#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    
    while(testCases--)
    {
        int totalPrice;
        cin >> totalPrice;
        
        int n, optN,optPrice;
        cin >> n;
        for(int i=0; i<n; ++i)
        {
            cin >> optN >> optPrice;
            totalPrice += optN*optPrice;
        }
        cout << totalPrice << '\n';
    }
}