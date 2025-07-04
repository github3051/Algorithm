#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int l,w , h, V;
	while (cin >> l >> w >> h >> V)
	{
		if (l == 0 && w == 0)
		{
			break;
		}

		if (l == 0)
		{
			l = V / (w * h);
		}
		else if (w == 0)
		{
			w = V / (l * h);
		}
		else if (h == 0)
		{
			h = V / (w * l);
		}
		else if (V == 0)
		{
			V = l * w * h;
		}

		cout << l << ' ' << w << ' ' << h << ' ' << V << '\n';
	}
}