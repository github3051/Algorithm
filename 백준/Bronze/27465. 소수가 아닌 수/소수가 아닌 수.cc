#include <iostream>
#include <vector>
using namespace std;

bool ChkPrime(const int& n)
{
	if (n <= 1) return false;

	if (n == 2) return true;

	// 짝수
	if (n % 2 == 0) return false;

	// 홀수
	for (int i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int n;
	cin >> n;

	for (int i = n; ; ++i)
	{
		if (!ChkPrime(i))
		{
			cout << i;
			break;
		}
	}
}