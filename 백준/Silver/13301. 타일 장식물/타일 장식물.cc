#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    
    long long dp[81];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    
    for(int i=3; i<=n; ++i)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    cout << 4*dp[n] + 2*dp[n-1];
}