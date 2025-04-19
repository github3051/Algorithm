#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int ans = 0;

	
	for (int i = 0; i < n; ++i)
	{
		int t[3];
		cin >> t[0] >> t[1] >> t[2];

		if ((t[0] == -1 && t[1] == -1 && t[2] == -1) || t[0] == -1)
		{
			continue;
		}


		if (t[2] != -1)
		{
			if (t[2] >= t[1] && t[2] >= t[0] && t[1] >= t[0])
			{
				ans += 1;
			}
		}
		else
		{
			if (t[1] != -1)
			{
				if (t[1] >= t[0])
				{
					ans += 1;
				}
			}
			else
			{
				ans += 1;
			}
		}
	}
	cout << ans;
}
