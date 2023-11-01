#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int h, y;
	cin >> h >> y;

	int dp[20];
	dp[0] = h;

	for (int i = 1; i <= y; ++i)
	{
		if (i >= 5)
		{
			dp[i] = max({ (int)(dp[i - 1] * 1.05), (int)(dp[i - 3] * 1.2),(int)(dp[i - 5] * 1.35) });
		}
		else if (i >= 3)
		{
			dp[i] = max((int)(dp[i - 1] * 1.05), (int)(dp[i - 3] * 1.2));
		}
		else
		{
			dp[i] = (int)(dp[i - 1] * 1.05);
		}
	}

	cout << dp[y];
}

// dp를 생각해내는게 쉽지않다
