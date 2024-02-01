#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> dp(n+1,0);
    dp[0] = dp[1] = 1;
    
    for(int i=2; i<=n; ++i)
    {
        int num = 1;
        while(true)
        {
            bool event = false;
            dp[i] = num++;
            for(int j=1; i-2*j >= 0; ++j)
            {
                if(dp[i] - dp[i-j] == dp[i-j] - dp[i-2*j])
                {
                    event = true;
                    break;
                }
            }
            
            if(event == false)
            {
                 break;
            }
        }
    }
    
    cout << dp[n];
}