#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> dp(51);
    dp[0] = 1;
    dp[1] = 1;
    
    for(int i=2; i<=n; ++i)
    {
        dp[i] = (dp[i-1] + dp[i-2] + 1)%1'000'000'007;
    }
    
    cout << dp[n];
}