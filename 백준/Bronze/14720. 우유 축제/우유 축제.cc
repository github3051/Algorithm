#include <iostream>
using namespace std;

int fruitOrder[3] = { 0,1,2 };

int main()
{
	int n;
	cin >> n;

	int tmp, idx = 0, ans = 0;
	bool isStrawberry = false;
	for (int i = 0; i < n; ++i)
	{
		cin >> tmp;
		if (!isStrawberry && tmp == 0)
		{
			isStrawberry = true;
		}

		if (isStrawberry)
		{
			if (tmp == fruitOrder[idx%3])
			{
				ans += 1;
				idx += 1;
			}
		}
	}

	cout << ans;
}