#include <iostream>
#include <vector>
using namespace std;

int alphabet[] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };

int main()
{
	string myName, herName;
	cin >> myName >> herName;

	int len = myName.length();
	vector<vector<int>> dp(2 * len, vector<int>(2 * len, 0));

	for (int myIdx = 0, herIdx = 0, i = 0; i < 2 * len; ++i)
	{
		if (i % 2) // 여자이름
		{
			dp[0][i] = alphabet[herName[herIdx] - 'A'];
			herIdx += 1;
		}
		else // 남자이름
		{
			dp[0][i] = alphabet[myName[myIdx] - 'A'];
			myIdx += 1;
		}
	}

	for (int i = 1; i < 2 * len; ++i)
	{
		for (int j = 0; j < 2 * len - i; ++j)
		{
			dp[i][j] = (dp[i - 1][j] + dp[i - 1][j + 1]) % 10;
		}
	}

	cout << dp[len * 2 - 2][0] << dp[len * 2 - 2][1];
}