#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	vector<pair<int,int>> items(n + 1); // weight, value
	for (int i = 1; i <= n; ++i)
	{
		cin >> items[i].first >> items[i].second;
	}


	vector<vector<int>> dp(n + 1, vector<int>(k+1, 0)); // pair<items, weight> / dp[0]에 해당하는 열과 행을 0으로 초기화 
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= k; ++j)
		{
			if (j >= items[i].first) // j가 weight이므로 item의 weight과 비교
			{
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - items[i].first] + items[i].second); // 
			}
			else // 애초에 weight 초과로 i번째 해당하는 아이템을 못넣는 경우
			{
				dp[i][j] = dp[i - 1][j]; // dp[i-1][j] 는 i번째에 해당하는 아이템을 선택하지 않았을 경우를 뜻함.
			}
		}
	}

	cout << dp[n][k]; // 이때 index는 항상 dp배열을 따라갈 것. 만약 생각없이 첫 input이 n,k가 아니라 k,n이었으면 실수했을수도 있음
}