#include <iostream>
#include <string>
using namespace std;

bool Chk369(const char c)
{
	if (c == '3' || c == '6' || c == '9')
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int n;
	cin >> n;

	string str;
	
	int len;
	int ans = 0;
	for (int i = 1; i <= n; ++i)
	{
		str = to_string(i);
		len = str.length();

		for (int i = 0; i < len; ++i)
		{
			if (Chk369(str[i]))
			{
				ans += 1;
			}
		}
	}

	cout << ans;
}