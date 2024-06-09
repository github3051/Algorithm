#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    
    while(testCases--)
    {
        int n, k;
        cin >> n >> k;
        int ans = 0;
        for(int i=0; i<n; ++i)
        {
            int candy;
            cin >> candy;
            ans += candy/k;
        }
        cout << ans << '\n';
    }
}