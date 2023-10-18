#include <iostream>
using namespace std;

long long a, b, c;

long long POW(long long a, long long b, long long m)
{
	if (b == 1)
	{
		return a % m;
	}

	long long val = POW(a, b / 2, m);
	val = val * val % m;

	if (b % 2 == 1)
	{
		return val * a % m;
	}
	else
	{
		return val;
	}
}

int main()
{
	cin >> a >> b >> c;
	cout << POW(a, b, c);
}
