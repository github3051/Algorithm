#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	bool isMinus = false;

	if (n < 0)
	{
		isMinus = true;
		n *= -1;
	}

	vector<int> dp(n + 2); // f(n) = f(n+1) + f(n+2);
	vector<int> dpMinus(n + 2); // f(n) = f(n-2) - f(n-1);
	dp[0] = 0;
	dp[1] = 1;

	dpMinus[0] = 0;
	dpMinus[1] = 1; // n = -1

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = (dp[i - 1] + dp[i - 2]) % 1'000'000'000;
	}

	for (int i = 2; i <= n; ++i)
	{
		dpMinus[i] = (dpMinus[i - 2] - dpMinus[i - 1]) % 1'000'000'000;
	}

	if (n == 0)
	{
		cout << 0 << '\n' << 0;
	}
	else if(isMinus)
	{
		if (dpMinus[n] < 0)
		{
			cout << -1 << '\n' << dpMinus[n]*-1;
		}
		else
		{
			cout << 1 << '\n' << dpMinus[n];
		}
	}
	else
	{
		cout << 1 << '\n' << dp[n];
	}
}