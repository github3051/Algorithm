#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int testCases;
	cin >> testCases;
	while (testCases--)
	{
		int n;
		cin >> n;

		vector<int> coins(n); 

		for (int i = 0; i < n; ++i)
		{
			cin >> coins[i];
		}

		int money;
		cin >> money;

		vector<int> dp(money + 1, 0);
		dp[0] = 1;
		for (int i = 0; i < n; ++i)
		{
			for (int j = coins[i]; j <= money; ++j)
			{
				dp[j] += dp[j - coins[i]];
			}
		}
		cout << dp[money] << '\n';
	}
}

// 배낭문제는 어떤 물건이 있을때 넣을지 말지 2가지 경우에만 해당되는데, 여기는 같은 물건을 여러개 넣을 수 있다는게 문제다. 풀이 과정만 보면 배낭문제보다는 일반 dp라고 하는게 맞는거같은데...