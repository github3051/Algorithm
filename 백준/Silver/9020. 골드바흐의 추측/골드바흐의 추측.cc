#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool ChkPrime(const int& num)
{
	if (num <= 1)
	{
		return false;
	}

	for (int i = 2; i <= sqrt(num); ++i)
	{
		if (num % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
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
			if (ChkPrime(i) && ChkPrime(n - i))
			{
				small = i;
				big = n - i;
			}
		}

		cout << small << ' ' << big << '\n';
	}
}