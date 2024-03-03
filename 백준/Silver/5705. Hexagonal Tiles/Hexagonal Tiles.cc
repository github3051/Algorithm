#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> dp(41, 0);
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= 40; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	while (true)
	{
		int n;
		cin >> n;

		if (n == 0)
		{
			break;
		}

		cout << dp[n] << '\n';
	}

	return 0;
}