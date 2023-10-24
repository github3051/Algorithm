#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[101][10];
int n;
const int mod = 1'000'000'000;

int main()
{
	cin >> n;
	for (int i = 1; i < 10; ++i)
	{
		dp[1][i] = 1;
	}

	for (int i = 2; i <= n; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (j == 0)
			{
				dp[i][j] = dp[i - 1][j + 1]; // 맨 끝자리가 0인 경우에 올 수 있는 숫자는 1 뿐이다. j-1에 걍 1 집어넣어도 된다.
			}
			else if (j == 9)
			{
				dp[i][j] = dp[i - 1][j - 1]; // 맨 끝자리가 9인 경우에 올 수 있는 숫자는 8 뿐이다. j-1에 걍 8 집어넣어도 된다.
			}
			else
			{
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
			}

			dp[i][j] %= mod;
		}
	}

	int ans = 0;
	for (int i = 0; i < 10; ++i)
	{
		ans = (ans + dp[n][i]) % mod;
	}

	cout << ans;
}