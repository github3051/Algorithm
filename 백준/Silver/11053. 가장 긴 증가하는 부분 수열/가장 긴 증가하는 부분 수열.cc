#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[1001];
int n;

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	vector<int> dp(n, 0);

	for (int i = 0; i < n; ++i) // 구하려는 dp의 위치(현재 위치)
	{
		for (int j = 0; j < i; ++j) // 구하려는 위치보다 앞에있는 값들 확인
		{
			if (arr[j] < arr[i]) // 증가 수열이기 때문에 현재 위치보다 앞에있는 값들은 현재 값보다 작아야됨
			{
				dp[i] = max(dp[i], dp[j]);
			}
		}
		dp[i] += 1;
	}
	
	cout << *max_element(dp.begin(), dp.end());
}