#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int broken = 101, safe = -1, tmp;
	string str;

	while (n--)
	{
		cin >> tmp >> str;
		if (str == "SAFE")
		{
			if (tmp > safe)
			{
				safe = tmp;
			}
		}
		else if (str == "BROKEN")
		{
			if (tmp < broken)
			{
				broken = tmp;
			}
		}
	}

	if (broken == 101)
	{
		cout << safe+1 << ' ' << k - 1;
	}
	else if (safe == -1)
	{
		cout << 2 << ' ' << broken - 1;
	}
	else
	{
		// 브로큰과 세이프의 차이가 1밖에 안나는 경우
		if (broken - safe == 1)
		{
			cout << broken << ' ' << safe;
		}
		else
		{
			cout << safe + 1 << ' ' << broken - 1;
		}
	}
}