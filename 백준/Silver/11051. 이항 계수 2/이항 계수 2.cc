#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    vector<vector<int>> dp(n+1, vector<int>(n+1,0));
    for(int i=1; i<=n; ++i)
    {
        dp[i][0] = 1;
        dp[i][i] = 1;
    }
    
    for(int i=2; i<=n; ++i)
    {
        for(int j=1; j<i; ++j)
        {
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % 10'007;
        }
    }
    
    cout << dp[n][k];
}