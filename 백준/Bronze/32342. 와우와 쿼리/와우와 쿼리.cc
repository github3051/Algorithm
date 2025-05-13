#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		string str;
		cin >> str;
		int sLen = str.length();
		int ans = 0;
		if(sLen >=3)
		{
			for (int i = 0; i <= sLen - 3; ++i)
			{
				ans += (str.substr(i,3) == "WOW" ? 1 : 0);
			}
		}

		cout << ans << '\n';
	}
}