#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int ans = 0;
	for (int nk = 1; nk <= (n+2) / 2; ++nk) // 2*a + 2 = n -> (n+2)/2
	{
		for (int yh = nk + 2; yh < n - nk; ++yh)
		{
			int th = n - (nk + yh);
			if (th != 0 && th % 2 == 0 && nk + yh + th == n)
			{
				ans += 1;
			}
		}
	}
	cout << ans;
}