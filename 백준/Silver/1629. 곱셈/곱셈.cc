#include <iostream>
using namespace std;

long long a, b, c;

int main()
{
	cin >> a >> b >> c;

	long long ans = 1;

	while (b > 0)
	{
		if (b % 2 == 1)
		{
			ans = (ans * a) % c;
		}
		a = a * a % c;
		b /= 2;
	}

	cout << ans;
}
