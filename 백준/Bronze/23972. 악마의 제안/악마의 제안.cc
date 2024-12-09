#include <iostream>
#include <vector>
using namespace std;

int main()
{
	bool a = (900 % 29 == 0 ? true : false);

	long long k, n;
	cin >> k >> n; // (x - k)*n >= x 

	if (n == 1)
	{
		cout << -1;
	}
	else
	{
		long long x = k * n / (n - 1);
		if (k * n % (n - 1) == 0)
		{
			cout << x;
		}
		else
		{
			cout << x + 1;
		}
	}
}