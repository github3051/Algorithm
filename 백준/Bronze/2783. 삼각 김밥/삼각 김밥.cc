#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double s25x, s25y;
	cin >> s25x >> s25y;

	double ans = s25x/s25y*1000;

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		double etcx, etcy;
		cin >> etcx >> etcy;

		double etcAns = etcx/etcy*1000;
		if (ans > etcx / etcy * 1000)
		{
			ans = etcAns;
		}
	}

	cout << fixed << setprecision(2) << ans;
}