#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    int x,y;
    while(testCases--)
    {
        cin >> x >> y;
        if(x>=y)
        {
            cout << "MMM BRAINS\n";
        }
        else
        {
            cout << "NO BRAINS\n";
        }
    }
}