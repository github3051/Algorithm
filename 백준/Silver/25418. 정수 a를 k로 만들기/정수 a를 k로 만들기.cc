#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main()
{
	int a, k;
	cin >> a >> k;

	//vector<int> visit(k + 1);
	vector<int> dp(k + 1);

	for (int i = a + 1; i <= k; ++i)
	{
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0 && i / 2 >= a)
		{
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
	}

	cout << dp[k];
}