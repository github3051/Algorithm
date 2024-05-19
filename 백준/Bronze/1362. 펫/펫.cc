
#include <iostream>
using namespace std;

int main()
{
	int o, w;
	int idx = 1;
	while (cin >> o >> w)
	{
		if (o == 0 && w == 0)
		{
			return 0;
		}

		char scenario;
		int n;
		bool isDead = false;
		while (cin >> scenario >> n)
		{
			if (scenario == '#' && n == 0)
			{
				break;
			}

			if (w <= 0)
			{
				isDead = true;
			}

			if (scenario == 'E')
			{
				w -= n;
			}
			else if (scenario == 'F')
			{
				w += n;
			}
		}

		cout << idx;
		if (isDead == true || w <= 0)
		{
			cout << " RIP\n";
		}
		else if (o / 2 < w && w < 2 * o)
		{
			cout << " :-)\n";
		}
		else
		{
			cout << " :-(\n";
		}
		idx += 1;
	}
}