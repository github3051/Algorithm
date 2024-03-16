#include<iostream>
using namespace std;

long long dp[10002];
int main() {

	int n, m;
	cin >> n >> m;

	// m초 보다 적을때에는 A스킬밖에 못씀
	for (int i = 1; i < m; i++) 
	{
		dp[i] = 1;
	}
	dp[m] = 2; // m초에는 b스킬 하나 or A스킬 m개 총 2가지 경우의 수


	for (int i = m + 1; i <= n; i++) 
	{
		dp[i] = (dp[i - 1] + dp[i - m]) % 1000000007; // n=4, m=2일때,  dp[3] = dp[2] + dp[1] -> dp[2] , dp[2]는 AA or B -> AAA BA dp[1]은 A -> AB  dp[3]은 AAA, AB, BA 3개
												      // dp[4] = dp[3] + dp[2]       dp[3]은 AAA, AB, BA -> AAAA, ABA, BAA / dp[2]는 AA, B -> AAB, BB
	}

	cout << dp[n] << '\n';

	return 0;
}