#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int testCases;
	cin >> testCases;

	for (int i = 1; i <= testCases; ++i)
	{
		int p, q;
		cin >> p >> q;

		vector<long long> dp(p + 1, 1);
		for (int j = 3; j <= p; ++j)
		{
			dp[j] = (dp[j - 1] + dp[j - 2]) % q;
		}

		cout << "Case #" << i << ": " << dp[p]%q << '\n';
	}
}