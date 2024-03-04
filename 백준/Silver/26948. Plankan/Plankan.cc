#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<long long> dp(n+1, 0);
    dp[0] = dp[1] = 1;
    if (n > 1) dp[2] = 2;

    for (int i = 3; i <= n; ++i) 
    {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    cout << dp[n];

    return 0;
}