#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<bool> dp(1001, false);
	dp[1] = true;
	dp[2] = false;
	dp[3] = true;
	dp[4] = true;
	for (int i = 5; i <= n; ++i)
	{
		if (dp[i - 4] && dp[i - 3]  && dp[i - 1])
		{
			dp[i] = false;
		}
		else
		{
			dp[i] = true;
		}
	}

	if (dp[n])
	{
		cout << "SK";
	}
	else
	{
		cout << "CY";
	}
}