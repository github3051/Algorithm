#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int idx = 1;
	while (true)
	{
		int a, b, c;
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}

		char var = ' ';
		double ans = 0;
		bool isAns = true;
		if (a == -1)
		{
			var = 'a';
			ans = c*c - b*b;
		}
		else if (b == -1)
		{
			var = 'b';
			ans = c * c - a * a;
		}
		else if (c == -1)
		{
			var = 'c';
			ans = a * a + b * b;
		}

		if (ans <= 0)
		{
			isAns = false;
		}


		cout << fixed << setprecision(3);
		cout << "Triangle #" << idx << '\n';
		if (!isAns)
		{
			cout << "Impossible.\n";
		}
		else
		{

			cout << var << " = " << sqrt(ans) << '\n';
		}
		cout << '\n';

		idx += 1;
	}
}