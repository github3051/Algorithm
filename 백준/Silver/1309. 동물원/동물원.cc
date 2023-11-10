#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<vector<int>> dp(n, vector<int>(2,0));
    dp[0][0] = 1; // xx
    dp[0][1] = 1; // ox
    dp[0][2] = 1; // xo
    for(int i=1; i<n; ++i)
    {
        dp[i][0] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][2]) % 9901;
        dp[i][1] = (dp[i-1][0] + dp[i-1][2]) % 9901;
        dp[i][2] = (dp[i-1][0] + dp[i-1][1]) % 9901;
    }
    
    cout << (dp[n-1][0] + dp[n-1][1] + dp[n-1][2]) % 9901;
}

//풀이법이 여러가지인데 꼭 숙지할 것