#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, dist;
		cin >> n >> dist;

		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			int v, f, c;
			cin >> v >> f >> c; // v = 광년/시간 , c = 듀테륨/시간
			
			if (v * f / c >= dist)
			{
				ans += 1;
			}
		}

		cout << ans << '\n';
	}
}