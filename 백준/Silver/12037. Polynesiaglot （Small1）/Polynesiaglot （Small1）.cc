#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int t;
    cin >> t;
    
    int c,v,l;
    
    
    int count = 1;
    while(count <= t)
    {
        vector<vector<long long>> dp(16,vector<long long>(2,0));
        cin >> c >> v >> l;
        dp[1][0] = c;
        dp[1][1] = v;
        for(int i = 1; i < l; i++)
        {
            dp[i + 1][1] = ((dp[i][0] + dp[i][1]) * v) % 1000000007;
            dp[i + 1][0] = (dp[i][1] * c) % 1000000007;
        }
        cout << "Case " << "#" << count << ": " << dp[l][1]  << "\n";
        count += 1;
        
    }
}