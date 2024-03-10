#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> dp(n+1);
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for(int i=4; i<=n; ++i)
    {
        dp[i] = (dp[i-1]+dp[i-2])%1'000'000'007;
    }
    cout << dp[n];
}