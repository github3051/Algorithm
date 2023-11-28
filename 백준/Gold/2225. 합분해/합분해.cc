#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int n, k;
	cin >> n >> k;

	vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, 0)); // dp[n][k] n까지의 숫자 중 k개를 뽑는 경우
	for (int i = 1; i <= n; ++i)
	{
		dp[i][1] = 1; // 1개의 숫자를 골라서 i를 만들 수 있는 경우의 수는 1개밖에 없음
	}

	for (int i = 1; i <= k; ++i)
	{
		dp[1][i] = i; // i개의 숫자를 골라서 1을 만들 수 있는 경우의 수는 i개  ex) k=3이라면 { 1 0 0, 0 1 0, 0 0 1 } 3개
	}

	for (int i = 2; i <= n; ++i)
	{
		for (int j = 1; j <= k; ++j)
		{
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1'000'000'000;
		}
	}

	cout << dp[n][k];
}


// 뽑아낼 수 있는 점화식이 두 개인데, 하나는 위의식 하나는 dp[n][k] = dp[0][k-1] + dp[1][k-1] + dp[2][k-1] + ....dp[n][k-1]; 가 있는데, 위에것이 더 간단함