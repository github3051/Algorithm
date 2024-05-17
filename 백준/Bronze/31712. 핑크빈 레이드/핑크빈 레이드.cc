#include <iostream>
using namespace std;

struct skill
{
	int cycle;
	int damage;
};

int main()
{
	int n = 3;
	struct skill* player = new struct skill[n];
	int bossHP;
	for (int i = 0; i < n; ++i)
	{
		cin >> player[i].cycle >> player[i].damage;
	}
	cin >> bossHP;
	for (int i = 0; i < n; ++i)
	{
		bossHP -= player[i].damage;
	}

	int ans = 0;
	while (true)
	{
		for (int i = 1; ; ++i)
		{
			for (int j = 0; j < n; ++j)
			{

				if (i % player[j].cycle == 0)
				{
					ans = i;
					bossHP -= player[j].damage;
				}
			}

			if (bossHP <= 0)
			{
				cout << ans;
				delete[] player;
				return 0;
			}
		}
	}
}