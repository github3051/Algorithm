#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int avg = (a + b + c) / 3;
	int ans = 0;

	if (a - avg > 0)
	{
		b += a - avg;
		ans += a - avg;
	}

	if (c - avg > 0)
	{
		b += c - avg;
		ans += c - avg;
	}

	cout << ans + (b - avg);
}