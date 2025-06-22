#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	while (true)
	{
		double sum = 0;
		double a[6];
		for (int i = 0; i < 6; ++i)
		{
			cin >> a[i];
			sum += a[i];
		}

		if (sum== 0)
			break;
		sort(a, a + 6);

		cout << (sum-a[0]-a[5]) / 4 << '\n';
	}
}