#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    while(testCases--)
    {
        int n,m;
        cin >> n >> m;
        int ans = 0;
        for(int i=2; i<n; ++i) // i == b
        {
            for(int j=1; j<i; ++j) // j == a
            {
                if( (j*j + i*i + m)%(j*i) == 0)
                {
                    ans += 1;
                }
            }
        }
        
        cout << ans << '\n';
    }
}