#include <iostream>
using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	int diff = 3 - k;

	// 차이가 0보다 작으면 정방향
	if (diff < 0)
	{
		diff *= -1;
		while (diff--)
		{
			m += 1;
			if (m > n)
			{
				m = 1;
			}
		}
	}
	else
	{
		while (diff--)
		{
			m -= 1;
			if (m < 1)
			{
				m = n;
			}
		}
	}

	cout << m;
}