#include <iostream>
#include <climits>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	int yMin = INT_MAX, yMax = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		if (yMin > y)
		{
			yMin = y;
		}

		if (yMax < y)
		{
			yMax = y;
		}
	}

	cout << yMax - yMin;
}