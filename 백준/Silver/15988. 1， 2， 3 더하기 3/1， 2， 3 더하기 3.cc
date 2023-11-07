#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<long long> dp(1'000'001);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i=4; i<=1'000'000; ++i)
    {
        dp[i] = (dp[i-3] + dp[i-2] + dp[i-1])%1'000'000'009;
    }
    
    for(int i=0; i<n; ++i)
    {
        int tmp;
        cin >> tmp;
        cout << dp[tmp] << '\n';
    }
}