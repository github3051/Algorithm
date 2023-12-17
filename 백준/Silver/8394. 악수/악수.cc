#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> dp(n, 0);
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 3;
    for(int i=3; i<n; ++i)
    {
        dp[i] = (dp[i-1] + dp[i-2])%10;
    }
    cout << dp[n-1];
}