#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> box(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> box[i];
	}

	vector<int> dp(n, 1);
	// int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (box[i] < box[j] && dp[i] + 1 > dp[j]) // 뒤에 숫자가 더 커야됨 + (dp[i-1]+1) 보다 더 작아야 갱신
			{
				dp[j] = dp[i] + 1;
                //ans = max(ans,dp[j]);
			}
		}
	}

	cout << *max_element(dp.begin(), dp.end());
}

// max_element의 경우 배열을 순회하기 때문에 느릴것이라 착각할 수 있다.
// 주석처리한 ans = max(ans,dp[j]); 코드의 경우 max함수 자체는 O(1)의 시간복잡도를 가지지만 외곽의 2중 for문 때문에 O(n^2)의 시간복잡도를 가지게된다.
// 즉, 값을 전부 처리하고난 뒤 마지막에 배열을 한번 더 순회하는게 성능상 이점을 가진다.
// 만약 1중 for문이었다면 주석처리한 부분의 코드가 더 효율성이 좋았을 것이다.