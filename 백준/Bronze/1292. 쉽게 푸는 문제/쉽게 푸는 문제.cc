#include <iostream>
using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int arr[2001];
	int idx = 0;
	for (int i = 0; i < 50; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			arr[idx] = i + 1;
			idx += 1;
		}
		if (idx >= 999)
			break;
	}

	int n, m;
	cin >> n >> m;

	int ans = 0;
	for (int i = n - 1; i <= m - 1; ++i)
	{
		ans += arr[i];
	}
	cout << ans;
}