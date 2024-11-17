#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, k, p;
	cin >> n >> k >> p;

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int noCream = 0;
		bool bread;
		for (int j = 0; j < k; ++j)
		{
			cin >> bread;
			if (!bread)
			{
				noCream += 1;
			}
		}

		if (noCream < p)
		{
			ans += 1;
		}
	}
	cout << ans;
}