#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();

	vector<char> vec = {'A','E','I','O','U','a','e','i','o','u'};
	while (t--)
	{
		string str;
		getline(cin, str);
		int ans = 0, blank = 0;
		int sLen = str.length();
		for (int i = 0; i < sLen; ++i)
		{
			if (str[i] == ' ')
			{
				blank += 1;
			}
			else
			{
				for (const auto& elem : vec)
				{
					if (str[i] == elem)
					{
						ans += 1;
					}
				}
			}
		}
		cout << sLen - ans - blank <<' ' << ans << '\n';
	}

}