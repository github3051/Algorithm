#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    while(testCases--)
    {
        int n;
        cin >> n;
        cout << "Pairs for " << n << ": ";
        
        
        bool comma = false;
        for(int i=1; i<=n/2; ++i)
        {
            if(n == i + (n-i) && i != (n-i))
            {
                if(comma)
                {
                    cout << ", ";
                }
                cout << i << ' ' << n-i;
                comma = true;
            }
        }
        cout << '\n';
    }
}