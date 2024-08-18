#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int sLen = str.length();

	int ans = 0;

	for (int i = 0; i < sLen; ++i)
	{
		if (str[i] == '0')
		{
			ans += 1;
		}
	}

	for (int i = sLen - 1; i >= 0; --i)
	{
		if (str[i] == '0')
		{
			ans -= 1;
		}
		else
		{
			break;
		}
	}

	cout << ans;
}