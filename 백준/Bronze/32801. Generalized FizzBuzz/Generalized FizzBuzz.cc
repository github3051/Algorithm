#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, a, b;
	cin >> n >> a >> b;
	int fizz = 0, buzz = 0, fzbz = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (!(i % a) && !(i % b))
		{
			fzbz += 1;
		}
		else if (!(i % a))
		{
			fizz += 1;
		}
		else if (!(i % b))
		{
			buzz += 1;
		}
	}

	cout << fizz << ' ' << buzz << ' ' << fzbz;
}