#include <iostream>
#include <cmath>
using namespace std;

int main() {
	while (true)
	{
		int n;
		cin >> n;

		if (n == 0)
			break;

		int a1, a2, a3;
		cin >> a1 >> a2 >> a3;

		int sum = 0;
		if (a2 - a1 == a3 - a2)
		{
			for (int i = 0; i < n; ++i)
				sum += a1 + (a2 - a1) * i;
		}
		else
		{
			sum = a1 * (pow(a2 / a1, n)-1) / (a2 / a1 - 1);
		}
		cout << sum << '\n';
	}
}