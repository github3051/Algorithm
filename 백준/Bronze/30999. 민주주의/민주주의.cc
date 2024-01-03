#include <iostream>
using namespace std;

int main()
{
    int testCases, n;
    cin >> testCases >> n;
    
    int ans = 0;
    while(testCases--)
    {
        int cnt = 0;
        char c;
        for(int i=0; i<n; ++i)
        {
            cin >> c;
            if(c == 'O')
            {
                cnt += 1;
            }
        }
        
        if(cnt > n/2)
        {
            ans += 1;
        }
    }
    
    cout << ans;
}