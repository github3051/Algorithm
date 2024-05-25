#include <iostream>
using namespace std;

int main()
{
    int t,nChickLegs,nChickens;
    cin >> t;
    
    while(t--)
    {
        cin >> nChickLegs >> nChickens;
        int brokenLegs = nChickens*2 - nChickLegs;
        cout << brokenLegs << ' ' << nChickens - brokenLegs << '\n';
    }
}