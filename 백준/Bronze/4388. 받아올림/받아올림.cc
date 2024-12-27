#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true)
	{
		long long a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)
		{
			break;
		}

		long long big, small;
		if (a >= b)
		{
			big = a;
			small = b;
		}
		else
		{
			big = b;
			small = a;
		}

		string str1 = to_string(big);
		string str2 = to_string(small);

		int bLen = str1.length();
		int sLen = str2.length();


		bool isUp = false;

		int ans = 0;
		for (int i = sLen - 1, j = bLen - 1; i >= 0 && j>= 0; --i, --j) // i가 small, j가 big
		{
			// 앞 연산에서 Up이었다면
			if (isUp)
			{
				if ((str1[j] - '0') + (str2[i] - '0') + 1 >= 10)
				{
					ans += 1;
					isUp = true;
				}
				else
				{
					isUp = false;
				}
			}
			// Up이 아닌채로 계산할 경우
			else
			{
				if ((str1[j] - '0') + (str2[i] - '0') >= 10)
				{
					ans += 1;
					isUp = true;
				}
				else
				{
					isUp = false;
				}
			}
		}

		if (bLen != sLen)
		{
			for (int i = bLen - sLen - 1; i >= 0; --i)
			{
				if (isUp)
				{
					if (str1[i] + 1 >= 10)
					{
						isUp = true;
						ans += 1;
					}
					else
					{
						break;
					}
				}
				else
				{
					break;
				}
			}
		}
		cout << ans << '\n';
	}
}