#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    
    while(testCases--)
    {
        string n;
        cin >> n;
        if( (n[n.length()-1] - '0')%2 == 1)
        {
            cout << "odd\n";
        }
        else
        {
            cout << "even\n";
        }
    }
    
}