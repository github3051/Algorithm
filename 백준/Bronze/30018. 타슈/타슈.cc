#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int b;
		cin >> b;
		if (a[i] - b > 0)
		{
			ans += a[i] - b;
		}
	}
	cout << ans;
}