#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	while (true)
	{
		long long a, b, c, d;
		cin >> a >> b >> c >> d;
		if (a == 0 && b == 0 && c == 0 && d == 0)
		{
			break;
		}

		int ans = 0;
		while (true)
		{
			if (a == b && b == c && c == d)
			{
				cout << ans << '\n';
				break;
			}

			ans += 1;

			long long ab = abs(a - b);
			long long bc = abs(b - c);
			long long cd = abs(c - d);
			long long da = abs(d - a);
			
			a = ab;
			b = bc;
			c = cd;
			d = da;


		}
	}
}