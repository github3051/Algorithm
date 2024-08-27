#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<bool> isPrime(10001, true);
	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i*i <= 10000; ++i)
	{
		if (isPrime[i])
		{
			for (int j = i * i; j <= 10000; j += i)
			{
				isPrime[j] = false;
			}
		}
	}

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int small = 0;
		int big = 0;
		for (int i = 2; i <= n/2; ++i)
		{
			if (isPrime[i] && isPrime[n - i])
			{
				small = i;
				big = n - i;
			}
		}

		cout << small << ' ' << big << '\n';
	}
}