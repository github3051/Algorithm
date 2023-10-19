#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int dp[32] = { 0, }; // 0으로 초기화
	dp[1] = 1; // 온전한 형태의 점화식을 합쳐서 한쪽 모서리가 없는 타일로 변환한 dp이다. dp[n] = f(n-1)
	dp[3] = 3;
	for (int i = 5; i <= n + 1; ++i)
	{
		dp[i] = 4 * dp[i - 2] - dp[i - 4];
	}
	cout << dp[n + 1];
}