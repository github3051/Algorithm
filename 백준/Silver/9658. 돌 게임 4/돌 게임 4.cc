
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<bool> dp(n + 5, 0); // true면 SK 승리, false면 CY 승리 -> 패배 == 마지막 돌을 가져간다
	dp[1] = false; // CY 승리
	dp[2] = true; // SK 승리
	dp[3] = false; // CY 승리
	dp[4] = true; // SK 승리

	for (int i = 5; i <= n; ++i)
	{
		if (dp[i - 1] && dp[i - 3] && dp[i - 4]) // 만약에 이 전에 마지막 돌을 전부 CY가 가져갔다면, 다음에는 반드시 SK가 가져가야 하므로 SK가 패배함.
		{
			dp[i] = false;
		}
		else
		{
			dp[i] = true;
		}
	}

	cout << (dp[n] == true ? "SK" : "CY");
}