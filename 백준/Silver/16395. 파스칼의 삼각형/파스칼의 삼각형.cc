#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    
    
    int dp[31][31];
    
    dp[1][1] = 1;
    for(int i=2; i<=n; ++i)
    {
        dp[i][1] = 1;
        dp[i][i] = 1;
    }
    
    for(int i=3; i<=n; ++i)
    {
        for(int j=2; j<=n-1; ++j)
        {
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }
    
    cout << dp[n][k];
}