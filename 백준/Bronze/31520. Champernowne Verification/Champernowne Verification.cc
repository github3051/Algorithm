#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;


	int k = 1;
	int sLen = str.length();
	for (int i = 0; i < sLen; ++i)
	{
		if (k < 10)
		{
			if (str[i] - '0' == k)
			{
				k += 1;
			}
			else
			{
				cout << -1;
				return 0;
			}
		}
		else if(k >= 10)
		{
			if (i == sLen - 1)
			{
				cout << -1;
				return 0;
			}

			int tmp = (str[i] - '0')*10 + (str[i + 1] - '0');
			if (tmp == k)
			{
				k += 1;
				i += 1;
			}
			else
			{
				cout << -1;
				return 0;
			}
		}
	}

	cout << k-1;
}