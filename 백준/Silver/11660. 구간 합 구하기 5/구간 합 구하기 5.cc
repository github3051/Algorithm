#include <iostream>
#include <vector>
using namespace std;

// 빌어먹을 ios::sync 시간초과 문제 좀 수정해줬으면 좋겠다.

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
	int n, testCases;
	cin >> n >> testCases;

	vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));
	vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			cin >> arr[i][j];
			dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1] + arr[i][j];
		}
	}

	//dp[1][1] = arr[0][0];
	//for (int i = 2; i <= n; ++i)
	//{
	//	dp[1][i] = dp[1][i - 1] + arr[1][i];
	//	dp[i][1] = dp[i - 1][1] + arr[i][1];
	//}

	//for (int i = 2; i <= n; ++i)
	//{
	//	for (int j = 2; j <= n; ++j)
	//	{
	//		dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1] + arr[i][j];
	//	}
	//}

	int sRow, sColumn, dRow, dColumn; //start, destination
	while (testCases--)
	{
		cin >> sRow >> sColumn >> dRow >> dColumn;
		cout << dp[dRow][dColumn] - dp[dRow][sColumn - 1] - dp[sRow - 1][dColumn] + dp[sRow - 1][sColumn - 1] << '\n';

	}
}

// 주의사항1: 이 문제만 그런건지는 모르겠지만 누적합은 input값을 넣으면서 dp배열을 만드는 것이 가능하다. 즉 위에 주석처럼 쓸데없이 input값을 세팅하는 코드를 짜지 않아도 된다.
// 주의사항2: dp배열은 맨 처음 사용하지 않는 인덱스를 위해서 1-indexed로 시작하는게 좋다. 0-indexed로 시작하면 인덱스에 -1이 들어가는 경우가 발생하는데 에러가 난다.