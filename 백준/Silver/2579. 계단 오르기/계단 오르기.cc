#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int numF; cin >> numF;
	vector<int> dp(numF, 0);
	vector<int> floor(numF, 0);

	for (int i = 0; i < numF; i++)
		cin >> floor[i];


	dp[0] = floor[0];
	dp[1] = floor[0] + floor[1];
	dp[2] = max(floor[0] + floor[2], floor[1] + floor[2]);
	int cnt=0;
	for (int i = 3; i < numF; i++)
	{
		dp[i] = max(dp[i - 3] + floor[i - 1] + floor[i], dp[i - 2] + floor[i]);
	}
	cout << dp[numF - 1];
	return 0;
}