#include <iostream>
#include <vector>
//#include <iomanip>
using namespace std;

int main()
{
	int testCases;
	cin >> testCases;

	cout << fixed;
	cout.precision(1);

	while (testCases--)
	{
		int n;
		cin >> n;

		int c, cTotal = 0;
		double g, gTotal = 0.0;
		for (int i = 0; i < n; ++i)
		{
			cin >> c >> g;
			cTotal += c;
			gTotal += g*c;
		}

		cout  << cTotal << ' ' << gTotal / cTotal << '\n';

	}
}