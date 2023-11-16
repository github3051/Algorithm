#include <iostream>
#include <vector>
#include <algorithm> // binary_search
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false); // 이부분 없으면 시간초과 뜸. 주의할 것. 왜일까?
	cin.tie(0);

	int n, m;
	while (cin >> n >> m)
	{
		if (n == 0 && m == 0)
			break;
		vector<int> cd(n);
		for (int i = 0; i < n; ++i)
			cin >> cd[i];

		int ans = 0;
		for (int i = 0; i < m; ++i)
		{
			int sy; // SunYoung
			cin >> sy;

			if (binary_search(cd.begin(), cd.end(), sy))
				ans += 1;
		}

		cout << ans << '\n';
	}
}