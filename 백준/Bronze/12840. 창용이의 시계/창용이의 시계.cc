#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int h, m, s, q;
	cin >> h >> m >> s >> q;
	int time = h * 3600 + m * 60 + s;
	for (int i = 0; i < q; ++i)
	{
		int t, c;
		cin >> t;
		if (t == 1)
		{
			cin >> c;
			time += c;
		}
		else if (t == 2)
		{
			cin >> c;
			time -= c;
		}
		else if (t == 3)
		{
			time %= 24 * 3600;
			if (time < 0)
			{
				time += 24 * 3600;
			}

			cout << time / 3600 << ' ' << (time%3600) / 60 << ' ' << time % 60 << '\n';
		}
	}
}